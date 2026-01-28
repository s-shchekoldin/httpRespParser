// ==============================================================
// Date: 2026-01-28 20:26:22 GMT
// Generated using vProto(2026.01.28)        https://www.cgen.dev
// Author: Sergey V. Shchekoldin     Email: shchekoldin@gmail.com
// autoSSE: 1 cpp98: 0 (SSE4.2: 1 AVX2: 1 SSE2: 1)
// ==============================================================

// To enable SSE4.2 use: -msse4.2
// To enable AVX2 use: -mavx2
// To enable SSE2 use: -msse2
// Or: -march=native (may break compatibility)
#include "httpResp.h"
#if defined(__SSE4_2__) || defined(__AVX2__)
#include <immintrin.h>
#endif
#if defined(__SSE2__)
#include <emmintrin.h>
#endif

#if defined(_MSC_VER)
#include <intrin.h>
inline unsigned __ctz32(uint32_t x) { return _tzcnt_u32(x); }
#else
inline unsigned __ctz32(uint32_t x) { return __builtin_ctz(x); }
#endif

inline void httpResp::parse(StateT & state)
{
    while(true)
    {
#ifdef DEBUG_MODE
        printf("State%s: %s data: [%x, %x, %x, %x, %x]=%.*s\n", &state == &mstate ? "" : "*", state.name(),
            uint8_t(&state.data[0] < state.end ? state.data[0] : 0),
            uint8_t(&state.data[1] < state.end ? state.data[1] : 0),
            uint8_t(&state.data[2] < state.end ? state.data[2] : 0),
            uint8_t(&state.data[3] < state.end ? state.data[3] : 0),
            uint8_t(&state.data[4] < state.end ? state.data[4] : 0),
            10, state.data);
#endif
        NodeT n = state.node;
        const char * d = state.data;
        switch(state.node)
        {
            case NodeT::Loop1_0: loop1_0(state); break;
            case NodeT::Text1_0: if (!text1_0(state, false) || state.node != NodeT::Range1_1) break; [[fallthrough]];
            case NodeT::Range1_1: if (!range1_1(state) || state.node != NodeT::Text1_2) break; [[fallthrough]];
            case NodeT::Text1_2: if (!text1_2(state) || state.node != NodeT::Range1_3) break; [[fallthrough]];
            case NodeT::Range1_3: if (!range1_3(state) || state.node != NodeT::Range1_4) break; [[fallthrough]];
            case NodeT::Range1_4: if (!range1_4(state) || state.node != NodeT::Range1_5) break; [[fallthrough]];
            case NodeT::Range1_5: if (!range1_5(state) || state.node != NodeT::Range1_6) break; [[fallthrough]];
            case NodeT::Range1_6: if (!range1_6(state) || state.node != NodeT::Text1_7) break; [[fallthrough]];
            case NodeT::Text1_7: if (!text1_7(state) || state.node != NodeT::Text1_8) break; [[fallthrough]];
            case NodeT::Text1_8: if (!text1_8(state) || state.node != NodeT::Call1_9) break; [[fallthrough]];
            case NodeT::Call1_9: if (!call1_9(state) || state.node != NodeT::Reset1_10) break; [[fallthrough]];
            case NodeT::Reset1_10: reset1_10(state); break;
            case NodeT::Loop3_0: loop3_0(state); break;
            case NodeT::Label3_0: if (!label3_0(state) || state.node != NodeT::Loop3_1) break; [[fallthrough]];
            case NodeT::Loop3_1: loop3_1(state); break;
            case NodeT::Range4_0: if (!range4_0(state) || state.node != NodeT::Range4_1) break; [[fallthrough]];
            case NodeT::Range4_1: if (!range4_1(state) || state.node != NodeT::Text4_2) break; [[fallthrough]];
            case NodeT::Text4_2: if (!text4_2(state) || state.node != NodeT::Text4_3) break; [[fallthrough]];
            case NodeT::Text4_3: text4_3(state); break;
            case NodeT::Text5_0: if (!text5_0(state, false) || state.node != NodeT::Range5_1) break; [[fallthrough]];
            case NodeT::Range5_1: if (!range5_1(state) || state.node != NodeT::String5_2) break; [[fallthrough]];
            case NodeT::String5_2: if (!string5_2(state) || state.node != NodeT::Text5_3) break; [[fallthrough]];
            case NodeT::Text5_3: if (!text5_3(state) || state.node != NodeT::Text5_4) break; [[fallthrough]];
            case NodeT::Text5_4: text5_4(state); break;
            case NodeT::Any6_0: any6_0(state); break;
            case NodeT::Text6_0_0_0: if (!text6_0_0_0(state) || state.node != NodeT::Bang6_0) break; [[fallthrough]];
            case NodeT::Bang6_0: if (!bang6_0(state) || state.node != NodeT::Range6_2) break; [[fallthrough]];
            case NodeT::Range6_2: if (!range6_2(state) || state.node != NodeT::Uint6_3) break; [[fallthrough]];
            case NodeT::Uint6_3: if (!uint6_3(state) || state.node != NodeT::Func6_4) break; [[fallthrough]];
            case NodeT::Func6_4: if (!func6_4(state) || state.node != NodeT::Text6_5) break; [[fallthrough]];
            case NodeT::Text6_5: if (!text6_5(state) || state.node != NodeT::Text6_6) break; [[fallthrough]];
            case NodeT::Text6_6: text6_6(state); break;
            case NodeT::Any7_0: any7_0(state); break;
            case NodeT::Text7_0_0_0: if (!text7_0_0_0(state) || state.node != NodeT::Bang7_0) break; [[fallthrough]];
            case NodeT::Bang7_0: if (!bang7_0(state) || state.node != NodeT::Range7_2) break; [[fallthrough]];
            case NodeT::Range7_2: if (!range7_2(state) || state.node != NodeT::String7_3) break; [[fallthrough]];
            case NodeT::String7_3: if (!string7_3(state) || state.node != NodeT::Func7_4) break; [[fallthrough]];
            case NodeT::Func7_4: if (!func7_4(state) || state.node != NodeT::Text7_5) break; [[fallthrough]];
            case NodeT::Text7_5: if (!text7_5(state) || state.node != NodeT::Text7_6) break; [[fallthrough]];
            case NodeT::Text7_6: text7_6(state); break;
            case NodeT::Any8_0: any8_0(state); break;
            case NodeT::Text8_0_0_0: if (!text8_0_0_0(state) || state.node != NodeT::Bang8_0) break; [[fallthrough]];
            case NodeT::Bang8_0: if (!bang8_0(state) || state.node != NodeT::Range8_2) break; [[fallthrough]];
            case NodeT::Range8_2: if (!range8_2(state) || state.node != NodeT::String8_3) break; [[fallthrough]];
            case NodeT::String8_3: if (!string8_3(state) || state.node != NodeT::Func8_4) break; [[fallthrough]];
            case NodeT::Func8_4: if (!func8_4(state) || state.node != NodeT::Text8_5) break; [[fallthrough]];
            case NodeT::Text8_5: if (!text8_5(state) || state.node != NodeT::Text8_6) break; [[fallthrough]];
            case NodeT::Text8_6: text8_6(state); break;
            case NodeT::Any9_0: any9_0(state); break;
            case NodeT::Text9_0_0_0: if (!text9_0_0_0(state) || state.node != NodeT::Bang9_0) break; [[fallthrough]];
            case NodeT::Bang9_0: if (!bang9_0(state) || state.node != NodeT::Range9_2) break; [[fallthrough]];
            case NodeT::Range9_2: if (!range9_2(state) || state.node != NodeT::Text9_3) break; [[fallthrough]];
            case NodeT::Text9_3: if (!text9_3(state) || state.node != NodeT::Func9_4) break; [[fallthrough]];
            case NodeT::Func9_4: if (!func9_4(state) || state.node != NodeT::Text9_5) break; [[fallthrough]];
            case NodeT::Text9_5: if (!text9_5(state) || state.node != NodeT::Text9_6) break; [[fallthrough]];
            case NodeT::Text9_6: text9_6(state); break;
            case NodeT::Text10_0: if (!text10_0(state) || state.node != NodeT::Text10_1) break; [[fallthrough]];
            case NodeT::Text10_1: if (!text10_1(state) || state.node != NodeT::Loop10_2) break; [[fallthrough]];
            case NodeT::Loop10_2: loop10_2(state); break;
            case NodeT::If11_0: if (!if11_0(state) || state.node != NodeT::Data11_1) break; [[fallthrough]];
            case NodeT::Data11_1: if (!data11_1(state) || state.node != NodeT::Ret11_2) break; [[fallthrough]];
            case NodeT::Ret11_2: ret11_2(state); break;
            case NodeT::If12_0: if (!if12_0(state) || state.node != NodeT::Loop12_1) break; [[fallthrough]];
            case NodeT::Loop12_1: loop12_1(state); break;
            case NodeT::Hex13_0: if (!hex13_0(state) || state.node != NodeT::Range13_1) break; [[fallthrough]];
            case NodeT::Range13_1: if (!range13_1(state) || state.node != NodeT::Text13_2) break; [[fallthrough]];
            case NodeT::Text13_2: if (!text13_2(state) || state.node != NodeT::Text13_3) break; [[fallthrough]];
            case NodeT::Text13_3: if (!text13_3(state) || state.node != NodeT::Cases13_4) break; [[fallthrough]];
            case NodeT::Cases13_4: cases13_4(state); break;
            case NodeT::If14_0: if (!if14_0(state) || state.node != NodeT::Text14_1) break; [[fallthrough]];
            case NodeT::Text14_1: if (!text14_1(state) || state.node != NodeT::Text14_2) break; [[fallthrough]];
            case NodeT::Text14_2: if (!text14_2(state) || state.node != NodeT::Ret14_3) break; [[fallthrough]];
            case NodeT::Ret14_3: ret14_3(state); break;
            case NodeT::Data15_0: if (!data15_0(state) || state.node != NodeT::Text15_1) break; [[fallthrough]];
            case NodeT::Text15_1: if (!text15_1(state) || state.node != NodeT::Text15_2) break; [[fallthrough]];
            case NodeT::Text15_2: text15_2(state); break;
            case NodeT::If16_0: if (!if16_0(state) || state.node != NodeT::Data16_1) break; [[fallthrough]];
            case NodeT::Data16_1: data16_1(state); break;
            case NodeT::Ret17_0: ret17_0(state); break;
            case NodeT::Range18_0: if (!range18_0(state) || state.node != NodeT::Text18_1) break; [[fallthrough]];
            case NodeT::Text18_1: if (!text18_1(state) || state.node != NodeT::Text18_2) break; [[fallthrough]];
            case NodeT::Text18_2: text18_2(state); break;
            case NodeT::Loop20_0: loop20_0(state); break;
            case NodeT::Bool20_0: bool20_0(state); break;
            case NodeT::Bool21_0: bool21_0(state); break;
            case NodeT::NoState:
            default: return;
        }; // switch
        if (d == state.data && n == state.node) [[unlikely]]
            break;
    }
}

