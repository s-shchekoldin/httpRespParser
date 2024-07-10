// ==============================================================
// Generated using https://www.vsyn.ru/
// Author: Sergey V. Shchekoldin     Email: shchekoldin@gmail.com
// ==============================================================

#include "httpResp.h"

inline void httpResp::parse(state_t & state)
{
    while(true)
    {
#ifdef DEBUG_MODE
        printf("State%s: %s data: [%x, %x, %x, %x, %x]=%.*s\n", &state == &mainState ? "" : "*", state.name(),
            uint8_t(&state.data[0] < state.end ? state.data[0] : 0),
            uint8_t(&state.data[1] < state.end ? state.data[1] : 0),
            uint8_t(&state.data[2] < state.end ? state.data[2] : 0),
            uint8_t(&state.data[3] < state.end ? state.data[3] : 0),
            uint8_t(&state.data[4] < state.end ? state.data[4] : 0),
            10, state.data);
#endif
        node_t n = state.node;
        const char * d = state.data;
        switch(state.node)
        {
            case node_t::LOOP_1_0: loop_1_0(state); break;
            case node_t::LABEL_1_0: if (!label_1_0(state) || state.node != node_t::LOOP_1_1) break; __attribute__ ((fallthrough));
            case node_t::LOOP_1_1: loop_1_1(state); break;
            case node_t::TEXT_2_0: if (!text_2_0(state, false) || state.node != node_t::RANGE_2_1) break; __attribute__ ((fallthrough));
            case node_t::RANGE_2_1: if (!range_2_1(state) || state.node != node_t::TEXT_2_2) break; __attribute__ ((fallthrough));
            case node_t::TEXT_2_2: if (!text_2_2(state) || state.node != node_t::RANGE_2_3) break; __attribute__ ((fallthrough));
            case node_t::RANGE_2_3: if (!range_2_3(state) || state.node != node_t::RANGE_2_4) break; __attribute__ ((fallthrough));
            case node_t::RANGE_2_4: if (!range_2_4(state) || state.node != node_t::RANGE_2_5) break; __attribute__ ((fallthrough));
            case node_t::RANGE_2_5: if (!range_2_5(state) || state.node != node_t::RANGE_2_6) break; __attribute__ ((fallthrough));
            case node_t::RANGE_2_6: if (!range_2_6(state) || state.node != node_t::RANGE_2_7) break; __attribute__ ((fallthrough));
            case node_t::RANGE_2_7: if (!range_2_7(state) || state.node != node_t::TEXT_2_8) break; __attribute__ ((fallthrough));
            case node_t::TEXT_2_8: if (!text_2_8(state) || state.node != node_t::TEXT_2_9) break; __attribute__ ((fallthrough));
            case node_t::TEXT_2_9: if (!text_2_9(state) || state.node != node_t::GOTO_2_10) break; __attribute__ ((fallthrough));
            case node_t::GOTO_2_10: if (!goto_2_10(state) || state.node != node_t::RESET_2_11) break; __attribute__ ((fallthrough));
            case node_t::RESET_2_11: reset_2_11(state); break;
            case node_t::LOOP_4_0: loop_4_0(state); break;
            case node_t::LABEL_4_0: if (!label_4_0(state) || state.node != node_t::LOOP_4_1) break; __attribute__ ((fallthrough));
            case node_t::LOOP_4_1: loop_4_1(state); break;
            case node_t::RANGE_5_0: if (!range_5_0(state) || state.node != node_t::RANGE_5_1) break; __attribute__ ((fallthrough));
            case node_t::RANGE_5_1: if (!range_5_1(state) || state.node != node_t::TEXT_5_2) break; __attribute__ ((fallthrough));
            case node_t::TEXT_5_2: if (!text_5_2(state) || state.node != node_t::TEXT_5_3) break; __attribute__ ((fallthrough));
            case node_t::TEXT_5_3: text_5_3(state); break;
            case node_t::TEXT_6_0: if (!text_6_0(state, false) || state.node != node_t::RANGE_6_1) break; __attribute__ ((fallthrough));
            case node_t::RANGE_6_1: if (!range_6_1(state) || state.node != node_t::STRING_6_2) break; __attribute__ ((fallthrough));
            case node_t::STRING_6_2: if (!string_6_2(state) || state.node != node_t::TEXT_6_3) break; __attribute__ ((fallthrough));
            case node_t::TEXT_6_3: if (!text_6_3(state) || state.node != node_t::TEXT_6_4) break; __attribute__ ((fallthrough));
            case node_t::TEXT_6_4: text_6_4(state); break;
            case node_t::ANY_7_0: any_7_0(state); break;
            case node_t::TEXT_7_0_0_0: if (!text_7_0_0_0(state) || state.node != node_t::BANG_7_0) break; __attribute__ ((fallthrough));
            case node_t::BANG_7_0: if (!bang_7_0(state) || state.node != node_t::RANGE_7_2) break; __attribute__ ((fallthrough));
            case node_t::RANGE_7_2: if (!range_7_2(state) || state.node != node_t::FUNC_7_3) break; __attribute__ ((fallthrough));
            case node_t::FUNC_7_3: if (!func_7_3(state) || state.node != node_t::UINT_7_4) break; __attribute__ ((fallthrough));
            case node_t::UINT_7_4: if (!uint_7_4(state) || state.node != node_t::RANGE_7_5) break; __attribute__ ((fallthrough));
            case node_t::RANGE_7_5: if (!range_7_5(state) || state.node != node_t::TEXT_7_6) break; __attribute__ ((fallthrough));
            case node_t::TEXT_7_6: if (!text_7_6(state) || state.node != node_t::TEXT_7_7) break; __attribute__ ((fallthrough));
            case node_t::TEXT_7_7: text_7_7(state); break;
            case node_t::ANY_8_0: any_8_0(state); break;
            case node_t::TEXT_8_0_0_0: if (!text_8_0_0_0(state) || state.node != node_t::BANG_8_0) break; __attribute__ ((fallthrough));
            case node_t::BANG_8_0: if (!bang_8_0(state) || state.node != node_t::RANGE_8_2) break; __attribute__ ((fallthrough));
            case node_t::RANGE_8_2: if (!range_8_2(state) || state.node != node_t::STRING_8_3) break; __attribute__ ((fallthrough));
            case node_t::STRING_8_3: if (!string_8_3(state) || state.node != node_t::FUNC_8_4) break; __attribute__ ((fallthrough));
            case node_t::FUNC_8_4: if (!func_8_4(state) || state.node != node_t::TEXT_8_5) break; __attribute__ ((fallthrough));
            case node_t::TEXT_8_5: if (!text_8_5(state) || state.node != node_t::TEXT_8_6) break; __attribute__ ((fallthrough));
            case node_t::TEXT_8_6: text_8_6(state); break;
            case node_t::ANY_9_0: any_9_0(state); break;
            case node_t::TEXT_9_0_0_0: if (!text_9_0_0_0(state) || state.node != node_t::BANG_9_0) break; __attribute__ ((fallthrough));
            case node_t::BANG_9_0: if (!bang_9_0(state) || state.node != node_t::RANGE_9_2) break; __attribute__ ((fallthrough));
            case node_t::RANGE_9_2: if (!range_9_2(state) || state.node != node_t::STRING_9_3) break; __attribute__ ((fallthrough));
            case node_t::STRING_9_3: if (!string_9_3(state) || state.node != node_t::FUNC_9_4) break; __attribute__ ((fallthrough));
            case node_t::FUNC_9_4: if (!func_9_4(state) || state.node != node_t::TEXT_9_5) break; __attribute__ ((fallthrough));
            case node_t::TEXT_9_5: if (!text_9_5(state) || state.node != node_t::TEXT_9_6) break; __attribute__ ((fallthrough));
            case node_t::TEXT_9_6: text_9_6(state); break;
            case node_t::ANY_10_0: any_10_0(state); break;
            case node_t::TEXT_10_0_0_0: if (!text_10_0_0_0(state) || state.node != node_t::BANG_10_0) break; __attribute__ ((fallthrough));
            case node_t::BANG_10_0: if (!bang_10_0(state) || state.node != node_t::RANGE_10_2) break; __attribute__ ((fallthrough));
            case node_t::RANGE_10_2: if (!range_10_2(state) || state.node != node_t::STRING_10_3) break; __attribute__ ((fallthrough));
            case node_t::STRING_10_3: if (!string_10_3(state) || state.node != node_t::TEXT_10_4) break; __attribute__ ((fallthrough));
            case node_t::TEXT_10_4: if (!text_10_4(state) || state.node != node_t::TEXT_10_5) break; __attribute__ ((fallthrough));
            case node_t::TEXT_10_5: text_10_5(state); break;
            case node_t::TEXT_11_0: if (!text_11_0(state) || state.node != node_t::TEXT_11_1) break; __attribute__ ((fallthrough));
            case node_t::TEXT_11_1: if (!text_11_1(state) || state.node != node_t::LOOP_11_2) break; __attribute__ ((fallthrough));
            case node_t::LOOP_11_2: loop_11_2(state); break;
            case node_t::FUNC_12_0: if (!func_12_0(state) || state.node != node_t::DATA_12_1) break; __attribute__ ((fallthrough));
            case node_t::DATA_12_1: if (!data_12_1(state) || state.node != node_t::RET_12_2) break; __attribute__ ((fallthrough));
            case node_t::RET_12_2: ret_12_2(state); break;
            case node_t::FUNC_13_0: if (!func_13_0(state) || state.node != node_t::LOOP_13_1) break; __attribute__ ((fallthrough));
            case node_t::LOOP_13_1: loop_13_1(state); break;
            case node_t::HEX_14_0: if (!hex_14_0(state) || state.node != node_t::RANGE_14_1) break; __attribute__ ((fallthrough));
            case node_t::RANGE_14_1: if (!range_14_1(state) || state.node != node_t::TEXT_14_2) break; __attribute__ ((fallthrough));
            case node_t::TEXT_14_2: if (!text_14_2(state) || state.node != node_t::TEXT_14_3) break; __attribute__ ((fallthrough));
            case node_t::TEXT_14_3: if (!text_14_3(state) || state.node != node_t::CASES_14_4) break; __attribute__ ((fallthrough));
            case node_t::CASES_14_4: cases_14_4(state); break;
            case node_t::FUNC_15_0: if (!func_15_0(state) || state.node != node_t::TEXT_15_1) break; __attribute__ ((fallthrough));
            case node_t::TEXT_15_1: if (!text_15_1(state) || state.node != node_t::TEXT_15_2) break; __attribute__ ((fallthrough));
            case node_t::TEXT_15_2: if (!text_15_2(state) || state.node != node_t::RET_15_3) break; __attribute__ ((fallthrough));
            case node_t::RET_15_3: ret_15_3(state); break;
            case node_t::DATA_16_0: if (!data_16_0(state) || state.node != node_t::TEXT_16_1) break; __attribute__ ((fallthrough));
            case node_t::TEXT_16_1: if (!text_16_1(state) || state.node != node_t::TEXT_16_2) break; __attribute__ ((fallthrough));
            case node_t::TEXT_16_2: text_16_2(state); break;
            case node_t::FUNC_17_0: if (!func_17_0(state) || state.node != node_t::DATA_17_1) break; __attribute__ ((fallthrough));
            case node_t::DATA_17_1: data_17_1(state); break;
            case node_t::RET_18_0: ret_18_0(state); break;
            case node_t::RANGE_19_0: if (!range_19_0(state) || state.node != node_t::TEXT_19_1) break; __attribute__ ((fallthrough));
            case node_t::TEXT_19_1: if (!text_19_1(state) || state.node != node_t::TEXT_19_2) break; __attribute__ ((fallthrough));
            case node_t::TEXT_19_2: text_19_2(state); break;
            case node_t::LOOP_21_0: loop_21_0(state); break;
            case node_t::BOOL_21_0: bool_21_0(state); break;
            case node_t::NO_STATE:
            default: return;
        }; // switch
        if (n == state.node && d == state.data)
            break;
    }
}

