// ==============================================================
// Date: 2025-11-16 07:23:44 GMT
// Generated using vProto(2025.11.16)        https://www.cgen.dev
// Author: Sergey V. Shchekoldin     Email: shchekoldin@gmail.com
// ==============================================================

#ifndef HTTPRESP_H
#define HTTPRESP_H
#pragma once

#include <array>
#include <cstdint>
#include <cstdio>
#include <string>
#include <vector>

struct httpRespResult
{
    std::string encoding;
    std::string transferEncoding;
    std::string type;
    uint64_t contentLength = 0;
    uint32_t chunklen = 0;
    bool isContentLen = false;
    bool isKeepAlive = false;

    // Don't forget to declare:
    void resp([[maybe_unused]] const char * data, [[maybe_unused]] unsigned len, [[maybe_unused]] bool isFirst, [[maybe_unused]] bool isLast);
};

struct httpResp : httpRespResult
{
    template<class... Args> explicit httpResp(Args ... args) : httpRespResult(args ...) {}
    bool parse(const char * data, unsigned len);
    bool parse(const std::string & data) { return parse(data.data(), data.length()); }
    void reset();
    bool empty() const { return mainState.node == node_t::NO_STATE && prlState.empty(); }

private:
    enum class node_t
    {
        LOOP_1_0, // line_1
            TEXT_1_0, RANGE_1_1, TEXT_1_2, RANGE_1_3, RANGE_1_4, RANGE_1_5, RANGE_1_6, TEXT_1_7, TEXT_1_8, CALL_1_9, RESET_1_10,
        LOOP_3_0, // line_3
            LABEL_3_0, LOOP_3_1,
                RANGE_4_0, RANGE_4_1, TEXT_4_2, TEXT_4_3,
                TEXT_5_0, RANGE_5_1, STRING_5_2, TEXT_5_3, TEXT_5_4,
                ANY_6_0,
                    TEXT_6_0_0_0,
                        BANG_6_0, RANGE_6_2, UINT_6_3, FUNC_6_4, TEXT_6_5, TEXT_6_6,
                ANY_7_0,
                    TEXT_7_0_0_0,
                        BANG_7_0, RANGE_7_2, STRING_7_3, FUNC_7_4, TEXT_7_5, TEXT_7_6,
                ANY_8_0,
                    TEXT_8_0_0_0,
                        BANG_8_0, RANGE_8_2, STRING_8_3, FUNC_8_4, TEXT_8_5, TEXT_8_6,
                ANY_9_0,
                    TEXT_9_0_0_0,
                        BANG_9_0, RANGE_9_2, TEXT_9_3, FUNC_9_4, TEXT_9_5, TEXT_9_6,
                TEXT_10_0, TEXT_10_1, LOOP_10_2,
                    IF_11_0, DATA_11_1, RET_11_2,
                    IF_12_0, LOOP_12_1,
                        HEX_13_0, RANGE_13_1, TEXT_13_2, TEXT_13_3, CASES_13_4,
                            IF_14_0, TEXT_14_1, TEXT_14_2, RET_14_3,
                            DATA_15_0, TEXT_15_1, TEXT_15_2,
                    IF_16_0, DATA_16_1,
                    RET_17_0,
                 // catch:
                RANGE_18_0, TEXT_18_1, TEXT_18_2,
        LOOP_20_0, // line_20
            BOOL_20_0,
            BOOL_21_0,
        NO_STATE
    };
    struct state_t
    {
        const char * data = nullptr;
        const char * end = nullptr;
        uint64_t consumed = 0;
        node_t node = node_t::LOOP_1_0;
        unsigned retStackCount = 0;
        std::array<node_t, 2> retStack;

        unsigned remainDataLen() const { return (unsigned)(end - data); }
        const char * name() const;
    };
    state_t mainState;
    std::vector<state_t> prlState;