bool httpResp::parse(const char * data, unsigned len)
{
    mstate.data = data;
    mstate.end = &data[len];
    for(auto & p : pstate)
    {
        p.data = data;
        p.end = &data[len];
    }
    for(bool reparse = true; reparse; )
    {
        reparse = false;
        unsigned outflow = 0;;
        for(unsigned i = 0; i < pstate.size(); i++)
        {
            if (pstate[i].remain())
            {
                StateT state = pstate[i];
                parse(state);
                if (state.node == NodeT::NoState)
                    continue;
                reparse = true;
                pstate[outflow] = state;
            }
            else if (i != outflow)
                pstate[outflow] = pstate[i];
            outflow++;
        }
        pstate.resize(outflow);
        parse(mstate);
        if (mstate.node != NodeT::NoState && mstate.remain())
            reparse = true;
    }
    return mstate.node != NodeT::NoState || !pstate.empty();
}

inline bool httpResp::loop1_0(StateT & state) const
{
    return text1_0(state, false);
}

inline bool httpResp::text1_0(StateT & state, bool is_branch) const
{
    const static std::array<uint8_t, 5> text = {0x48, 0x54, 0x54, 0x50, 0x2f}; // http/
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            bool ret = is_branch && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Range1_1;
            return true;
        }
    }
    state.node = NodeT::Text1_0;
    return true;
}