bool httpResp::parse(const char * data, unsigned len)
{
    mainState.data = data;
    mainState.end = &data[len];
    for(unsigned i = 0; i < prlState.size(); i++)
    {
        prlState[i].data = data;
        prlState[i].end = &data[len];
    }
    for(bool repeatParse = true; repeatParse; )
    {
        repeatParse = false;
        for(unsigned i = 0; i <= prlState.size(); i++)
        {
            state_t & state = i < prlState.size() ? prlState[i] : mainState;
            if (state.node == node_t::NO_STATE || !state.remainDataLen())
                continue;
            repeatParse = true;
            parse(state);
        }
        for(auto it = prlState.begin(); it != prlState.end(); )
            it = (it->node == node_t::NO_STATE) ? prlState.erase(it) : ++it;
    }
    return mainState.node != node_t::NO_STATE || !prlState.empty();
}

inline bool httpResp::loop_1_0(state_t & state)
{
    return label_1_0(state);
}

inline bool httpResp::label_1_0(state_t & state)
{
    state.node = node_t::LOOP_1_1;
    return true;
}

inline bool httpResp::loop_1_1(state_t & state)
{
    return text_2_0(state, false);
}

inline bool httpResp::text_2_0(state_t & state, bool isCaseCall)
{
    const static uint8_t text[] = { 0x48, 0x54, 0x54, 0x50, 0x2f}; // http/
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            bool ret = isCaseCall && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::RANGE_2_1;
            return true;
        }
    }
    state.node = node_t::TEXT_2_0;
    return true;
}

