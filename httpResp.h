// ==============================================================
// Generated using https://www.vsyn.ru/
// Author: Sergey V. Shchekoldin     Email: shchekoldin@gmail.com
// ==============================================================

#ifndef HTTPRESP_H
#define HTTPRESP_H
#pragma once

#include <string>
#include <vector>
#include <cstdint>

struct httpRespResult
{
    std::string encoding;
    std::string keepAlive;
    std::string transferEncoding;
    std::string type;
    uint64_t chunklen = 0;
    uint64_t contentLength = 0;
    bool isContentLen = false;
    // Don't forget to declare:
    void resp(__attribute__((unused)) const char * data, __attribute__((unused)) unsigned len, __attribute__((unused)) bool isFirst, __attribute__((unused)) bool isLast);
};

struct httpResp : httpRespResult
{
    bool parse(const char * data, unsigned len);
    bool parse(const std::string & data) { return parse(data.c_str(), data.length()); }
    void reset();
    bool empty() const { return mainState.node == node_t::NO_STATE && prlState.empty(); }

private:
    enum class node_t
    {
        LOOP_1_0, // line_1
            LABEL_1_0, LOOP_1_1,
                TEXT_2_0, RANGE_2_1, TEXT_2_2, RANGE_2_3, RANGE_2_4, RANGE_2_5, RANGE_2_6, RANGE_2_7, TEXT_2_8, TEXT_2_9, GOTO_2_10, RESET_2_11, 
        LOOP_4_0, // line_4
            LABEL_4_0, LOOP_4_1,
                RANGE_5_0, RANGE_5_1, TEXT_5_2, TEXT_5_3, 
                TEXT_6_0, RANGE_6_1, STRING_6_2, TEXT_6_3, TEXT_6_4, 
                ANY_7_0,
                    TEXT_7_0_0_0, 
                        BANG_7_0, RANGE_7_2, FUNC_7_3, UINT_7_4, RANGE_7_5, TEXT_7_6, TEXT_7_7, 
                ANY_8_0,
                    TEXT_8_0_0_0, 
                        BANG_8_0, RANGE_8_2, STRING_8_3, FUNC_8_4, TEXT_8_5, TEXT_8_6, 
                ANY_9_0,
                    TEXT_9_0_0_0, 
                        BANG_9_0, RANGE_9_2, STRING_9_3, FUNC_9_4, TEXT_9_5, TEXT_9_6, 
                ANY_10_0,
                    TEXT_10_0_0_0, 
                        BANG_10_0, RANGE_10_2, STRING_10_3, TEXT_10_4, TEXT_10_5, 
                TEXT_11_0, TEXT_11_1, LOOP_11_2,
                    FUNC_12_0, DATA_12_1, RET_12_2, 
                    FUNC_13_0, LOOP_13_1,
                        HEX_14_0, RANGE_14_1, TEXT_14_2, TEXT_14_3, CASES_14_4,
                            FUNC_15_0, TEXT_15_1, TEXT_15_2, RET_15_3, 
                            DATA_16_0, TEXT_16_1, TEXT_16_2, 
                    FUNC_17_0, DATA_17_1, 
                    RET_18_0, 
                 // catch:
                RANGE_19_0, TEXT_19_1, TEXT_19_2, 
        LOOP_21_0, // line_21
            BOOL_21_0, 
        NO_STATE
    };
    struct state_t
    {
        const char * data = nullptr;
        const char * end = nullptr;
        uint64_t eatSymCount = 0;
        node_t node = node_t::LOOP_1_0;
        unsigned retStackCount = 0;
        node_t retStack[2];
        unsigned remainDataLen() const { return (unsigned)(end - data); }
        const char * name() const;
    };
    state_t mainState;
    std::vector<state_t> prlState;