inline bool httpResp::range1_1(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
#if defined(__SSE4_2__)
        if(&state.data[16] <= state.end)
        {
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            const __m128i s0 = _mm_setr_epi8(0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
            int r = _mm_cmpestri(s0, 10, d, 16, _SIDD_UBYTE_OPS | _SIDD_LEAST_SIGNIFICANT | _SIDD_CMP_EQUAL_ANY | _SIDD_NEGATIVE_POLARITY);
            if (r < 16)
                state.data += r;
            else
            {
                state.data += 16;
                continue;
            }
        }
#else
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Text1_2;
            return true;
        } else {
            state.node = NodeT::NoState;
            return false;
        }
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range1_1;
    return true;
}

inline bool httpResp::text1_2(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x2E) != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Range1_3;
            return true;
        }
    }
    state.node = NodeT::Text1_2;
    return true;
}

inline bool httpResp::range1_3(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
#if defined(__SSE4_2__)
        if(&state.data[16] <= state.end)
        {
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            const __m128i s0 = _mm_setr_epi8(0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
            int r = _mm_cmpestri(s0, 10, d, 16, _SIDD_UBYTE_OPS | _SIDD_LEAST_SIGNIFICANT | _SIDD_CMP_EQUAL_ANY | _SIDD_NEGATIVE_POLARITY);
            if (r < 16)
                state.data += r;
            else
            {
                state.data += 16;
                continue;
            }
        }
#else
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Range1_4;
            return true;
        } else {
            state.node = NodeT::NoState;
            return false;
        }
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range1_3;
    return true;
}

inline bool httpResp::range1_4(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
#if defined(__AVX2__)
        if(&state.data[32] <= state.end)
        {
            const __m256i d = _mm256_lddqu_si256((const __m256i *)state.data);
            __m256i m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
            m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
            uint32_t r = ~_mm256_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 32;
                continue;
            }
        }
#elif defined(__SSE2__)
        if(&state.data[16] <= state.end)
        {
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            __m128i m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
            m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
            uint16_t r = ~_mm_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 16;
                continue;
            }
        }
#else
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Range1_5;
            return true;
        } else {
            state.node = NodeT::NoState;
            return false;
        }
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range1_4;
    return true;
}

inline bool httpResp::range1_5(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
#if defined(__SSE4_2__)
        if(&state.data[16] <= state.end)
        {
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            const __m128i s0 = _mm_setr_epi8(0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
            int r = _mm_cmpestri(s0, 10, d, 16, _SIDD_UBYTE_OPS | _SIDD_LEAST_SIGNIFICANT | _SIDD_CMP_EQUAL_ANY | _SIDD_NEGATIVE_POLARITY);
            if (r < 16)
                state.data += r;
            else
            {
                state.data += 16;
                continue;
            }
        }
#else
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Range1_6;
            return true;
        } else {
            state.node = NodeT::NoState;
            return false;
        }
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range1_5;
    return true;
}

inline bool httpResp::range1_6(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        state.consumed = 0;
        state.node = NodeT::Text1_7;
        return true;
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range1_6;
    return true;
}

inline bool httpResp::text1_7(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text1_8;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text1_8;
            return true;
        }
    }
    state.node = NodeT::Text1_7;
    return true;
}

inline bool httpResp::text1_8(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Call1_9;
            return true;
        }
    }
    state.node = NodeT::Text1_8;
    return true;
}

inline bool httpResp::call1_9(StateT & state) const
{
    state.node = NodeT::Label3_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Reset1_10;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Reset1_10;
    }
    return true;
}

inline bool httpResp::reset1_10(StateT & state)
{
    const char * d = state.data;
    const char * e = state.end;
    if (&mstate != &state)
        state.node = NodeT::NoState;
    httpResp::reset();
    mstate.data = d;
    mstate.end = e;
    return true;
}

inline bool httpResp::loop3_0(StateT & state) const
{
    return label3_0(state);
}

inline bool httpResp::label3_0(StateT & state) const
{
    state.node = NodeT::Loop3_1;
    return true;
}

inline bool httpResp::loop3_1(StateT & state)
{
    if (state.data == state.end)
        return true;
    if (range4_0(state)) // case_1
        return true;
    if (text5_0(state, true)) // case_2
        return true;
    StateT istate = state;
    if (any6_0(state)) // case_3
        return true;
    state = istate;
    if (any7_0(state)) // case_4
        return true;
    state = istate;
    if (any8_0(state)) // case_5
        return true;
    state = istate;
    if (any9_0(state)) // case_6
        return true;
    state = istate;
    if (text10_0(state)) // case_7
        return true;
    state.node = NodeT::Range18_0;
    return true;
}

inline bool httpResp::range4_0(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Range4_1;
            return true;
        } else {
            state.node = NodeT::Range18_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range4_0;
    return true;
}

inline bool httpResp::range4_1(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        state.consumed = 0;
        state.node = NodeT::Text4_2;
        return true;
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range4_1;
    return true;
}

inline bool httpResp::text4_2(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text4_3;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text4_3;
            return true;
        }
    }
    state.node = NodeT::Text4_2;
    return true;
}