inline bool httpResp::range_2_1(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false, false, false, false, false, false, false, false, false, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0-9]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.consumed += unsigned(state.data - beginData);
        state.node = (state.consumed >= 1) ? node_t::TEXT_2_2 : node_t::NO_STATE;
        bool ret = (state.node == node_t::TEXT_2_2);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_2_1;
    return true;
}

inline bool httpResp::text_2_2(state_t & state)
{
    const static uint8_t text[] = { 0x2e}; // .
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::RANGE_2_3;
            return true;
        }
    }
    state.node = node_t::TEXT_2_2;
    return true;
}

inline bool httpResp::range_2_3(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false, false, false, false, false, false, false, false, false, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0-9]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.consumed += unsigned(state.data - beginData);
        state.node = (state.consumed >= 1) ? node_t::RANGE_2_4 : node_t::NO_STATE;
        bool ret = (state.node == node_t::RANGE_2_4);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_2_3;
    return true;
}

inline bool httpResp::range_2_4(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0x9][0x20]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.consumed += unsigned(state.data - beginData);
        state.node = (state.consumed >= 1) ? node_t::RANGE_2_5 : node_t::NO_STATE;
        bool ret = (state.node == node_t::RANGE_2_5);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_2_4;
    return true;
}

inline bool httpResp::range_2_5(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false, false, false, false, false, false, false, false, false, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0-9]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.consumed += unsigned(state.data - beginData);
        state.node = (state.consumed >= 1) ? node_t::RANGE_2_6 : node_t::NO_STATE;
        bool ret = (state.node == node_t::RANGE_2_6);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_2_5;
    return true;
}

inline bool httpResp::range_2_6(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0x9][0x20]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.consumed += unsigned(state.data - beginData);
        state.node = (state.consumed >= 1) ? node_t::RANGE_2_7 : node_t::NO_STATE;
        bool ret = (state.node == node_t::RANGE_2_7);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_2_6;
    return true;
}

inline bool httpResp::range_2_7(state_t & state)
{
    const static bool exitSym[256] = {
        false, false, false, false, false, false, false, false, false, false,  true, false, false,  true, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false}; // ^[0xa][0xd]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.node = node_t::TEXT_2_8;
        bool ret = (state.node == node_t::TEXT_2_8);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_2_7;
    return true;
}

inline bool httpResp::text_2_8(state_t & state)
{
    const static uint8_t text[] = { 0xd}; // \xd
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_2_9;
            state.consumed = 0;
            return true;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::TEXT_2_9;
            return true;
        }
    }
    state.node = node_t::TEXT_2_8;
    return true;
}

inline bool httpResp::text_2_9(state_t & state)
{
    const static uint8_t text[] = { 0xa}; // \xa
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::GOTO_2_10;
            return true;
        }
    }
    state.node = node_t::TEXT_2_9;
    return true;
}

inline bool httpResp::goto_2_10(state_t & state)
{
    state.node = node_t::LABEL_4_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::RESET_2_11;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::RESET_2_11;
    }
    return true;
}

inline bool httpResp::reset_2_11(state_t & state)
{
    const char * d = state.data;
    const char * e = state.end;
    if (&mainState == &state)
    {
        httpResp::reset();
    } else {
        std::vector<state_t> pTmp;
        pTmp.swap(prlState);
        httpResp::reset();
        pTmp.swap(prlState);
        for(auto it = prlState.begin(); it != prlState.end(); it++)
            it->node = node_t::NO_STATE;
    }
    mainState.data = d;
    mainState.end = e;
    return true;
}

inline bool httpResp::loop_4_0(state_t & state)
{
    return label_4_0(state);
}

inline bool httpResp::label_4_0(state_t & state)
{
    state.node = node_t::LOOP_4_1;
    return true;
}

inline bool httpResp::loop_4_1(state_t & state)
{
    if (state.data == state.end)
        return true;
    state_t startState = state;
    if (range_5_0(state)) // case_1
        return true;
    state = startState;
    if (text_6_0(state, true)) // case_2
        return true;
    state = startState;
    if (any_7_0(state) && state.node == node_t::BANG_7_0 && bang_7_0(state) && state.node == node_t::RANGE_7_2) // case_3
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (any_8_0(state) && state.node == node_t::BANG_8_0 && bang_8_0(state) && state.node == node_t::RANGE_8_2) // case_4
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (any_9_0(state) && state.node == node_t::BANG_9_0 && bang_9_0(state) && state.node == node_t::RANGE_9_2) // case_5
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (any_10_0(state) && state.node == node_t::BANG_10_0 && bang_10_0(state) && state.node == node_t::RANGE_10_2) // case_6
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_11_0(state)) // case_7
        return true;
    state = startState;
    state.node = node_t::RANGE_19_0;
    return true;
}

inline bool httpResp::range_5_0(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0x9][0x20]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.consumed += unsigned(state.data - beginData);
        state.node = (state.consumed >= 1) ? node_t::RANGE_5_1 : node_t::RANGE_19_0;
        bool ret = (state.node == node_t::RANGE_5_1);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_5_0;
    return true;
}

inline bool httpResp::range_5_1(state_t & state)
{
    const static bool exitSym[256] = {
        false, false, false, false, false, false, false, false, false, false,  true, false, false,  true, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false}; // ^[0xa][0xd]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.node = node_t::TEXT_5_2;
        bool ret = (state.node == node_t::TEXT_5_2);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_5_1;
    return true;
}

inline bool httpResp::text_5_2(state_t & state)
{
    const static uint8_t text[] = { 0xd}; // \xd
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_5_3;
            state.consumed = 0;
            return true;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::TEXT_5_3;
            return true;
        }
    }
    state.node = node_t::TEXT_5_2;
    return true;
}

inline bool httpResp::text_5_3(state_t & state)
{
    const static uint8_t text[] = { 0xa}; // \xa
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_19_0;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::LOOP_4_1;
            return true;
        }
    }
    state.node = node_t::TEXT_5_3;
    return true;
}

