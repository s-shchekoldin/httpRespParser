// ==============================================================
// Date: 2026-01-21 18:12:37 GMT
// Generated using vProto(2026.01.21)        https://www.cgen.dev
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
    template<class... Args> explicit httpResp(Args && ... args) : httpRespResult(args ...) {}
    bool parse(const char * data, unsigned len);
    bool parse(const std::string & data) { return parse(data.data(), data.length()); }
    bool empty() const { return mstate.node == NodeT::NoState && pstate.empty(); }
    void reset();

private:
    enum class NodeT
    {
        Loop1_0, // line_1
            Text1_0, Range1_1, Text1_2, Range1_3, Range1_4, Range1_5, Range1_6, Text1_7, Text1_8, Call1_9, Reset1_10,
        Loop3_0, // line_3
            Label3_0, Loop3_1,
                Range4_0, Range4_1, Text4_2, Text4_3,
                Text5_0, Range5_1, String5_2, Text5_3, Text5_4,
                Any6_0,
                    Text6_0_0_0,
                            Bang6_0, Range6_2, Uint6_3, Func6_4, Text6_5, Text6_6,
                Any7_0,
                    Text7_0_0_0,
                            Bang7_0, Range7_2, String7_3, Func7_4, Text7_5, Text7_6,
                Any8_0,
                    Text8_0_0_0,
                            Bang8_0, Range8_2, String8_3, Func8_4, Text8_5, Text8_6,
                Any9_0,
                    Text9_0_0_0,
                            Bang9_0, Range9_2, Text9_3, Func9_4, Text9_5, Text9_6,
                Text10_0, Text10_1, Loop10_2,
                    If11_0, Data11_1, Ret11_2,
                    If12_0, Loop12_1,
                        Hex13_0, Range13_1, Text13_2, Text13_3, Cases13_4,
                            If14_0, Text14_1, Text14_2, Ret14_3,
                            Data15_0, Text15_1, Text15_2,
                    If16_0, Data16_1,
                    Ret17_0,
                 // catch:
                Range18_0, Text18_1, Text18_2,
        Loop20_0, // line_20
            Bool20_0,
            Bool21_0,
        NoState
    };
    struct StateT
    {
        const char * data = nullptr;
        const char * end = nullptr;
        uint64_t consumed = 0;
        NodeT node = NodeT::Loop1_0;
        unsigned rcount = 0;
        std::array<NodeT, 2> rstack;
        unsigned remain() const { return unsigned(end - data); }
        const char * name() const;
    };
    StateT mstate;
    std::vector<StateT> pstate;

    void parse(StateT & state);
    bool loop1_0(StateT & state) const;
    bool text1_0(StateT & state, bool is_branch) const;
    bool range1_1(StateT & state) const;
    bool text1_2(StateT & state) const;
    bool range1_3(StateT & state) const;
    bool range1_4(StateT & state) const;
    bool range1_5(StateT & state) const;
    bool range1_6(StateT & state) const;
    bool text1_7(StateT & state) const;
    bool text1_8(StateT & state) const;
    bool call1_9(StateT & state) const;
    bool reset1_10(StateT & state);
    bool loop3_0(StateT & state) const;
    bool label3_0(StateT & state) const;
    bool loop3_1(StateT & state);
    bool range4_0(StateT & state) const;
    bool range4_1(StateT & state) const;
    bool text4_2(StateT & state) const;
    bool text4_3(StateT & state) const;
    bool text5_0(StateT & state, bool is_branch) const;
    bool range5_1(StateT & state) const;
    bool string5_2(StateT & state);
    void string5_2(const char * data, unsigned len, uint64_t consumed);
    bool text5_3(StateT & state) const;
    bool text5_4(StateT & state) const;
    bool any6_0(StateT & state);
    bool text6_0_0_0(StateT & state) const;
    bool bang6_0(StateT & state);
    bool range6_2(StateT & state) const;
    bool uint6_3(StateT & state);
    void uint6_3(const char * data, unsigned len, uint64_t consumed);
    bool func6_4(StateT & state);
    bool func6_4();
    bool text6_5(StateT & state) const;
    bool text6_6(StateT & state) const;
    bool any7_0(StateT & state);
    bool text7_0_0_0(StateT & state) const;
    bool bang7_0(StateT & state);
    bool range7_2(StateT & state) const;
    bool string7_3(StateT & state);
    void string7_3(const char * data, unsigned len, uint64_t consumed);
    bool func7_4(StateT & state);
    bool func7_4();
    bool text7_5(StateT & state) const;
    bool text7_6(StateT & state) const;
    bool any8_0(StateT & state);
    bool text8_0_0_0(StateT & state) const;
    bool bang8_0(StateT & state);
    bool range8_2(StateT & state) const;
    bool string8_3(StateT & state);
    void string8_3(const char * data, unsigned len, uint64_t consumed);
    bool func8_4(StateT & state);
    bool func8_4();
    bool text8_5(StateT & state) const;
    bool text8_6(StateT & state) const;
    bool any9_0(StateT & state);
    bool text9_0_0_0(StateT & state) const;
    bool bang9_0(StateT & state);
    bool range9_2(StateT & state) const;
    bool text9_3(StateT & state) const;
    bool func9_4(StateT & state);
    bool func9_4();
    bool text9_5(StateT & state) const;
    bool text9_6(StateT & state) const;
    bool text10_0(StateT & state) const;
    bool text10_1(StateT & state) const;
    bool loop10_2(StateT & state) const;
    bool if11_0(StateT & state) const;
    bool data11_1(StateT & state);
    bool ret11_2(StateT & state) const;
    bool if12_0(StateT & state) const;
    bool loop12_1(StateT & state);
    bool hex13_0(StateT & state);
    void hex13_0(const char * data, unsigned len, uint64_t consumed);
    bool range13_1(StateT & state) const;
    bool text13_2(StateT & state) const;
    bool text13_3(StateT & state) const;
    bool cases13_4(StateT & state);
    bool if14_0(StateT & state) const;
    bool text14_1(StateT & state) const;
    bool text14_2(StateT & state) const;
    bool ret14_3(StateT & state) const;
    bool data15_0(StateT & state);
    bool text15_1(StateT & state) const;
    bool text15_2(StateT & state) const;
    bool if16_0(StateT & state) const;
    bool data16_1(StateT & state);
    bool ret17_0(StateT & state) const;
    bool range18_0(StateT & state) const;
    bool text18_1(StateT & state) const;
    bool text18_2(StateT & state) const;
    bool loop20_0(StateT & state);
    bool bool20_0(StateT & state);
    void bool20_0(const char * data, unsigned len, uint64_t consumed);
    bool bool21_0(StateT & state);
    void bool21_0(const char * data, unsigned len, uint64_t consumed);
};
#endif