inline bool httpResp::text4_3(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Range18_0;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop3_1;
            return true;
        }
    }
    state.node = NodeT::Text4_3;
    return true;
}

inline bool httpResp::text5_0(StateT & state, bool is_branch) const
{
    const static std::array<uint8_t, 18> text = {0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, 0x65, 0x72, 0x2d, 0x65, 0x6e, 0x63, 0x6f, 0x64, 0x69, 0x6e, 0x67, 0x3a}; // transfer-encoding:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::Range18_0;
            bool ret = is_branch && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Range5_1;
            return true;
        }
    }
    state.node = NodeT::Text5_0;
    return true;
}

inline bool httpResp::range5_1(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
#if defined(__AVX2__)
        if(&state.data[32] <= state.end)
        {
            const __m256i d = _mm256_lddqu_si256((const __m256i *)state.data);
            __m256i m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
            m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
            uint32_t r = ~_mm256_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 32;
                continue;
            }
        }
#elif defined(__SSE2__)
        if(&state.data[16] <= state.end)
        {
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            __m128i m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
            m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
            uint16_t r = ~_mm_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 16;
                continue;
            }
        }
#else
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::String5_2;
            return true;
        } else {
            state.node = NodeT::Range18_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range5_1;
    return true;
}

void httpResp::string5_2(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        httpRespResult::transferEncoding.clear();
    if ((httpRespResult::transferEncoding.length() + len) > 256)
        len = 256 - httpRespResult::transferEncoding.length();
    httpRespResult::transferEncoding.append(data, len);
}

inline bool httpResp::string5_2(StateT & state)
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
#if defined(__AVX2__)
        if(&state.data[32] <= state.end)
        {
            const __m256i d = _mm256_lddqu_si256((const __m256i *)state.data);
            __m256i m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0xa), d);
            m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0xd), d));
            uint32_t r = _mm256_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 32;
                continue;
            }
        }
#elif defined(__SSE2__)
        if(&state.data[16] <= state.end)
        {
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            __m128i m = _mm_cmpeq_epi8(_mm_set1_epi8(0xa), d);
            m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0xd), d));
            uint16_t r = _mm_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 16;
                continue;
            }
        }
#else
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        string5_2(datastart, unsigned(state.data - datastart), state.consumed);
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Text5_3;
            return true;
        } else {
            state.node = NodeT::Range18_0;
            return false;
        }
    }
    if (datastart < state.data)
        string5_2(datastart, unsigned(state.data - datastart), state.consumed);
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::String5_2;
    return true;
}

inline bool httpResp::text5_3(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text5_4;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text5_4;
            return true;
        }
    }
    state.node = NodeT::Text5_3;
    return true;
}

inline bool httpResp::text5_4(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Range18_0;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop3_1;
            return true;
        }
    }
    state.node = NodeT::Text5_4;
    return true;
}

inline bool httpResp::any6_0(StateT & state)
{
    if (state.data == state.end)
        return true;
    // case_1: Text6_0_0_0
    if (text6_0_0_0(state) && state.node == NodeT::Bang6_0)
        return true;
    else if (state.node != NodeT::NoState)
        pstate.push_back(state);
    state.node = NodeT::Range18_0;
    return false;
}

inline bool httpResp::text6_0_0_0(StateT & state) const
{
    const static std::array<uint8_t, 15> text = {0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x3a}; // content-length:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::NoState;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Bang6_0;
            return true;
        }
    }
    state.node = NodeT::Text6_0_0_0;
    return true;
}

inline bool httpResp::bang6_0(StateT & state)
{
    state.node = NodeT::Range6_2;
    if (&mstate != &state)
    {
        mstate = state;
        state.node = NodeT::NoState;
    }
    pstate.clear();
    return true;
}

inline bool httpResp::range6_2(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
#if defined(__AVX2__)
        if(&state.data[32] <= state.end)
        {
            const __m256i d = _mm256_lddqu_si256((const __m256i *)state.data);
            __m256i m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
            m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
            uint32_t r = ~_mm256_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 32;
                continue;
            }
        }
#elif defined(__SSE2__)
        if(&state.data[16] <= state.end)
        {
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            __m128i m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
            m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
            uint16_t r = ~_mm_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 16;
                continue;
            }
        }
#else
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Uint6_3;
            return true;
        } else {
            state.node = NodeT::Range18_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range6_2;
    return true;
}

void httpResp::uint6_3(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        httpRespResult::contentLength = 0;
    for(const char * end = &data[len]; data < end; data++)
        httpRespResult::contentLength = httpRespResult::contentLength*10 + *data - '0';
}

inline bool httpResp::uint6_3(StateT & state)
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint6_3(datastart, unsigned(state.data - datastart), state.consumed);
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Func6_4;
            return true;
        } else {
            state.node = NodeT::Range18_0;
            return false;
        }
    }
    if (datastart < state.data)
        uint6_3(datastart, unsigned(state.data - datastart), state.consumed);
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Uint6_3;
    return true;
}

inline bool httpResp::func6_4()
{
     isContentLen = true; 
    return true;
}
inline bool httpResp::func6_4(StateT & state)
{
    if (func6_4())
    {
        state.node = NodeT::Text6_5;
        return true;
    }
    state.node = NodeT::Range18_0;
    return false;
}

inline bool httpResp::text6_5(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text6_6;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text6_6;
            return true;
        }
    }
    state.node = NodeT::Text6_5;
    return true;
}

inline bool httpResp::text6_6(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Range18_0;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop3_1;
            return true;
        }
    }
    state.node = NodeT::Text6_6;
    return true;
}

inline bool httpResp::any7_0(StateT & state)
{
    if (state.data == state.end)
        return true;
    // case_1: Text7_0_0_0
    if (text7_0_0_0(state) && state.node == NodeT::Bang7_0)
        return true;
    else if (state.node != NodeT::NoState)
        pstate.push_back(state);
    state.node = NodeT::Range18_0;
    return false;
}

