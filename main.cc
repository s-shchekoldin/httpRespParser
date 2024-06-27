#include "httpResp.h"
#include <fstream>

void httpRespResult::resp(__attribute__((unused)) const char * data, __attribute__((unused)) unsigned len, __attribute__((unused)) bool isFirst, __attribute__((unused)) bool isLast)
{
    printf("\tDATA(%u)[%u_%u]: ", len, isFirst, isLast);
    for(unsigned i = 0; i < len; i++)
        printf("%c", data[i]);
    printf("\n");
}

int main()
{
    std::ifstream f("input.txt");
    std::string input((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());

    httpResp state;

    printf("===Test1 - full request:===\n");
    state.parse(input);

    printf("===Test2 - data fragmentation 1 byte===\n");
    for(const auto & c : input)
        if (!state.parse(&c, 1))
            printf("Error parse\n");

    return 0;
}