inline bool httpResp::text_6_0(state_t & state, bool isCaseCall)
{
    const static uint8_t text[] = { 0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, 0x65, 0x72, 0x2d, 0x65, 0x6e, 0x63, 0x6f, 0x64, 0x69, 0x6e, 0x67, 0x3a}; // transfer-encoding:
    const static uint8_t text2[] = { 0x54, 0x52, 0x41, 0x4e, 0x53, 0x46, 0x45, 0x52, 0x2d, 0x45, 0x4e, 0x43, 0x4f, 0x44, 0x49, 0x4e, 0x47, 0x3a}; // TRANSFER-ENCODING:
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]) && text2[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_19_0;
            bool ret = isCaseCall && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::RANGE_6_1;
            return true;
        }
    }
    state.node = node_t::TEXT_6_0;
    return true;
}

inline bool httpResp::range_6_1(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0x9][0x20]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.consumed += unsigned(state.data - beginData);
        state.node = (state.consumed >= 1) ? node_t::STRING_6_2 : node_t::RANGE_19_0;
        bool ret = (state.node == node_t::STRING_6_2);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_6_1;
    return true;
}

inline void httpResp::_string_6_2(const char * data, unsigned len, bool isFirst)
{
    if (isFirst)
        httpRespResult::transferEncoding.clear();
    else if ((httpRespResult::transferEncoding.length() + len) > 256)
        len = 256 - httpRespResult::transferEncoding.length();
    httpRespResult::transferEncoding.append(data, len);
}

inline bool httpResp::string_6_2(state_t & state)
{
    const static bool exitSym[256] = {
        false, false, false, false, false, false, false, false, false, false,  true, false, false,  true, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false}; // ^[0xa][0xd]
    bool isFirstData = !state.consumed;
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        _string_6_2(beginData, unsigned(state.data - beginData), isFirstData);
        state.consumed += unsigned(state.data - beginData);
        state.node = (state.consumed >= 1) ? node_t::TEXT_6_3 : node_t::RANGE_19_0;
        bool ret = (state.node == node_t::TEXT_6_3);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    if (beginData < state.data)
        _string_6_2(beginData, unsigned(state.data - beginData), isFirstData);
    state.node = node_t::STRING_6_2;
    return true;
}

inline bool httpResp::text_6_3(state_t & state)
{
    const static uint8_t text[] = { 0xd}; // \xd
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_6_4;
            state.consumed = 0;
            return true;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::TEXT_6_4;
            return true;
        }
    }
    state.node = node_t::TEXT_6_3;
    return true;
}

inline bool httpResp::text_6_4(state_t & state)
{
    const static uint8_t text[] = { 0xa}; // \xa
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_19_0;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::LOOP_4_1;
            return true;
        }
    }
    state.node = node_t::TEXT_6_4;
    return true;
}

inline bool httpResp::any_7_0(state_t & state)
{
    if (state.data == state.end)
        return true;
    state_t startState = state;
    if (text_7_0_0_0(state) && state.node == node_t::BANG_7_0) // case_1
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    state.node = node_t::NO_STATE;
    if (&mainState == &state && prlState.size() == 1)
    {
        mainState = prlState[0];
        prlState.clear();
    }
    return true;
}

inline bool httpResp::text_7_0_0_0(state_t & state)
{
    const static uint8_t text[] = { 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x3a}; // content-length:
    const static uint8_t text2[] = { 0x43, 0x4f, 0x4e, 0x54, 0x45, 0x4e, 0x54, 0x2d, 0x4c, 0x45, 0x4e, 0x47, 0x54, 0x48, 0x3a}; // CONTENT-LENGTH:
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]) && text2[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::BANG_7_0;
            return true;
        }
    }
    state.node = node_t::TEXT_7_0_0_0;
    return true;
}

inline bool httpResp::bang_7_0(state_t & state)
{
    state.node = node_t::RANGE_7_2;
    if (&mainState != &state)
        mainState = state;
    for(auto it = prlState.begin(); it != prlState.end(); it++)
        it->node = node_t::NO_STATE;
    return true;
}

inline bool httpResp::range_7_2(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0x9][0x20]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.consumed += unsigned(state.data - beginData);
        state.node = (state.consumed >= 1) ? node_t::FUNC_7_3 : node_t::RANGE_19_0;
        bool ret = (state.node == node_t::FUNC_7_3);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_7_2;
    return true;
}

inline bool httpResp::_func_7_3()
{
     isContentLen = true; 
    return true;
}
inline bool httpResp::func_7_3(state_t & state)
{
    bool ret = _func_7_3();
    state.node = ret ? node_t::UINT_7_4 : node_t::RANGE_19_0;
    return ret;
}

inline void httpResp::_uint_7_4(const char * data, unsigned len, bool isFirst)
{
    if (isFirst)
        httpRespResult::contentLength = 0;
    for(const char * end = &data[len]; data < end; data++)
        httpRespResult::contentLength = httpRespResult::contentLength*10 + *data - '0';
}

inline bool httpResp::uint_7_4(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false, false, false, false, false, false, false, false, false, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0-9]
    bool isFirstData = !state.consumed;
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        _uint_7_4(beginData, unsigned(state.data - beginData), isFirstData);
        state.consumed += unsigned(state.data - beginData);
        state.node = (state.consumed >= 1) ? node_t::RANGE_7_5 : node_t::RANGE_19_0;
        bool ret = (state.node == node_t::RANGE_7_5);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    if (beginData < state.data)
        _uint_7_4(beginData, unsigned(state.data - beginData), isFirstData);
    state.node = node_t::UINT_7_4;
    return true;
}

inline bool httpResp::range_7_5(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0x9][0x20]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.node = node_t::TEXT_7_6;
        bool ret = (state.node == node_t::TEXT_7_6);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_7_5;
    return true;
}

inline bool httpResp::text_7_6(state_t & state)
{
    const static uint8_t text[] = { 0xd}; // \xd
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_7_7;
            state.consumed = 0;
            return true;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::TEXT_7_7;
            return true;
        }
    }
    state.node = node_t::TEXT_7_6;
    return true;
}

inline bool httpResp::text_7_7(state_t & state)
{
    const static uint8_t text[] = { 0xa}; // \xa
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_19_0;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::LOOP_4_1;
            return true;
        }
    }
    state.node = node_t::TEXT_7_7;
    return true;
}

inline bool httpResp::any_8_0(state_t & state)
{
    if (state.data == state.end)
        return true;
    state_t startState = state;
    if (text_8_0_0_0(state) && state.node == node_t::BANG_8_0) // case_1
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    state.node = node_t::NO_STATE;
    if (&mainState == &state && prlState.size() == 1)
    {
        mainState = prlState[0];
        prlState.clear();
    }
    return true;
}