inline bool httpResp::text7_0_0_0(StateT & state) const
{
    const static std::array<uint8_t, 13> text = {0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a}; // content-type:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::NoState;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Bang7_0;
            return true;
        }
    }
    state.node = NodeT::Text7_0_0_0;
    return true;
}

inline bool httpResp::bang7_0(StateT & state)
{
    state.node = NodeT::Range7_2;
    if (&mstate != &state)
    {
        mstate = state;
        state.node = NodeT::NoState;
    }
    pstate.clear();
    return true;
}

inline bool httpResp::range7_2(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
#if defined(__AVX2__)
        if(&state.data[32] <= state.end)
        {
            const __m256i d = _mm256_lddqu_si256((const __m256i *)state.data);
            __m256i m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
            m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
            uint32_t r = ~_mm256_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 32;
                continue;
            }
        }
#elif defined(__SSE2__)
        if(&state.data[16] <= state.end)
        {
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            __m128i m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
            m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
            uint16_t r = ~_mm_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 16;
                continue;
            }
        }
#else
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::String7_3;
            return true;
        } else {
            state.node = NodeT::Range18_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range7_2;
    return true;
}

void httpResp::string7_3(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        httpRespResult::type.clear();
    if ((httpRespResult::type.length() + len) > 256)
        len = 256 - httpRespResult::type.length();
    httpRespResult::type.append(data, len);
}

inline bool httpResp::string7_3(StateT & state)
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
#if defined(__AVX2__)
        if(&state.data[32] <= state.end)
        {
            const __m256i d = _mm256_lddqu_si256((const __m256i *)state.data);
            __m256i m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0xa), d);
            m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0xd), d));
            uint32_t r = _mm256_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 32;
                continue;
            }
        }
#elif defined(__SSE2__)
        if(&state.data[16] <= state.end)
        {
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            __m128i m = _mm_cmpeq_epi8(_mm_set1_epi8(0xa), d);
            m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0xd), d));
            uint16_t r = _mm_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 16;
                continue;
            }
        }
#else
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        string7_3(datastart, unsigned(state.data - datastart), state.consumed);
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Func7_4;
            return true;
        } else {
            state.node = NodeT::Range18_0;
            return false;
        }
    }
    if (datastart < state.data)
        string7_3(datastart, unsigned(state.data - datastart), state.consumed);
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::String7_3;
    return true;
}

inline bool httpResp::func7_4()
{
     printf("Type: %s\n", type.c_str()); 
    return true;
}
inline bool httpResp::func7_4(StateT & state)
{
    if (func7_4())
    {
        state.node = NodeT::Text7_5;
        return true;
    }
    state.node = NodeT::Range18_0;
    return false;
}

inline bool httpResp::text7_5(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text7_6;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text7_6;
            return true;
        }
    }
    state.node = NodeT::Text7_5;
    return true;
}

inline bool httpResp::text7_6(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Range18_0;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop3_1;
            return true;
        }
    }
    state.node = NodeT::Text7_6;
    return true;
}

inline bool httpResp::any8_0(StateT & state)
{
    if (state.data == state.end)
        return true;
    // case_1: Text8_0_0_0
    if (text8_0_0_0(state) && state.node == NodeT::Bang8_0)
        return true;
    else if (state.node != NodeT::NoState)
        pstate.push_back(state);
    state.node = NodeT::Range18_0;
    return false;
}

inline bool httpResp::text8_0_0_0(StateT & state) const
{
    const static std::array<uint8_t, 17> text = {0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x65, 0x6e, 0x63, 0x6f, 0x64, 0x69, 0x6e, 0x67, 0x3a}; // content-encoding:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::NoState;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Bang8_0;
            return true;
        }
    }
    state.node = NodeT::Text8_0_0_0;
    return true;
}

inline bool httpResp::bang8_0(StateT & state)
{
    state.node = NodeT::Range8_2;
    if (&mstate != &state)
    {
        mstate = state;
        state.node = NodeT::NoState;
    }
    pstate.clear();
    return true;
}

inline bool httpResp::range8_2(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
#if defined(__AVX2__)
        if(&state.data[32] <= state.end)
        {
            const __m256i d = _mm256_lddqu_si256((const __m256i *)state.data);
            __m256i m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
            m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
            uint32_t r = ~_mm256_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 32;
                continue;
            }
        }
#elif defined(__SSE2__)
        if(&state.data[16] <= state.end)
        {
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            __m128i m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
            m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
            uint16_t r = ~_mm_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 16;
                continue;
            }
        }
#else
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::String8_3;
            return true;
        } else {
            state.node = NodeT::Range18_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range8_2;
    return true;
}

void httpResp::string8_3(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        httpRespResult::encoding.clear();
    if ((httpRespResult::encoding.length() + len) > 256)
        len = 256 - httpRespResult::encoding.length();
    httpRespResult::encoding.append(data, len);
}

inline bool httpResp::string8_3(StateT & state)
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
#if defined(__AVX2__)
        if(&state.data[32] <= state.end)
        {
            const __m256i d = _mm256_lddqu_si256((const __m256i *)state.data);
            __m256i m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0xa), d);
            m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0xd), d));
            uint32_t r = _mm256_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 32;
                continue;
            }
        }
#elif defined(__SSE2__)
        if(&state.data[16] <= state.end)
        {
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            __m128i m = _mm_cmpeq_epi8(_mm_set1_epi8(0xa), d);
            m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0xd), d));
            uint16_t r = _mm_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 16;
                continue;
            }
        }
#else
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        string8_3(datastart, unsigned(state.data - datastart), state.consumed);
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Func8_4;
            return true;
        } else {
            state.node = NodeT::Range18_0;
            return false;
        }
    }
    if (datastart < state.data)
        string8_3(datastart, unsigned(state.data - datastart), state.consumed);
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::String8_3;
    return true;
}

