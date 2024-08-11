
TARGET = httpResp

FLAGS = -g -O3 -msse4.2 -Wall -Wextra -Werror -Werror=pedantic

all:
	g++ $(FLAGS) -I./ $(shell find ./ -name '*.cc') -o $(TARGET) -DDEBUG_MODE2

clean:
	rm -f $(TARGET)