inline bool httpResp::text_8_0_0_0(state_t & state)
{
    const static uint8_t text[] = { 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a}; // content-type:
    const static uint8_t text2[] = { 0x43, 0x4f, 0x4e, 0x54, 0x45, 0x4e, 0x54, 0x2d, 0x54, 0x59, 0x50, 0x45, 0x3a}; // CONTENT-TYPE:
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]) && text2[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::BANG_8_0;
            return true;
        }
    }
    state.node = node_t::TEXT_8_0_0_0;
    return true;
}

inline bool httpResp::bang_8_0(state_t & state)
{
    state.node = node_t::RANGE_8_2;
    if (&mainState != &state)
        mainState = state;
    for(auto it = prlState.begin(); it != prlState.end(); it++)
        it->node = node_t::NO_STATE;
    return true;
}

inline bool httpResp::range_8_2(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0x9][0x20]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.consumed += unsigned(state.data - beginData);
        state.node = (state.consumed >= 1) ? node_t::STRING_8_3 : node_t::RANGE_19_0;
        bool ret = (state.node == node_t::STRING_8_3);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_8_2;
    return true;
}

inline void httpResp::_string_8_3(const char * data, unsigned len, bool isFirst)
{
    if (isFirst)
        httpRespResult::type.clear();
    else if ((httpRespResult::type.length() + len) > 256)
        len = 256 - httpRespResult::type.length();
    httpRespResult::type.append(data, len);
}

inline bool httpResp::string_8_3(state_t & state)
{
    const static bool exitSym[256] = {
        false, false, false, false, false, false, false, false, false, false,  true, false, false,  true, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false}; // ^[0xa][0xd]
    bool isFirstData = !state.consumed;
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        _string_8_3(beginData, unsigned(state.data - beginData), isFirstData);
        state.consumed += unsigned(state.data - beginData);
        state.node = (state.consumed >= 1) ? node_t::FUNC_8_4 : node_t::RANGE_19_0;
        bool ret = (state.node == node_t::FUNC_8_4);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    if (beginData < state.data)
        _string_8_3(beginData, unsigned(state.data - beginData), isFirstData);
    state.node = node_t::STRING_8_3;
    return true;
}

inline bool httpResp::_func_8_4()
{
     printf("Type: %s\n", type.c_str()); 
    return true;
}
inline bool httpResp::func_8_4(state_t & state)
{
    bool ret = _func_8_4();
    state.node = ret ? node_t::TEXT_8_5 : node_t::RANGE_19_0;
    return ret;
}

inline bool httpResp::text_8_5(state_t & state)
{
    const static uint8_t text[] = { 0xd}; // \xd
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_8_6;
            state.consumed = 0;
            return true;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::TEXT_8_6;
            return true;
        }
    }
    state.node = node_t::TEXT_8_5;
    return true;
}

inline bool httpResp::text_8_6(state_t & state)
{
    const static uint8_t text[] = { 0xa}; // \xa
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_19_0;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::LOOP_4_1;
            return true;
        }
    }
    state.node = node_t::TEXT_8_6;
    return true;
}

inline bool httpResp::any_9_0(state_t & state)
{
    if (state.data == state.end)
        return true;
    state_t startState = state;
    if (text_9_0_0_0(state) && state.node == node_t::BANG_9_0) // case_1
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    state.node = node_t::NO_STATE;
    if (&mainState == &state && prlState.size() == 1)
    {
        mainState = prlState[0];
        prlState.clear();
    }
    return true;
}

inline bool httpResp::text_9_0_0_0(state_t & state)
{
    const static uint8_t text[] = { 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x65, 0x6e, 0x63, 0x6f, 0x64, 0x69, 0x6e, 0x67, 0x3a}; // content-encoding:
    const static uint8_t text2[] = { 0x43, 0x4f, 0x4e, 0x54, 0x45, 0x4e, 0x54, 0x2d, 0x45, 0x4e, 0x43, 0x4f, 0x44, 0x49, 0x4e, 0x47, 0x3a}; // CONTENT-ENCODING:
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]) && text2[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::BANG_9_0;
            return true;
        }
    }
    state.node = node_t::TEXT_9_0_0_0;
    return true;
}

inline bool httpResp::bang_9_0(state_t & state)
{
    state.node = node_t::RANGE_9_2;
    if (&mainState != &state)
        mainState = state;
    for(auto it = prlState.begin(); it != prlState.end(); it++)
        it->node = node_t::NO_STATE;
    return true;
}

inline bool httpResp::range_9_2(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0x9][0x20]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.consumed += unsigned(state.data - beginData);
        state.node = (state.consumed >= 1) ? node_t::STRING_9_3 : node_t::RANGE_19_0;
        bool ret = (state.node == node_t::STRING_9_3);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_9_2;
    return true;
}

inline void httpResp::_string_9_3(const char * data, unsigned len, bool isFirst)
{
    if (isFirst)
        httpRespResult::encoding.clear();
    else if ((httpRespResult::encoding.length() + len) > 256)
        len = 256 - httpRespResult::encoding.length();
    httpRespResult::encoding.append(data, len);
}

inline bool httpResp::string_9_3(state_t & state)
{
    const static bool exitSym[256] = {
        false, false, false, false, false, false, false, false, false, false,  true, false, false,  true, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false}; // ^[0xa][0xd]
    bool isFirstData = !state.consumed;
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        _string_9_3(beginData, unsigned(state.data - beginData), isFirstData);
        state.consumed += unsigned(state.data - beginData);
        state.node = (state.consumed >= 1) ? node_t::FUNC_9_4 : node_t::RANGE_19_0;
        bool ret = (state.node == node_t::FUNC_9_4);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    if (beginData < state.data)
        _string_9_3(beginData, unsigned(state.data - beginData), isFirstData);
    state.node = node_t::STRING_9_3;
    return true;
}

inline bool httpResp::_func_9_4()
{
     printf("Encoding: %s\n", encoding.c_str()); 
    return true;
}
inline bool httpResp::func_9_4(state_t & state)
{
    bool ret = _func_9_4();
    state.node = ret ? node_t::TEXT_9_5 : node_t::RANGE_19_0;
    return ret;
}

inline bool httpResp::text_9_5(state_t & state)
{
    const static uint8_t text[] = { 0xd}; // \xd
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_9_6;
            state.consumed = 0;
            return true;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::TEXT_9_6;
            return true;
        }
    }
    state.node = node_t::TEXT_9_5;
    return true;
}

inline bool httpResp::text_9_6(state_t & state)
{
    const static uint8_t text[] = { 0xa}; // \xa
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_19_0;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::LOOP_4_1;
            return true;
        }
    }
    state.node = node_t::TEXT_9_6;
    return true;
}