inline bool httpResp::func8_4()
{
     printf("Encoding: %s\n", encoding.c_str()); 
    return true;
}
inline bool httpResp::func8_4(StateT & state)
{
    if (func8_4())
    {
        state.node = NodeT::Text8_5;
        return true;
    }
    state.node = NodeT::Range18_0;
    return false;
}

inline bool httpResp::text8_5(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text8_6;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text8_6;
            return true;
        }
    }
    state.node = NodeT::Text8_5;
    return true;
}

inline bool httpResp::text8_6(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Range18_0;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop3_1;
            return true;
        }
    }
    state.node = NodeT::Text8_6;
    return true;
}

inline bool httpResp::any9_0(StateT & state)
{
    if (state.data == state.end)
        return true;
    // case_1: Text9_0_0_0
    if (text9_0_0_0(state) && state.node == NodeT::Bang9_0)
        return true;
    else if (state.node != NodeT::NoState)
        pstate.push_back(state);
    state.node = NodeT::Range18_0;
    return false;
}

inline bool httpResp::text9_0_0_0(StateT & state) const
{
    const static std::array<uint8_t, 11> text = {0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x3a}; // connection:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::NoState;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Bang9_0;
            return true;
        }
    }
    state.node = NodeT::Text9_0_0_0;
    return true;
}

inline bool httpResp::bang9_0(StateT & state)
{
    state.node = NodeT::Range9_2;
    if (&mstate != &state)
    {
        mstate = state;
        state.node = NodeT::NoState;
    }
    pstate.clear();
    return true;
}

inline bool httpResp::range9_2(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
#if defined(__AVX2__)
        if(&state.data[32] <= state.end)
        {
            const __m256i d = _mm256_lddqu_si256((const __m256i *)state.data);
            __m256i m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
            m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
            uint32_t r = ~_mm256_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 32;
                continue;
            }
        }
#elif defined(__SSE2__)
        if(&state.data[16] <= state.end)
        {
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            __m128i m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
            m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
            uint16_t r = ~_mm_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 16;
                continue;
            }
        }
#else
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Text9_3;
            return true;
        } else {
            state.node = NodeT::Range18_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range9_2;
    return true;
}

inline bool httpResp::text9_3(StateT & state) const
{
    const static std::array<uint8_t, 10> text = {0x6b, 0x65, 0x65, 0x70, 0x2d, 0x61, 0x6c, 0x69, 0x76, 0x65}; // keep-alive
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::Range18_0;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Func9_4;
            return true;
        }
    }
    state.node = NodeT::Text9_3;
    return true;
}

inline bool httpResp::func9_4()
{
     isKeepAlive = true; 
    return true;
}
inline bool httpResp::func9_4(StateT & state)
{
    if (func9_4())
    {
        state.node = NodeT::Text9_5;
        return true;
    }
    state.node = NodeT::Range18_0;
    return false;
}

inline bool httpResp::text9_5(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text9_6;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text9_6;
            return true;
        }
    }
    state.node = NodeT::Text9_5;
    return true;
}

inline bool httpResp::text9_6(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Range18_0;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop3_1;
            return true;
        }
    }
    state.node = NodeT::Text9_6;
    return true;
}

inline bool httpResp::text10_0(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text10_1;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text10_1;
            return true;
        }
    }
    state.node = NodeT::Text10_0;
    return true;
}

inline bool httpResp::text10_1(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Range18_0;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop10_2;
            return true;
        }
    }
    state.node = NodeT::Text10_1;
    return true;
}

inline bool httpResp::loop10_2(StateT & state) const
{
    if (if11_0(state)) // case_1
        return true;
    if (if12_0(state)) // case_2
        return true;
    if (if16_0(state)) // case_3
        return true;
    if (ret17_0(state)) // case_4
        return true;
    state.node = NodeT::NoState;
    return true;
}

inline bool httpResp::if11_0(StateT & state) const
{
    if (isContentLen)
    {
        state.node = NodeT::Data11_1;
        return true;
    }
    state.node = NodeT::NoState;
    return false;
}

inline bool httpResp::data11_1(StateT & state)
{
    const char * datastart = state.data;
    if (!state.consumed)
        state.node = NodeT::Data11_1;
    if (state.data == state.end)
        return true;
    else if (int64_t(state.consumed + state.remain()) >= int64_t(contentLength))
    {
        state.data += (contentLength - state.consumed);
        httpRespResult::resp(datastart, unsigned(state.data - datastart), !state.consumed, true);
        state.consumed = 0;
        state.node = NodeT::Ret11_2;
    } else {
        state.data = state.end;
        httpRespResult::resp(datastart, unsigned(state.data - datastart), !state.consumed, false);
        state.consumed += unsigned(state.data - datastart);
    }
    return true;
}

inline bool httpResp::ret11_2(StateT & state) const
{
    state.node = state.rcount ? state.rstack[--state.rcount] : NodeT::NoState;
    return state.node != NodeT::NoState;
}

inline bool httpResp::if12_0(StateT & state) const
{
    if (transferEncoding.find("chunked") != std::string::npos)
    {
        state.node = NodeT::Loop12_1;
        return true;
    }
    state.node = NodeT::NoState;
    return false;
}

inline bool httpResp::loop12_1(StateT & state)
{
    return hex13_0(state);
}

void httpResp::hex13_0(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        httpRespResult::chunklen = 0;
    for(const char * end = &data[len]; data < end; data++)
    if (*data >= 'a' && *data <= 'f')
        httpRespResult::chunklen = (httpRespResult::chunklen << 4) | uint8_t(*data - 'a' + 10);
    else if (*data >= 'A' && *data <= 'F')
        httpRespResult::chunklen = (httpRespResult::chunklen << 4) | uint8_t(*data - 'A' + 10);
    else if (*data >= '0' && *data <= '9')
        httpRespResult::chunklen = (httpRespResult::chunklen << 4) | uint8_t(*data - '0');
}