    void parse(state_t & state);
    bool loop_1_0(state_t & state);
    bool label_1_0(state_t & state);
    bool loop_1_1(state_t & state);
    bool text_2_0(state_t & state, bool isCaseCall);
    bool range_2_1(state_t & state);
    bool text_2_2(state_t & state);
    bool range_2_3(state_t & state);
    bool range_2_4(state_t & state);
    bool range_2_5(state_t & state);
    bool range_2_6(state_t & state);
    bool range_2_7(state_t & state);
    bool text_2_8(state_t & state);
    bool text_2_9(state_t & state);
    bool goto_2_10(state_t & state);
    bool reset_2_11(state_t & state);
    bool loop_4_0(state_t & state);
    bool label_4_0(state_t & state);
    bool loop_4_1(state_t & state);
    bool range_5_0(state_t & state);
    bool range_5_1(state_t & state);
    bool text_5_2(state_t & state);
    bool text_5_3(state_t & state);
    bool text_6_0(state_t & state, bool isCaseCall);
    bool range_6_1(state_t & state);
    bool string_6_2(state_t & state);
    void _string_6_2(const char * data, unsigned len, bool isFirst);
    bool text_6_3(state_t & state);
    bool text_6_4(state_t & state);
    bool any_7_0(state_t & state);
    bool text_7_0_0_0(state_t & state);
    bool bang_7_0(state_t & state);
    bool range_7_2(state_t & state);
    bool func_7_3(state_t & state);
    bool _func_7_3();
    bool uint_7_4(state_t & state);
    void _uint_7_4(const char * data, unsigned len, bool isFirst);
    bool range_7_5(state_t & state);
    bool text_7_6(state_t & state);
    bool text_7_7(state_t & state);
    bool any_8_0(state_t & state);
    bool text_8_0_0_0(state_t & state);
    bool bang_8_0(state_t & state);
    bool range_8_2(state_t & state);
    bool string_8_3(state_t & state);
    void _string_8_3(const char * data, unsigned len, bool isFirst);
    bool func_8_4(state_t & state);
    bool _func_8_4();
    bool text_8_5(state_t & state);
    bool text_8_6(state_t & state);
    bool any_9_0(state_t & state);
    bool text_9_0_0_0(state_t & state);
    bool bang_9_0(state_t & state);
    bool range_9_2(state_t & state);
    bool string_9_3(state_t & state);
    void _string_9_3(const char * data, unsigned len, bool isFirst);
    bool func_9_4(state_t & state);
    bool _func_9_4();
    bool text_9_5(state_t & state);
    bool text_9_6(state_t & state);
    bool any_10_0(state_t & state);
    bool text_10_0_0_0(state_t & state);
    bool bang_10_0(state_t & state);
    bool range_10_2(state_t & state);
    bool string_10_3(state_t & state);
    void _string_10_3(const char * data, unsigned len, bool isFirst);
    bool text_10_4(state_t & state);
    bool text_10_5(state_t & state);
    bool text_11_0(state_t & state);
    bool text_11_1(state_t & state);
    bool loop_11_2(state_t & state);
    bool func_12_0(state_t & state);
    bool _func_12_0();
    bool data_12_1(state_t & state);
    bool ret_12_2(state_t & state);
    bool func_13_0(state_t & state);
    bool _func_13_0();
    bool loop_13_1(state_t & state);
    bool hex_14_0(state_t & state);
    void _hex_14_0(const char * data, unsigned len, bool isFirst);
    bool range_14_1(state_t & state);
    bool text_14_2(state_t & state);
    bool text_14_3(state_t & state);
    bool cases_14_4(state_t & state);
    bool func_15_0(state_t & state);
    bool _func_15_0();
    bool text_15_1(state_t & state);
    bool text_15_2(state_t & state);
    bool ret_15_3(state_t & state);
    bool data_16_0(state_t & state);
    bool text_16_1(state_t & state);
    bool text_16_2(state_t & state);
    bool func_17_0(state_t & state);
    bool _func_17_0();
    bool data_17_1(state_t & state);
    bool ret_18_0(state_t & state);
    bool range_19_0(state_t & state);
    bool text_19_1(state_t & state);
    bool text_19_2(state_t & state);
    bool loop_21_0(state_t & state);
    bool bool_21_0(state_t & state);
    void _bool_21_0(const char * data, unsigned len, bool isFirst);
};
#endif