inline bool httpResp::any_10_0(state_t & state)
{
    if (state.data == state.end)
        return true;
    state_t startState = state;
    if (text_10_0_0_0(state) && state.node == node_t::BANG_10_0) // case_1
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    state.node = node_t::NO_STATE;
    if (&mainState == &state && prlState.size() == 1)
    {
        mainState = prlState[0];
        prlState.clear();
    }
    return true;
}

inline bool httpResp::text_10_0_0_0(state_t & state)
{
    const static uint8_t text[] = { 0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x3a}; // connection:
    const static uint8_t text2[] = { 0x43, 0x4f, 0x4e, 0x4e, 0x45, 0x43, 0x54, 0x49, 0x4f, 0x4e, 0x3a}; // CONNECTION:
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]) && text2[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::BANG_10_0;
            return true;
        }
    }
    state.node = node_t::TEXT_10_0_0_0;
    return true;
}

inline bool httpResp::bang_10_0(state_t & state)
{
    state.node = node_t::RANGE_10_2;
    if (&mainState != &state)
        mainState = state;
    for(auto it = prlState.begin(); it != prlState.end(); it++)
        it->node = node_t::NO_STATE;
    return true;
}

inline bool httpResp::range_10_2(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0x9][0x20]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.consumed += unsigned(state.data - beginData);
        state.node = (state.consumed >= 1) ? node_t::STRING_10_3 : node_t::RANGE_19_0;
        bool ret = (state.node == node_t::STRING_10_3);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_10_2;
    return true;
}

inline void httpResp::_string_10_3(const char * data, unsigned len, bool isFirst)
{
    if (isFirst)
        httpRespResult::keepAlive.clear();
    else if ((httpRespResult::keepAlive.length() + len) > 256)
        len = 256 - httpRespResult::keepAlive.length();
    httpRespResult::keepAlive.append(data, len);
}

inline bool httpResp::string_10_3(state_t & state)
{
    const static bool exitSym[256] = {
        false, false, false, false, false, false, false, false, false, false,  true, false, false,  true, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false}; // ^[0xa][0xd]
    bool isFirstData = !state.consumed;
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        _string_10_3(beginData, unsigned(state.data - beginData), isFirstData);
        state.consumed += unsigned(state.data - beginData);
        state.node = (state.consumed >= 1) ? node_t::TEXT_10_4 : node_t::RANGE_19_0;
        bool ret = (state.node == node_t::TEXT_10_4);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    if (beginData < state.data)
        _string_10_3(beginData, unsigned(state.data - beginData), isFirstData);
    state.node = node_t::STRING_10_3;
    return true;
}

inline bool httpResp::text_10_4(state_t & state)
{
    const static uint8_t text[] = { 0xd}; // \xd
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_10_5;
            state.consumed = 0;
            return true;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::TEXT_10_5;
            return true;
        }
    }
    state.node = node_t::TEXT_10_4;
    return true;
}

inline bool httpResp::text_10_5(state_t & state)
{
    const static uint8_t text[] = { 0xa}; // \xa
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_19_0;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::LOOP_4_1;
            return true;
        }
    }
    state.node = node_t::TEXT_10_5;
    return true;
}

inline bool httpResp::text_11_0(state_t & state)
{
    const static uint8_t text[] = { 0xd}; // \xd
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_11_1;
            state.consumed = 0;
            return true;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::TEXT_11_1;
            return true;
        }
    }
    state.node = node_t::TEXT_11_0;
    return true;
}

inline bool httpResp::text_11_1(state_t & state)
{
    const static uint8_t text[] = { 0xa}; // \xa
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_19_0;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::LOOP_11_2;
            return true;
        }
    }
    state.node = node_t::TEXT_11_1;
    return true;
}

inline bool httpResp::loop_11_2(state_t & state)
{
    state_t startState = state;
    if (func_12_0(state)) // case_1
        return true;
    state = startState;
    if (func_13_0(state)) // case_2
        return true;
    state = startState;
    if (func_17_0(state)) // case_3
        return true;
    state = startState;
    if (ret_18_0(state)) // case_4
        return true;
    state = startState;
    state.node = node_t::NO_STATE;
    return true;
}

inline bool httpResp::_func_12_0()
{
     return isContentLen; 
    return true;
}
inline bool httpResp::func_12_0(state_t & state)
{
    bool ret = _func_12_0();
    state.node = ret ? node_t::DATA_12_1 : node_t::NO_STATE;
    return ret;
}

inline bool httpResp::data_12_1(state_t & state)
{
    bool isFirstData = !state.consumed;
    const char * beginData = state.data;
    if (!state.consumed)
        state.node = node_t::DATA_12_1;
    if (state.data == state.end)
        return true;
    else if (state.consumed + state.remainDataLen() >= contentLength)
    {
        state.data += (contentLength - state.consumed);
        state.consumed = 0;
        state.node = node_t::RET_12_2;
        httpRespResult::resp(beginData, unsigned(state.data - beginData), isFirstData, true);
    } else {
        state.consumed += state.remainDataLen();
        state.data = state.end;
        httpRespResult::resp(beginData, unsigned(state.data - beginData), isFirstData, false);
    }
    return true;
}

inline bool httpResp::ret_12_2(state_t & state)
{
    state.node = state.retStackCount ? state.retStack[--state.retStackCount] : node_t::NO_STATE;
    return state.node != node_t::NO_STATE;
}

inline bool httpResp::_func_13_0()
{
     return transferEncoding.find("chunked") != std::string::npos; 
    return true;
}
inline bool httpResp::func_13_0(state_t & state)
{
    bool ret = _func_13_0();
    state.node = ret ? node_t::LOOP_13_1 : node_t::NO_STATE;
    return ret;
}

inline bool httpResp::loop_13_1(state_t & state)
{
    return hex_14_0(state);
}

inline void httpResp::_hex_14_0(const char * data, unsigned len, bool isFirst)
{
    if (isFirst)
        httpRespResult::chunklen = 0;
    for(const char * end = &data[len]; data < end; data++)
    if (*data >= 'a' && *data <= 'f')
        httpRespResult::chunklen = (httpRespResult::chunklen << 4) | uint8_t(*data - 'a' + 10);
    else if (*data >= 'A' && *data <= 'F')
        httpRespResult::chunklen = (httpRespResult::chunklen << 4) | uint8_t(*data - 'A' + 10);
    else if (*data >= '0' && *data <= '9')
        httpRespResult::chunklen = (httpRespResult::chunklen << 4) | uint8_t(*data - '0');
}