inline bool httpResp::hex13_0(StateT & state)
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        hex13_0(datastart, unsigned(state.data - datastart), state.consumed);
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Range13_1;
            return true;
        } else {
            state.node = NodeT::NoState;
            return false;
        }
    }
    if (datastart < state.data)
        hex13_0(datastart, unsigned(state.data - datastart), state.consumed);
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Hex13_0;
    return true;
}

inline bool httpResp::range13_1(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        state.consumed = 0;
        state.node = NodeT::Text13_2;
        return true;
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range13_1;
    return true;
}

inline bool httpResp::text13_2(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text13_3;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text13_3;
            return true;
        }
    }
    state.node = NodeT::Text13_2;
    return true;
}

inline bool httpResp::text13_3(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Cases13_4;
            return true;
        }
    }
    state.node = NodeT::Text13_3;
    return true;
}

inline bool httpResp::cases13_4(StateT & state)
{
    if (state.data == state.end)
        return true;
    if (if14_0(state)) // case_1
        return true;
    if (data15_0(state)) // case_2
        return true;
    state.node = NodeT::NoState;
    return true;
}

inline bool httpResp::if14_0(StateT & state) const
{
    if (!chunklen)
    {
        state.node = NodeT::Text14_1;
        return true;
    }
    state.node = NodeT::NoState;
    return false;
}

inline bool httpResp::text14_1(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text14_2;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text14_2;
            return true;
        }
    }
    state.node = NodeT::Text14_1;
    return true;
}

inline bool httpResp::text14_2(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Ret14_3;
            return true;
        }
    }
    state.node = NodeT::Text14_2;
    return true;
}

inline bool httpResp::ret14_3(StateT & state) const
{
    state.node = state.rcount ? state.rstack[--state.rcount] : NodeT::NoState;
    return state.node != NodeT::NoState;
}

inline bool httpResp::data15_0(StateT & state)
{
    const char * datastart = state.data;
    if (!state.consumed)
        state.node = NodeT::Data15_0;
    if (state.data == state.end)
        return true;
    else if (int64_t(state.consumed + state.remain()) >= int64_t(chunklen))
    {
        state.data += (chunklen - state.consumed);
        httpRespResult::resp(datastart, unsigned(state.data - datastart), !state.consumed, true);
        state.consumed = 0;
        state.node = NodeT::Text15_1;
    } else {
        state.data = state.end;
        httpRespResult::resp(datastart, unsigned(state.data - datastart), !state.consumed, false);
        state.consumed += unsigned(state.data - datastart);
    }
    return true;
}

inline bool httpResp::text15_1(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text15_2;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text15_2;
            return true;
        }
    }
    state.node = NodeT::Text15_1;
    return true;
}

inline bool httpResp::text15_2(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop12_1;
            return true;
        }
    }
    state.node = NodeT::Text15_2;
    return true;
}

inline bool httpResp::if16_0(StateT & state) const
{
    if (!isKeepAlive)
    {
        state.node = NodeT::Data16_1;
        return true;
    }
    state.node = NodeT::NoState;
    return false;
}

inline bool httpResp::data16_1(StateT & state)
{
    const char * datastart = state.data;
    if (!state.consumed)
        state.node = NodeT::Data16_1;
    if (state.data == state.end)
        return true;
    state.data = state.end;
    httpRespResult::resp(datastart, unsigned(state.data - datastart), !state.consumed, false);
    state.consumed += unsigned(state.data - datastart);
    return true;
}

inline bool httpResp::ret17_0(StateT & state) const
{
    state.node = state.rcount ? state.rstack[--state.rcount] : NodeT::NoState;
    return state.node != NodeT::NoState;
}

inline bool httpResp::range18_0(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        state.consumed = 0;
        state.node = NodeT::Text18_1;
        return true;
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range18_0;
    return true;
}

inline bool httpResp::text18_1(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text18_2;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text18_2;
            return true;
        }
    }
    state.node = NodeT::Text18_1;
    return true;
}

inline bool httpResp::text18_2(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop3_1;
            return true;
        }
    }
    state.node = NodeT::Text18_2;
    return true;
}

inline bool httpResp::loop20_0(StateT & state)
{
    if (state.data == state.end)
        return true;
    if (bool20_0(state)) // case_1
        return true;
    if (bool21_0(state)) // case_2
        return true;
    state.node = NodeT::NoState;
    return true;
}

void httpResp::bool20_0(const char * data, unsigned len, uint64_t consumed)
{
    if (len)
        httpRespResult::isContentLen = (*data != 0);
    else if (!consumed)
        httpRespResult::isContentLen = false;
}

inline bool httpResp::bool20_0(StateT & state)
{
    const char * datastart = state.data;
    if (!state.consumed)
        state.node = NodeT::Bool20_0;
    if (state.data == state.end)
        return true;
    else if (int64_t(state.consumed + state.remain()) >= int64_t(1))
    {
        state.data += (1 - state.consumed);
        bool20_0(datastart, unsigned(state.data - datastart), state.consumed);
        state.consumed = 0;
        state.node = NodeT::Loop20_0;
    } else {
        state.data = state.end;
        bool20_0(datastart, unsigned(state.data - datastart), state.consumed);
        state.consumed += unsigned(state.data - datastart);
    }
    return true;
}

void httpResp::bool21_0(const char * data, unsigned len, uint64_t consumed)
{
    if (len)
        httpRespResult::isKeepAlive = (*data != 0);
    else if (!consumed)
        httpRespResult::isKeepAlive = false;
}