    void parse(state_t & state);
    bool loop_1_0(state_t & state) const;
    bool text_1_0(state_t & state, bool isCaseCall) const;
    bool range_1_1(state_t & state) const;
    bool text_1_2(state_t & state) const;
    bool range_1_3(state_t & state) const;
    bool range_1_4(state_t & state) const;
    bool range_1_5(state_t & state) const;
    bool range_1_6(state_t & state) const;
    bool text_1_7(state_t & state) const;
    bool text_1_8(state_t & state) const;
    bool call_1_9(state_t & state) const;
    bool reset_1_10(state_t & state);
    bool loop_3_0(state_t & state) const;
    bool label_3_0(state_t & state) const;
    bool loop_3_1(state_t & state);
    bool range_4_0(state_t & state) const;
    bool range_4_1(state_t & state) const;
    bool text_4_2(state_t & state) const;
    bool text_4_3(state_t & state) const;
    bool text_5_0(state_t & state, bool isCaseCall) const;
    bool range_5_1(state_t & state) const;
    bool string_5_2(state_t & state);
    void _string_5_2(const char * data, unsigned len, uint64_t consumed);
    bool text_5_3(state_t & state) const;
    bool text_5_4(state_t & state) const;
    bool any_6_0(state_t & state);
    bool text_6_0_0_0(state_t & state) const;
    bool bang_6_0(state_t & state);
    bool range_6_2(state_t & state) const;
    bool uint_6_3(state_t & state);
    void _uint_6_3(const char * data, unsigned len, uint64_t consumed);
    bool func_6_4(state_t & state);
    bool _func_6_4();
    bool text_6_5(state_t & state) const;
    bool text_6_6(state_t & state) const;
    bool any_7_0(state_t & state);
    bool text_7_0_0_0(state_t & state) const;
    bool bang_7_0(state_t & state);
    bool range_7_2(state_t & state) const;
    bool string_7_3(state_t & state);
    void _string_7_3(const char * data, unsigned len, uint64_t consumed);
    bool func_7_4(state_t & state);
    bool _func_7_4();
    bool text_7_5(state_t & state) const;
    bool text_7_6(state_t & state) const;
    bool any_8_0(state_t & state);
    bool text_8_0_0_0(state_t & state) const;
    bool bang_8_0(state_t & state);
    bool range_8_2(state_t & state) const;
    bool string_8_3(state_t & state);
    void _string_8_3(const char * data, unsigned len, uint64_t consumed);
    bool func_8_4(state_t & state);
    bool _func_8_4();
    bool text_8_5(state_t & state) const;
    bool text_8_6(state_t & state) const;
    bool any_9_0(state_t & state);
    bool text_9_0_0_0(state_t & state) const;
    bool bang_9_0(state_t & state);
    bool range_9_2(state_t & state) const;
    bool text_9_3(state_t & state) const;
    bool func_9_4(state_t & state);
    bool _func_9_4();
    bool text_9_5(state_t & state) const;
    bool text_9_6(state_t & state) const;
    bool text_10_0(state_t & state) const;
    bool text_10_1(state_t & state) const;
    bool loop_10_2(state_t & state) const;
    bool if_11_0(state_t & state) const;
    bool data_11_1(state_t & state);
    bool ret_11_2(state_t & state) const;
    bool if_12_0(state_t & state) const;
    bool loop_12_1(state_t & state);
    bool hex_13_0(state_t & state);
    void _hex_13_0(const char * data, unsigned len, uint64_t consumed);
    bool range_13_1(state_t & state) const;
    bool text_13_2(state_t & state) const;
    bool text_13_3(state_t & state) const;
    bool cases_13_4(state_t & state);
    bool if_14_0(state_t & state) const;
    bool text_14_1(state_t & state) const;
    bool text_14_2(state_t & state) const;
    bool ret_14_3(state_t & state) const;
    bool data_15_0(state_t & state);
    bool text_15_1(state_t & state) const;
    bool text_15_2(state_t & state) const;
    bool if_16_0(state_t & state) const;
    bool data_16_1(state_t & state);
    bool ret_17_0(state_t & state) const;
    bool range_18_0(state_t & state) const;
    bool text_18_1(state_t & state) const;
    bool text_18_2(state_t & state) const;
    bool loop_20_0(state_t & state);
    bool bool_20_0(state_t & state);
    void _bool_20_0(const char * data, unsigned len, uint64_t consumed);
    bool bool_21_0(state_t & state);
    void _bool_21_0(const char * data, unsigned len, uint64_t consumed);
};
#endif