inline bool httpResp::hex_14_0(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false, false, false, false, false, false, false, false, false, false,  true,  true,  true,  true,  true,  true, 
         true, false, false, false, false, false, false,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true, false, false, false, false, false, false,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0-9][A-F][a-f]
    bool isFirstData = !state.consumed;
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        _hex_14_0(beginData, unsigned(state.data - beginData), isFirstData);
        state.consumed += unsigned(state.data - beginData);
        state.node = (state.consumed >= 1) ? node_t::RANGE_14_1 : node_t::NO_STATE;
        bool ret = (state.node == node_t::RANGE_14_1);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    if (beginData < state.data)
        _hex_14_0(beginData, unsigned(state.data - beginData), isFirstData);
    state.node = node_t::HEX_14_0;
    return true;
}

inline bool httpResp::range_14_1(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0x9][0x20]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.node = node_t::TEXT_14_2;
        bool ret = (state.node == node_t::TEXT_14_2);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_14_1;
    return true;
}

inline bool httpResp::text_14_2(state_t & state)
{
    const static uint8_t text[] = { 0xd}; // \xd
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_14_3;
            state.consumed = 0;
            return true;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::TEXT_14_3;
            return true;
        }
    }
    state.node = node_t::TEXT_14_2;
    return true;
}

inline bool httpResp::text_14_3(state_t & state)
{
    const static uint8_t text[] = { 0xa}; // \xa
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::CASES_14_4;
            return true;
        }
    }
    state.node = node_t::TEXT_14_3;
    return true;
}

inline bool httpResp::cases_14_4(state_t & state)
{
    if (state.data == state.end)
        return true;
    state_t startState = state;
    if (func_15_0(state)) // case_1
        return true;
    state = startState;
    if (data_16_0(state)) // case_2
        return true;
    state = startState;
    state.node = node_t::NO_STATE;
    return true;
}

inline bool httpResp::_func_15_0()
{
     if (chunklen != 0) return false; 
    return true;
}
inline bool httpResp::func_15_0(state_t & state)
{
    bool ret = _func_15_0();
    state.node = ret ? node_t::TEXT_15_1 : node_t::NO_STATE;
    return ret;
}

inline bool httpResp::text_15_1(state_t & state)
{
    const static uint8_t text[] = { 0xd}; // \xd
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_15_2;
            state.consumed = 0;
            return true;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::TEXT_15_2;
            return true;
        }
    }
    state.node = node_t::TEXT_15_1;
    return true;
}

inline bool httpResp::text_15_2(state_t & state)
{
    const static uint8_t text[] = { 0xa}; // \xa
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::RET_15_3;
            return true;
        }
    }
    state.node = node_t::TEXT_15_2;
    return true;
}

inline bool httpResp::ret_15_3(state_t & state)
{
    state.node = state.retStackCount ? state.retStack[--state.retStackCount] : node_t::NO_STATE;
    return state.node != node_t::NO_STATE;
}

inline bool httpResp::data_16_0(state_t & state)
{
    bool isFirstData = !state.consumed;
    const char * beginData = state.data;
    if (!state.consumed)
        state.node = node_t::DATA_16_0;
    if (state.data == state.end)
        return true;
    else if (state.consumed + state.remainDataLen() >= chunklen)
    {
        state.data += (chunklen - state.consumed);
        state.consumed = 0;
        state.node = node_t::TEXT_16_1;
        httpRespResult::resp(beginData, unsigned(state.data - beginData), isFirstData, true);
    } else {
        state.consumed += state.remainDataLen();
        state.data = state.end;
        httpRespResult::resp(beginData, unsigned(state.data - beginData), isFirstData, false);
    }
    return true;
}

inline bool httpResp::text_16_1(state_t & state)
{
    const static uint8_t text[] = { 0xd}; // \xd
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_16_2;
            state.consumed = 0;
            return true;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::TEXT_16_2;
            return true;
        }
    }
    state.node = node_t::TEXT_16_1;
    return true;
}

inline bool httpResp::text_16_2(state_t & state)
{
    const static uint8_t text[] = { 0xa}; // \xa
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::LOOP_13_1;
            return true;
        }
    }
    state.node = node_t::TEXT_16_2;
    return true;
}

inline bool httpResp::_func_17_0()
{
     return keepAlive.find("keep-alive") == std::string::npos; 
    return true;
}
inline bool httpResp::func_17_0(state_t & state)
{
    bool ret = _func_17_0();
    state.node = ret ? node_t::DATA_17_1 : node_t::NO_STATE;
    return ret;
}

inline bool httpResp::data_17_1(state_t & state)
{
    bool isFirstData = !state.consumed;
    const char * beginData = state.data;
    if (!state.consumed)
        state.node = node_t::DATA_17_1;
    if (state.data == state.end)
        return true;
    state.consumed += state.remainDataLen();
    state.data = state.end;
    httpRespResult::resp(beginData, unsigned(state.data - beginData), isFirstData, false);
    return true;
}

inline bool httpResp::ret_18_0(state_t & state)
{
    state.node = state.retStackCount ? state.retStack[--state.retStackCount] : node_t::NO_STATE;
    return state.node != node_t::NO_STATE;
}

inline bool httpResp::range_19_0(state_t & state)
{
    const static bool exitSym[256] = {
        false, false, false, false, false, false, false, false, false, false,  true, false, false,  true, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false}; // ^[0xa][0xd]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])])
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])])
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])])
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])])
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])])
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])])
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])])
                state.data += 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.node = node_t::TEXT_19_1;
        bool ret = (state.node == node_t::TEXT_19_1);
        state.consumed = 0;
        return ret;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_19_0;
    return true;
}

inline bool httpResp::text_19_1(state_t & state)
{
    const static uint8_t text[] = { 0xd}; // \xd
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_19_2;
            state.consumed = 0;
            return true;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::TEXT_19_2;
            return true;
        }
    }
    state.node = node_t::TEXT_19_1;
    return true;
}

inline bool httpResp::text_19_2(state_t & state)
{
    const static uint8_t text[] = { 0xa}; // \xa
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::LOOP_4_1;
            return true;
        }
    }
    state.node = node_t::TEXT_19_2;
    return true;
}

inline bool httpResp::loop_21_0(state_t & state)
{
    return bool_21_0(state);
}

inline void httpResp::_bool_21_0(const char * data, unsigned len, bool isFirst)
{
    if (len)
        httpRespResult::isContentLen = (*data != 0);
    else if (isFirst)
        httpRespResult::isContentLen = false;
}

inline bool httpResp::bool_21_0(state_t & state)
{
    bool isFirstData = !state.consumed;
    const char * beginData = state.data;
    if (!state.consumed)
        state.node = node_t::BOOL_21_0;
    if (state.data == state.end)
        return true;
    else if (state.consumed + state.remainDataLen() >= 1)
    {
        state.data += (1 - state.consumed);
        state.consumed = 0;
        state.node = node_t::LOOP_21_0;
        _bool_21_0(beginData, unsigned(state.data - beginData), isFirstData);
    } else {
        state.consumed += state.remainDataLen();
        state.data = state.end;
        _bool_21_0(beginData, unsigned(state.data - beginData), isFirstData);
    }
    return true;
}