inline bool httpResp::bool21_0(StateT & state)
{
    const char * datastart = state.data;
    if (!state.consumed)
        state.node = NodeT::Bool21_0;
    if (state.data == state.end)
        return true;
    else if (int64_t(state.consumed + state.remain()) >= int64_t(1))
    {
        state.data += (1 - state.consumed);
        bool21_0(datastart, unsigned(state.data - datastart), state.consumed);
        state.consumed = 0;
        state.node = NodeT::Loop20_0;
    } else {
        state.data = state.end;
        bool21_0(datastart, unsigned(state.data - datastart), state.consumed);
        state.consumed += unsigned(state.data - datastart);
    }
    return true;
}

void httpResp::reset()
{
    httpRespResult::chunklen = 0;
    httpRespResult::contentLength = 0;
    httpRespResult::encoding.clear();
    httpRespResult::isContentLen = false;
    httpRespResult::isKeepAlive = false;
    httpRespResult::transferEncoding.clear();
    httpRespResult::type.clear();
    httpResp::mstate = httpResp::StateT();
    httpResp::pstate.clear();
}

const char * httpResp::StateT::name() const
{
    switch(node)
    {
        case NodeT::Loop1_0: return "Loop1_0";
        case NodeT::Text1_0: return "Text1_0";
        case NodeT::Range1_1: return "Range1_1";
        case NodeT::Text1_2: return "Text1_2";
        case NodeT::Range1_3: return "Range1_3";
        case NodeT::Range1_4: return "Range1_4";
        case NodeT::Range1_5: return "Range1_5";
        case NodeT::Range1_6: return "Range1_6";
        case NodeT::Text1_7: return "Text1_7";
        case NodeT::Text1_8: return "Text1_8";
        case NodeT::Call1_9: return "Call1_9";
        case NodeT::Reset1_10: return "Reset1_10";
        case NodeT::Loop3_0: return "Loop3_0";
        case NodeT::Label3_0: return "Label3_0";
        case NodeT::Loop3_1: return "Loop3_1";
        case NodeT::Range4_0: return "Range4_0";
        case NodeT::Range4_1: return "Range4_1";
        case NodeT::Text4_2: return "Text4_2";
        case NodeT::Text4_3: return "Text4_3";
        case NodeT::Text5_0: return "Text5_0";
        case NodeT::Range5_1: return "Range5_1";
        case NodeT::String5_2: return "String5_2";
        case NodeT::Text5_3: return "Text5_3";
        case NodeT::Text5_4: return "Text5_4";
        case NodeT::Any6_0: return "Any6_0";
        case NodeT::Text6_0_0_0: return "Text6_0_0_0";
        case NodeT::Bang6_0: return "Bang6_0";
        case NodeT::Range6_2: return "Range6_2";
        case NodeT::Uint6_3: return "Uint6_3";
        case NodeT::Func6_4: return "Func6_4";
        case NodeT::Text6_5: return "Text6_5";
        case NodeT::Text6_6: return "Text6_6";
        case NodeT::Any7_0: return "Any7_0";
        case NodeT::Text7_0_0_0: return "Text7_0_0_0";
        case NodeT::Bang7_0: return "Bang7_0";
        case NodeT::Range7_2: return "Range7_2";
        case NodeT::String7_3: return "String7_3";
        case NodeT::Func7_4: return "Func7_4";
        case NodeT::Text7_5: return "Text7_5";
        case NodeT::Text7_6: return "Text7_6";
        case NodeT::Any8_0: return "Any8_0";
        case NodeT::Text8_0_0_0: return "Text8_0_0_0";
        case NodeT::Bang8_0: return "Bang8_0";
        case NodeT::Range8_2: return "Range8_2";
        case NodeT::String8_3: return "String8_3";
        case NodeT::Func8_4: return "Func8_4";
        case NodeT::Text8_5: return "Text8_5";
        case NodeT::Text8_6: return "Text8_6";
        case NodeT::Any9_0: return "Any9_0";
        case NodeT::Text9_0_0_0: return "Text9_0_0_0";
        case NodeT::Bang9_0: return "Bang9_0";
        case NodeT::Range9_2: return "Range9_2";
        case NodeT::Text9_3: return "Text9_3";
        case NodeT::Func9_4: return "Func9_4";
        case NodeT::Text9_5: return "Text9_5";
        case NodeT::Text9_6: return "Text9_6";
        case NodeT::Text10_0: return "Text10_0";
        case NodeT::Text10_1: return "Text10_1";
        case NodeT::Loop10_2: return "Loop10_2";
        case NodeT::If11_0: return "If11_0";
        case NodeT::Data11_1: return "Data11_1";
        case NodeT::Ret11_2: return "Ret11_2";
        case NodeT::If12_0: return "If12_0";
        case NodeT::Loop12_1: return "Loop12_1";
        case NodeT::Hex13_0: return "Hex13_0";
        case NodeT::Range13_1: return "Range13_1";
        case NodeT::Text13_2: return "Text13_2";
        case NodeT::Text13_3: return "Text13_3";
        case NodeT::Cases13_4: return "Cases13_4";
        case NodeT::If14_0: return "If14_0";
        case NodeT::Text14_1: return "Text14_1";
        case NodeT::Text14_2: return "Text14_2";
        case NodeT::Ret14_3: return "Ret14_3";
        case NodeT::Data15_0: return "Data15_0";
        case NodeT::Text15_1: return "Text15_1";
        case NodeT::Text15_2: return "Text15_2";
        case NodeT::If16_0: return "If16_0";
        case NodeT::Data16_1: return "Data16_1";
        case NodeT::Ret17_0: return "Ret17_0";
        case NodeT::Range18_0: return "Range18_0";
        case NodeT::Text18_1: return "Text18_1";
        case NodeT::Text18_2: return "Text18_2";
        case NodeT::Loop20_0: return "Loop20_0";
        case NodeT::Bool20_0: return "Bool20_0";
        case NodeT::Bool21_0: return "Bool21_0";
        case NodeT::NoState: return "NoState";
        default: return "unknown";
    };
}