void httpResp::reset()
{
    httpRespResult::chunklen = 0;
    httpRespResult::contentLength = 0;
    httpRespResult::encoding.clear();
    httpRespResult::isContentLen = false;
    httpRespResult::keepAlive.clear();
    httpRespResult::transferEncoding.clear();
    httpRespResult::type.clear();
    httpResp::mainState = httpResp::state_t();
    httpResp::prlState.clear();
}

const char * httpResp::state_t::name() const
{
    switch(node)
    {
        case node_t::LOOP_1_0: return "LOOP_1_0";
        case node_t::LABEL_1_0: return "LABEL_1_0";
        case node_t::LOOP_1_1: return "LOOP_1_1";
        case node_t::TEXT_2_0: return "TEXT_2_0";
        case node_t::RANGE_2_1: return "RANGE_2_1";
        case node_t::TEXT_2_2: return "TEXT_2_2";
        case node_t::RANGE_2_3: return "RANGE_2_3";
        case node_t::RANGE_2_4: return "RANGE_2_4";
        case node_t::RANGE_2_5: return "RANGE_2_5";
        case node_t::RANGE_2_6: return "RANGE_2_6";
        case node_t::RANGE_2_7: return "RANGE_2_7";
        case node_t::TEXT_2_8: return "TEXT_2_8";
        case node_t::TEXT_2_9: return "TEXT_2_9";
        case node_t::GOTO_2_10: return "GOTO_2_10";
        case node_t::RESET_2_11: return "RESET_2_11";
        case node_t::LOOP_4_0: return "LOOP_4_0";
        case node_t::LABEL_4_0: return "LABEL_4_0";
        case node_t::LOOP_4_1: return "LOOP_4_1";
        case node_t::RANGE_5_0: return "RANGE_5_0";
        case node_t::RANGE_5_1: return "RANGE_5_1";
        case node_t::TEXT_5_2: return "TEXT_5_2";
        case node_t::TEXT_5_3: return "TEXT_5_3";
        case node_t::TEXT_6_0: return "TEXT_6_0";
        case node_t::RANGE_6_1: return "RANGE_6_1";
        case node_t::STRING_6_2: return "STRING_6_2";
        case node_t::TEXT_6_3: return "TEXT_6_3";
        case node_t::TEXT_6_4: return "TEXT_6_4";
        case node_t::ANY_7_0: return "ANY_7_0";
        case node_t::TEXT_7_0_0_0: return "TEXT_7_0_0_0";
        case node_t::BANG_7_0: return "BANG_7_0";
        case node_t::RANGE_7_2: return "RANGE_7_2";
        case node_t::FUNC_7_3: return "FUNC_7_3";
        case node_t::UINT_7_4: return "UINT_7_4";
        case node_t::RANGE_7_5: return "RANGE_7_5";
        case node_t::TEXT_7_6: return "TEXT_7_6";
        case node_t::TEXT_7_7: return "TEXT_7_7";
        case node_t::ANY_8_0: return "ANY_8_0";
        case node_t::TEXT_8_0_0_0: return "TEXT_8_0_0_0";
        case node_t::BANG_8_0: return "BANG_8_0";
        case node_t::RANGE_8_2: return "RANGE_8_2";
        case node_t::STRING_8_3: return "STRING_8_3";
        case node_t::FUNC_8_4: return "FUNC_8_4";
        case node_t::TEXT_8_5: return "TEXT_8_5";
        case node_t::TEXT_8_6: return "TEXT_8_6";
        case node_t::ANY_9_0: return "ANY_9_0";
        case node_t::TEXT_9_0_0_0: return "TEXT_9_0_0_0";
        case node_t::BANG_9_0: return "BANG_9_0";
        case node_t::RANGE_9_2: return "RANGE_9_2";
        case node_t::STRING_9_3: return "STRING_9_3";
        case node_t::FUNC_9_4: return "FUNC_9_4";
        case node_t::TEXT_9_5: return "TEXT_9_5";
        case node_t::TEXT_9_6: return "TEXT_9_6";
        case node_t::ANY_10_0: return "ANY_10_0";
        case node_t::TEXT_10_0_0_0: return "TEXT_10_0_0_0";
        case node_t::BANG_10_0: return "BANG_10_0";
        case node_t::RANGE_10_2: return "RANGE_10_2";
        case node_t::STRING_10_3: return "STRING_10_3";
        case node_t::TEXT_10_4: return "TEXT_10_4";
        case node_t::TEXT_10_5: return "TEXT_10_5";
        case node_t::TEXT_11_0: return "TEXT_11_0";
        case node_t::TEXT_11_1: return "TEXT_11_1";
        case node_t::LOOP_11_2: return "LOOP_11_2";
        case node_t::FUNC_12_0: return "FUNC_12_0";
        case node_t::DATA_12_1: return "DATA_12_1";
        case node_t::RET_12_2: return "RET_12_2";
        case node_t::FUNC_13_0: return "FUNC_13_0";
        case node_t::LOOP_13_1: return "LOOP_13_1";
        case node_t::HEX_14_0: return "HEX_14_0";
        case node_t::RANGE_14_1: return "RANGE_14_1";
        case node_t::TEXT_14_2: return "TEXT_14_2";
        case node_t::TEXT_14_3: return "TEXT_14_3";
        case node_t::CASES_14_4: return "CASES_14_4";
        case node_t::FUNC_15_0: return "FUNC_15_0";
        case node_t::TEXT_15_1: return "TEXT_15_1";
        case node_t::TEXT_15_2: return "TEXT_15_2";
        case node_t::RET_15_3: return "RET_15_3";
        case node_t::DATA_16_0: return "DATA_16_0";
        case node_t::TEXT_16_1: return "TEXT_16_1";
        case node_t::TEXT_16_2: return "TEXT_16_2";
        case node_t::FUNC_17_0: return "FUNC_17_0";
        case node_t::DATA_17_1: return "DATA_17_1";
        case node_t::RET_18_0: return "RET_18_0";
        case node_t::RANGE_19_0: return "RANGE_19_0";
        case node_t::TEXT_19_1: return "TEXT_19_1";
        case node_t::TEXT_19_2: return "TEXT_19_2";
        case node_t::LOOP_21_0: return "LOOP_21_0";
        case node_t::BOOL_21_0: return "BOOL_21_0";
        case node_t::NO_STATE: return "NO_STATE";
        default: return "unknown";
    };
}

