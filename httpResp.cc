// ==============================================================
// Date: 2025-11-11 05:24:04 GMT
// Generated using vProto(2025.11.11)        https://www.cgen.dev
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
            case node_t::TEXT_1_0: if (!text_1_0(state, false) || state.node != node_t::RANGE_1_1) break; [[fallthrough]];
            case node_t::RANGE_1_1: if (!range_1_1(state) || state.node != node_t::TEXT_1_2) break; [[fallthrough]];
            case node_t::TEXT_1_2: if (!text_1_2(state) || state.node != node_t::RANGE_1_3) break; [[fallthrough]];
            case node_t::RANGE_1_3: if (!range_1_3(state) || state.node != node_t::RANGE_1_4) break; [[fallthrough]];
            case node_t::RANGE_1_4: if (!range_1_4(state) || state.node != node_t::RANGE_1_5) break; [[fallthrough]];
            case node_t::RANGE_1_5: if (!range_1_5(state) || state.node != node_t::RANGE_1_6) break; [[fallthrough]];
            case node_t::RANGE_1_6: if (!range_1_6(state) || state.node != node_t::TEXT_1_7) break; [[fallthrough]];
            case node_t::TEXT_1_7: if (!text_1_7(state) || state.node != node_t::TEXT_1_8) break; [[fallthrough]];
            case node_t::TEXT_1_8: if (!text_1_8(state) || state.node != node_t::CALL_1_9) break; [[fallthrough]];
            case node_t::CALL_1_9: if (!call_1_9(state) || state.node != node_t::RESET_1_10) break; [[fallthrough]];
            case node_t::RESET_1_10: reset_1_10(state); break;
            case node_t::LOOP_3_0: loop_3_0(state); break;
            case node_t::LABEL_3_0: if (!label_3_0(state) || state.node != node_t::LOOP_3_1) break; [[fallthrough]];
            case node_t::LOOP_3_1: loop_3_1(state); break;
            case node_t::RANGE_4_0: if (!range_4_0(state) || state.node != node_t::RANGE_4_1) break; [[fallthrough]];
            case node_t::RANGE_4_1: if (!range_4_1(state) || state.node != node_t::TEXT_4_2) break; [[fallthrough]];
            case node_t::TEXT_4_2: if (!text_4_2(state) || state.node != node_t::TEXT_4_3) break; [[fallthrough]];
            case node_t::TEXT_4_3: text_4_3(state); break;
            case node_t::TEXT_5_0: if (!text_5_0(state, false) || state.node != node_t::RANGE_5_1) break; [[fallthrough]];
            case node_t::RANGE_5_1: if (!range_5_1(state) || state.node != node_t::STRING_5_2) break; [[fallthrough]];
            case node_t::STRING_5_2: if (!string_5_2(state) || state.node != node_t::TEXT_5_3) break; [[fallthrough]];
            case node_t::TEXT_5_3: if (!text_5_3(state) || state.node != node_t::TEXT_5_4) break; [[fallthrough]];
            case node_t::TEXT_5_4: text_5_4(state); break;
            case node_t::ANY_6_0: any_6_0(state); break;
            case node_t::TEXT_6_0_0_0: if (!text_6_0_0_0(state) || state.node != node_t::BANG_6_0) break; [[fallthrough]];
            case node_t::BANG_6_0: if (!bang_6_0(state) || state.node != node_t::RANGE_6_2) break; [[fallthrough]];
            case node_t::RANGE_6_2: if (!range_6_2(state) || state.node != node_t::UINT_6_3) break; [[fallthrough]];
            case node_t::UINT_6_3: if (!uint_6_3(state) || state.node != node_t::FUNC_6_4) break; [[fallthrough]];
            case node_t::FUNC_6_4: if (!func_6_4(state) || state.node != node_t::TEXT_6_5) break; [[fallthrough]];
            case node_t::TEXT_6_5: if (!text_6_5(state) || state.node != node_t::TEXT_6_6) break; [[fallthrough]];
            case node_t::TEXT_6_6: text_6_6(state); break;
            case node_t::ANY_7_0: any_7_0(state); break;
            case node_t::TEXT_7_0_0_0: if (!text_7_0_0_0(state) || state.node != node_t::BANG_7_0) break; [[fallthrough]];
            case node_t::BANG_7_0: if (!bang_7_0(state) || state.node != node_t::RANGE_7_2) break; [[fallthrough]];
            case node_t::RANGE_7_2: if (!range_7_2(state) || state.node != node_t::STRING_7_3) break; [[fallthrough]];
            case node_t::STRING_7_3: if (!string_7_3(state) || state.node != node_t::FUNC_7_4) break; [[fallthrough]];
            case node_t::FUNC_7_4: if (!func_7_4(state) || state.node != node_t::TEXT_7_5) break; [[fallthrough]];
            case node_t::TEXT_7_5: if (!text_7_5(state) || state.node != node_t::TEXT_7_6) break; [[fallthrough]];
            case node_t::TEXT_7_6: text_7_6(state); break;
            case node_t::ANY_8_0: any_8_0(state); break;
            case node_t::TEXT_8_0_0_0: if (!text_8_0_0_0(state) || state.node != node_t::BANG_8_0) break; [[fallthrough]];
            case node_t::BANG_8_0: if (!bang_8_0(state) || state.node != node_t::RANGE_8_2) break; [[fallthrough]];
            case node_t::RANGE_8_2: if (!range_8_2(state) || state.node != node_t::STRING_8_3) break; [[fallthrough]];
            case node_t::STRING_8_3: if (!string_8_3(state) || state.node != node_t::FUNC_8_4) break; [[fallthrough]];
            case node_t::FUNC_8_4: if (!func_8_4(state) || state.node != node_t::TEXT_8_5) break; [[fallthrough]];
            case node_t::TEXT_8_5: if (!text_8_5(state) || state.node != node_t::TEXT_8_6) break; [[fallthrough]];
            case node_t::TEXT_8_6: text_8_6(state); break;
            case node_t::ANY_9_0: any_9_0(state); break;
            case node_t::TEXT_9_0_0_0: if (!text_9_0_0_0(state) || state.node != node_t::BANG_9_0) break; [[fallthrough]];
            case node_t::BANG_9_0: if (!bang_9_0(state) || state.node != node_t::RANGE_9_2) break; [[fallthrough]];
            case node_t::RANGE_9_2: if (!range_9_2(state) || state.node != node_t::TEXT_9_3) break; [[fallthrough]];
            case node_t::TEXT_9_3: if (!text_9_3(state) || state.node != node_t::FUNC_9_4) break; [[fallthrough]];
            case node_t::FUNC_9_4: if (!func_9_4(state) || state.node != node_t::TEXT_9_5) break; [[fallthrough]];
            case node_t::TEXT_9_5: if (!text_9_5(state) || state.node != node_t::TEXT_9_6) break; [[fallthrough]];
            case node_t::TEXT_9_6: text_9_6(state); break;
            case node_t::TEXT_10_0: if (!text_10_0(state) || state.node != node_t::TEXT_10_1) break; [[fallthrough]];
            case node_t::TEXT_10_1: if (!text_10_1(state) || state.node != node_t::LOOP_10_2) break; [[fallthrough]];
            case node_t::LOOP_10_2: loop_10_2(state); break;
            case node_t::IF_11_0: if (!if_11_0(state) || state.node != node_t::DATA_11_1) break; [[fallthrough]];
            case node_t::DATA_11_1: if (!data_11_1(state) || state.node != node_t::RET_11_2) break; [[fallthrough]];
            case node_t::RET_11_2: ret_11_2(state); break;
            case node_t::IF_12_0: if (!if_12_0(state) || state.node != node_t::LOOP_12_1) break; [[fallthrough]];
            case node_t::LOOP_12_1: loop_12_1(state); break;
            case node_t::HEX_13_0: if (!hex_13_0(state) || state.node != node_t::RANGE_13_1) break; [[fallthrough]];
            case node_t::RANGE_13_1: if (!range_13_1(state) || state.node != node_t::TEXT_13_2) break; [[fallthrough]];
            case node_t::TEXT_13_2: if (!text_13_2(state) || state.node != node_t::TEXT_13_3) break; [[fallthrough]];
            case node_t::TEXT_13_3: if (!text_13_3(state) || state.node != node_t::CASES_13_4) break; [[fallthrough]];
            case node_t::CASES_13_4: cases_13_4(state); break;
            case node_t::IF_14_0: if (!if_14_0(state) || state.node != node_t::TEXT_14_1) break; [[fallthrough]];
            case node_t::TEXT_14_1: if (!text_14_1(state) || state.node != node_t::TEXT_14_2) break; [[fallthrough]];
            case node_t::TEXT_14_2: if (!text_14_2(state) || state.node != node_t::RET_14_3) break; [[fallthrough]];
            case node_t::RET_14_3: ret_14_3(state); break;
            case node_t::DATA_15_0: if (!data_15_0(state) || state.node != node_t::TEXT_15_1) break; [[fallthrough]];
            case node_t::TEXT_15_1: if (!text_15_1(state) || state.node != node_t::TEXT_15_2) break; [[fallthrough]];
            case node_t::TEXT_15_2: text_15_2(state); break;
            case node_t::IF_16_0: if (!if_16_0(state) || state.node != node_t::DATA_16_1) break; [[fallthrough]];
            case node_t::DATA_16_1: data_16_1(state); break;
            case node_t::RET_17_0: ret_17_0(state); break;
            case node_t::RANGE_18_0: if (!range_18_0(state) || state.node != node_t::TEXT_18_1) break; [[fallthrough]];
            case node_t::TEXT_18_1: if (!text_18_1(state) || state.node != node_t::TEXT_18_2) break; [[fallthrough]];
            case node_t::TEXT_18_2: text_18_2(state); break;
            case node_t::LOOP_20_0: loop_20_0(state); break;
            case node_t::BOOL_20_0: bool_20_0(state); break;
            case node_t::BOOL_21_0: bool_21_0(state); break;
            case node_t::NO_STATE:
            default: return;
        }; // switch
        if (d == state.data && n == state.node) [[unlikely]]
            break;
    }
}

bool httpResp::parse(const char * data, unsigned len)
{
    mainState.data = data;
    mainState.end = &data[len];
    for(auto & p : prlState)
    {
        p.data = data;
        p.end = &data[len];
    }
    for(bool repeatParse = true; repeatParse; )
    {
        repeatParse = false;
        unsigned oNum = 0;;
        for(unsigned i = 0; i < prlState.size(); i++)
        {
            if (prlState[i].remainDataLen())
            {
                state_t state = prlState[i];
                parse(state);
                if (state.node == node_t::NO_STATE)
                    continue;
                repeatParse = true;
                prlState[oNum] = state;
            }
            else if (i != oNum)
                prlState[oNum] = prlState[i];
            oNum++;
        }
        prlState.resize(oNum);
        parse(mainState);
        if (mainState.node != node_t::NO_STATE && mainState.remainDataLen())
            repeatParse = true;
    }
    return mainState.node != node_t::NO_STATE || !prlState.empty();
}

inline bool httpResp::loop_1_0(state_t & state) const
{
    return text_1_0(state, false);
}

inline bool httpResp::text_1_0(state_t & state, bool isCaseCall) const
{
    const static std::array<uint8_t, 5> text = {0x48, 0x54, 0x54, 0x50, 0x2f}; // http/
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            bool ret = isCaseCall && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::RANGE_1_1;
            return true;
        }
    }
    state.node = node_t::TEXT_1_0;
    return true;
}

inline bool httpResp::range_1_1(state_t & state) const
{
    const static std::array<bool, 256> exitSym = {
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
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::TEXT_1_2;
            return true;
        } else {
            state.node = node_t::NO_STATE;
            return false;
        }
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_1_1;
    return true;
}

inline bool httpResp::text_1_2(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x2E) != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            return false;
        } else {
            state.data++;
            state.node = node_t::RANGE_1_3;
            return true;
        }
    }
    state.node = node_t::TEXT_1_2;
    return true;
}

inline bool httpResp::range_1_3(state_t & state) const
{
    const static std::array<bool, 256> exitSym = {
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
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::RANGE_1_4;
            return true;
        } else {
            state.node = node_t::NO_STATE;
            return false;
        }
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_1_3;
    return true;
}

inline bool httpResp::range_1_4(state_t & state) const
{
    const static std::array<bool, 256> exitSym = {
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
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::RANGE_1_5;
            return true;
        } else {
            state.node = node_t::NO_STATE;
            return false;
        }
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_1_4;
    return true;
}

inline bool httpResp::range_1_5(state_t & state) const
{
    const static std::array<bool, 256> exitSym = {
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
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::RANGE_1_6;
            return true;
        } else {
            state.node = node_t::NO_STATE;
            return false;
        }
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_1_5;
    return true;
}

inline bool httpResp::range_1_6(state_t & state) const
{
    const static std::array<bool, 256> exitSym = {
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
    while(state.data < state.end) [[likely]]
    {
        if(&state.data[16] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        state.consumed = 0;
        state.node = node_t::TEXT_1_7;
        return true;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_1_6;
    return true;
}

inline bool httpResp::text_1_7(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_1_8;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_1_8;
            return true;
        }
    }
    state.node = node_t::TEXT_1_7;
    return true;
}

inline bool httpResp::text_1_8(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            return false;
        } else {
            state.data++;
            state.node = node_t::CALL_1_9;
            return true;
        }
    }
    state.node = node_t::TEXT_1_8;
    return true;
}

inline bool httpResp::call_1_9(state_t & state) const
{
    state.node = node_t::LABEL_3_0;
    if (state.retStackCount < state.retStack.size())
        state.retStack[state.retStackCount++] = node_t::RESET_1_10;
    else
    {
        for(unsigned i = 1; i < state.retStack.size(); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[state.retStack.size() - 1] = node_t::RESET_1_10;
    }
    return true;
}

inline bool httpResp::reset_1_10(state_t & state)
{
    const char * d = state.data;
    const char * e = state.end;
    if (&mainState != &state)
        state.node = node_t::NO_STATE;
    httpResp::reset();
    mainState.data = d;
    mainState.end = e;
    return true;
}

inline bool httpResp::loop_3_0(state_t & state) const
{
    return label_3_0(state);
}

inline bool httpResp::label_3_0(state_t & state) const
{
    state.node = node_t::LOOP_3_1;
    return true;
}

inline bool httpResp::loop_3_1(state_t & state)
{
    if (state.data == state.end)
        return true;
    state_t startState = state;
    if (range_4_0(state)) // case_1
        return true;
    state = startState;
    if (text_5_0(state, true)) // case_2
        return true;
    state = startState;
    if (any_6_0(state) && state.node == node_t::BANG_6_0 && bang_6_0(state) && state.node == node_t::RANGE_6_2) // case_3
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (any_7_0(state) && state.node == node_t::BANG_7_0 && bang_7_0(state) && state.node == node_t::RANGE_7_2) // case_4
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (any_8_0(state) && state.node == node_t::BANG_8_0 && bang_8_0(state) && state.node == node_t::RANGE_8_2) // case_5
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (any_9_0(state) && state.node == node_t::BANG_9_0 && bang_9_0(state) && state.node == node_t::RANGE_9_2) // case_6
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_10_0(state)) // case_7
        return true;
    state = startState;
    state.node = node_t::RANGE_18_0;
    return true;
}

inline bool httpResp::range_4_0(state_t & state) const
{
    const static std::array<bool, 256> exitSym = {
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
    while(state.data < state.end) [[likely]]
    {
        if(&state.data[16] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::RANGE_4_1;
            return true;
        } else {
            state.node = node_t::RANGE_18_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_4_0;
    return true;
}

inline bool httpResp::range_4_1(state_t & state) const
{
    const static std::array<bool, 256> exitSym = {
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
    while(state.data < state.end) [[likely]]
    {
        if(&state.data[16] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        state.consumed = 0;
        state.node = node_t::TEXT_4_2;
        return true;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_4_1;
    return true;
}

inline bool httpResp::text_4_2(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_4_3;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_4_3;
            return true;
        }
    }
    state.node = node_t::TEXT_4_2;
    return true;
}

inline bool httpResp::text_4_3(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_18_0;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_3_1;
            return true;
        }
    }
    state.node = node_t::TEXT_4_3;
    return true;
}

inline bool httpResp::text_5_0(state_t & state, bool isCaseCall) const
{
    const static std::array<uint8_t, 18> text = {0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, 0x65, 0x72, 0x2d, 0x65, 0x6e, 0x63, 0x6f, 0x64, 0x69, 0x6e, 0x67, 0x3a}; // transfer-encoding:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::RANGE_18_0;
            bool ret = isCaseCall && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::RANGE_5_1;
            return true;
        }
    }
    state.node = node_t::TEXT_5_0;
    return true;
}

inline bool httpResp::range_5_1(state_t & state) const
{
    const static std::array<bool, 256> exitSym = {
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
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::STRING_5_2;
            return true;
        } else {
            state.node = node_t::RANGE_18_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_5_1;
    return true;
}

void httpResp::_string_5_2(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        httpRespResult::transferEncoding.clear();
    if ((httpRespResult::transferEncoding.length() + len) > 256)
        len = 256 - httpRespResult::transferEncoding.length();
    httpRespResult::transferEncoding.append(data, len);
}

inline bool httpResp::string_5_2(state_t & state)
{
    const static std::array<bool, 256> exitSym = {
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
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        _string_5_2(beginData, unsigned(state.data - beginData), state.consumed);
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::TEXT_5_3;
            return true;
        } else {
            state.node = node_t::RANGE_18_0;
            return false;
        }
    }
    if (beginData < state.data)
        _string_5_2(beginData, unsigned(state.data - beginData), state.consumed);
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::STRING_5_2;
    return true;
}

inline bool httpResp::text_5_3(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_5_4;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_5_4;
            return true;
        }
    }
    state.node = node_t::TEXT_5_3;
    return true;
}

inline bool httpResp::text_5_4(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_18_0;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_3_1;
            return true;
        }
    }
    state.node = node_t::TEXT_5_4;
    return true;
}

inline bool httpResp::any_6_0(state_t & state)
{
    if (state.data == state.end)
        return true;
    state_t startState = state;
    if (text_6_0_0_0(state) && state.node == node_t::BANG_6_0) // case_1
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

inline bool httpResp::text_6_0_0_0(state_t & state) const
{
    const static std::array<uint8_t, 15> text = {0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x3a}; // content-length:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::NO_STATE;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::BANG_6_0;
            return true;
        }
    }
    state.node = node_t::TEXT_6_0_0_0;
    return true;
}

inline bool httpResp::bang_6_0(state_t & state)
{
    state.node = node_t::RANGE_6_2;
    if (&mainState != &state)
    {
        mainState = state;
        state.node = node_t::NO_STATE;
    }
    prlState.clear();
    return true;
}

inline bool httpResp::range_6_2(state_t & state) const
{
    const static std::array<bool, 256> exitSym = {
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
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::UINT_6_3;
            return true;
        } else {
            state.node = node_t::RANGE_18_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_6_2;
    return true;
}

void httpResp::_uint_6_3(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        httpRespResult::contentLength = 0;
    for(const char * end = &data[len]; data < end; data++)
        httpRespResult::contentLength = httpRespResult::contentLength*10 + *data - '0';
}

inline bool httpResp::uint_6_3(state_t & state)
{
    const static std::array<bool, 256> exitSym = {
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
    while(state.data < state.end) [[likely]]
    {
        if(&state.data[16] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        _uint_6_3(beginData, unsigned(state.data - beginData), state.consumed);
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::FUNC_6_4;
            return true;
        } else {
            state.node = node_t::RANGE_18_0;
            return false;
        }
    }
    if (beginData < state.data)
        _uint_6_3(beginData, unsigned(state.data - beginData), state.consumed);
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::UINT_6_3;
    return true;
}

inline bool httpResp::_func_6_4()
{
     isContentLen = true; 
    return true;
}
inline bool httpResp::func_6_4(state_t & state)
{
    if (_func_6_4())
    {
        state.node = node_t::TEXT_6_5;
        return true;
    }
    state.node = node_t::RANGE_18_0;
    return false;
}

inline bool httpResp::text_6_5(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_6_6;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_6_6;
            return true;
        }
    }
    state.node = node_t::TEXT_6_5;
    return true;
}

inline bool httpResp::text_6_6(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_18_0;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_3_1;
            return true;
        }
    }
    state.node = node_t::TEXT_6_6;
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

inline bool httpResp::text_7_0_0_0(state_t & state) const
{
    const static std::array<uint8_t, 13> text = {0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a}; // content-type:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::NO_STATE;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
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
    {
        mainState = state;
        state.node = node_t::NO_STATE;
    }
    prlState.clear();
    return true;
}

inline bool httpResp::range_7_2(state_t & state) const
{
    const static std::array<bool, 256> exitSym = {
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
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::STRING_7_3;
            return true;
        } else {
            state.node = node_t::RANGE_18_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_7_2;
    return true;
}

void httpResp::_string_7_3(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        httpRespResult::type.clear();
    if ((httpRespResult::type.length() + len) > 256)
        len = 256 - httpRespResult::type.length();
    httpRespResult::type.append(data, len);
}

inline bool httpResp::string_7_3(state_t & state)
{
    const static std::array<bool, 256> exitSym = {
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
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        _string_7_3(beginData, unsigned(state.data - beginData), state.consumed);
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::FUNC_7_4;
            return true;
        } else {
            state.node = node_t::RANGE_18_0;
            return false;
        }
    }
    if (beginData < state.data)
        _string_7_3(beginData, unsigned(state.data - beginData), state.consumed);
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::STRING_7_3;
    return true;
}

inline bool httpResp::_func_7_4()
{
     printf("Type: %s\n", type.c_str()); 
    return true;
}
inline bool httpResp::func_7_4(state_t & state)
{
    if (_func_7_4())
    {
        state.node = node_t::TEXT_7_5;
        return true;
    }
    state.node = node_t::RANGE_18_0;
    return false;
}

inline bool httpResp::text_7_5(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_7_6;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_7_6;
            return true;
        }
    }
    state.node = node_t::TEXT_7_5;
    return true;
}

inline bool httpResp::text_7_6(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_18_0;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_3_1;
            return true;
        }
    }
    state.node = node_t::TEXT_7_6;
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

inline bool httpResp::text_8_0_0_0(state_t & state) const
{
    const static std::array<uint8_t, 17> text = {0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x65, 0x6e, 0x63, 0x6f, 0x64, 0x69, 0x6e, 0x67, 0x3a}; // content-encoding:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::NO_STATE;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
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
    {
        mainState = state;
        state.node = node_t::NO_STATE;
    }
    prlState.clear();
    return true;
}

inline bool httpResp::range_8_2(state_t & state) const
{
    const static std::array<bool, 256> exitSym = {
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
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::STRING_8_3;
            return true;
        } else {
            state.node = node_t::RANGE_18_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_8_2;
    return true;
}

void httpResp::_string_8_3(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        httpRespResult::encoding.clear();
    if ((httpRespResult::encoding.length() + len) > 256)
        len = 256 - httpRespResult::encoding.length();
    httpRespResult::encoding.append(data, len);
}

inline bool httpResp::string_8_3(state_t & state)
{
    const static std::array<bool, 256> exitSym = {
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
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        _string_8_3(beginData, unsigned(state.data - beginData), state.consumed);
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::FUNC_8_4;
            return true;
        } else {
            state.node = node_t::RANGE_18_0;
            return false;
        }
    }
    if (beginData < state.data)
        _string_8_3(beginData, unsigned(state.data - beginData), state.consumed);
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::STRING_8_3;
    return true;
}

inline bool httpResp::_func_8_4()
{
     printf("Encoding: %s\n", encoding.c_str()); 
    return true;
}
inline bool httpResp::func_8_4(state_t & state)
{
    if (_func_8_4())
    {
        state.node = node_t::TEXT_8_5;
        return true;
    }
    state.node = node_t::RANGE_18_0;
    return false;
}

inline bool httpResp::text_8_5(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_8_6;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_8_6;
            return true;
        }
    }
    state.node = node_t::TEXT_8_5;
    return true;
}

inline bool httpResp::text_8_6(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_18_0;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_3_1;
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

inline bool httpResp::text_9_0_0_0(state_t & state) const
{
    const static std::array<uint8_t, 11> text = {0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x3a}; // connection:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::NO_STATE;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
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
    {
        mainState = state;
        state.node = node_t::NO_STATE;
    }
    prlState.clear();
    return true;
}

inline bool httpResp::range_9_2(state_t & state) const
{
    const static std::array<bool, 256> exitSym = {
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
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::TEXT_9_3;
            return true;
        } else {
            state.node = node_t::RANGE_18_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_9_2;
    return true;
}

inline bool httpResp::text_9_3(state_t & state) const
{
    const static std::array<uint8_t, 10> text = {0x6b, 0x65, 0x65, 0x70, 0x2d, 0x61, 0x6c, 0x69, 0x76, 0x65}; // keep-alive
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::RANGE_18_0;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::FUNC_9_4;
            return true;
        }
    }
    state.node = node_t::TEXT_9_3;
    return true;
}

inline bool httpResp::_func_9_4()
{
     isKeepAlive = true; 
    return true;
}
inline bool httpResp::func_9_4(state_t & state)
{
    if (_func_9_4())
    {
        state.node = node_t::TEXT_9_5;
        return true;
    }
    state.node = node_t::RANGE_18_0;
    return false;
}

inline bool httpResp::text_9_5(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_9_6;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_9_6;
            return true;
        }
    }
    state.node = node_t::TEXT_9_5;
    return true;
}

inline bool httpResp::text_9_6(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_18_0;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_3_1;
            return true;
        }
    }
    state.node = node_t::TEXT_9_6;
    return true;
}

inline bool httpResp::text_10_0(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_10_1;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_10_1;
            return true;
        }
    }
    state.node = node_t::TEXT_10_0;
    return true;
}

inline bool httpResp::text_10_1(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_18_0;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_10_2;
            return true;
        }
    }
    state.node = node_t::TEXT_10_1;
    return true;
}

inline bool httpResp::loop_10_2(state_t & state) const
{
    if (if_11_0(state)) // case_1
        return true;
    if (if_12_0(state)) // case_2
        return true;
    if (if_16_0(state)) // case_3
        return true;
    if (ret_17_0(state)) // case_4
        return true;
    state.node = node_t::NO_STATE;
    return true;
}

inline bool httpResp::if_11_0(state_t & state) const
{
    if (isContentLen)
    {
        state.node = node_t::DATA_11_1;
        return true;
    }
    state.node = node_t::NO_STATE;
    return false;
}

inline bool httpResp::data_11_1(state_t & state)
{
    const char * beginData = state.data;
    if (!state.consumed)
        state.node = node_t::DATA_11_1;
    if (state.data == state.end)
        return true;
    else if (int64_t(state.consumed + state.remainDataLen()) >= int64_t(contentLength))
    {
        state.data += (contentLength - state.consumed);
        httpRespResult::resp(beginData, unsigned(state.data - beginData), !state.consumed, true);
        state.consumed = 0;
        state.node = node_t::RET_11_2;
    } else {
        state.data = state.end;
        httpRespResult::resp(beginData, unsigned(state.data - beginData), !state.consumed, false);
        state.consumed += unsigned(state.data - beginData);
    }
    return true;
}

inline bool httpResp::ret_11_2(state_t & state) const
{
    state.node = state.retStackCount ? state.retStack[--state.retStackCount] : node_t::NO_STATE;
    return state.node != node_t::NO_STATE;
}

inline bool httpResp::if_12_0(state_t & state) const
{
    if (transferEncoding.find("chunked") != std::string::npos)
    {
        state.node = node_t::LOOP_12_1;
        return true;
    }
    state.node = node_t::NO_STATE;
    return false;
}

inline bool httpResp::loop_12_1(state_t & state)
{
    return hex_13_0(state);
}

void httpResp::_hex_13_0(const char * data, unsigned len, uint64_t consumed)
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

inline bool httpResp::hex_13_0(state_t & state)
{
    const static std::array<bool, 256> exitSym = {
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
    const char * beginData = state.data;
    while(state.data < state.end) [[likely]]
    {
        if(&state.data[16] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        _hex_13_0(beginData, unsigned(state.data - beginData), state.consumed);
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::RANGE_13_1;
            return true;
        } else {
            state.node = node_t::NO_STATE;
            return false;
        }
    }
    if (beginData < state.data)
        _hex_13_0(beginData, unsigned(state.data - beginData), state.consumed);
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::HEX_13_0;
    return true;
}

inline bool httpResp::range_13_1(state_t & state) const
{
    const static std::array<bool, 256> exitSym = {
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
    while(state.data < state.end) [[likely]]
    {
        if(&state.data[16] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        state.consumed = 0;
        state.node = node_t::TEXT_13_2;
        return true;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_13_1;
    return true;
}

inline bool httpResp::text_13_2(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_13_3;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_13_3;
            return true;
        }
    }
    state.node = node_t::TEXT_13_2;
    return true;
}

inline bool httpResp::text_13_3(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            return false;
        } else {
            state.data++;
            state.node = node_t::CASES_13_4;
            return true;
        }
    }
    state.node = node_t::TEXT_13_3;
    return true;
}

inline bool httpResp::cases_13_4(state_t & state)
{
    if (state.data == state.end)
        return true;
    if (if_14_0(state)) // case_1
        return true;
    if (data_15_0(state)) // case_2
        return true;
    state.node = node_t::NO_STATE;
    return true;
}

inline bool httpResp::if_14_0(state_t & state) const
{
    if (!chunklen)
    {
        state.node = node_t::TEXT_14_1;
        return true;
    }
    state.node = node_t::NO_STATE;
    return false;
}

inline bool httpResp::text_14_1(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_14_2;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_14_2;
            return true;
        }
    }
    state.node = node_t::TEXT_14_1;
    return true;
}

inline bool httpResp::text_14_2(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            return false;
        } else {
            state.data++;
            state.node = node_t::RET_14_3;
            return true;
        }
    }
    state.node = node_t::TEXT_14_2;
    return true;
}

inline bool httpResp::ret_14_3(state_t & state) const
{
    state.node = state.retStackCount ? state.retStack[--state.retStackCount] : node_t::NO_STATE;
    return state.node != node_t::NO_STATE;
}

inline bool httpResp::data_15_0(state_t & state)
{
    const char * beginData = state.data;
    if (!state.consumed)
        state.node = node_t::DATA_15_0;
    if (state.data == state.end)
        return true;
    else if (int64_t(state.consumed + state.remainDataLen()) >= int64_t(chunklen))
    {
        state.data += (chunklen - state.consumed);
        httpRespResult::resp(beginData, unsigned(state.data - beginData), !state.consumed, true);
        state.consumed = 0;
        state.node = node_t::TEXT_15_1;
    } else {
        state.data = state.end;
        httpRespResult::resp(beginData, unsigned(state.data - beginData), !state.consumed, false);
        state.consumed += unsigned(state.data - beginData);
    }
    return true;
}

inline bool httpResp::text_15_1(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_15_2;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_15_2;
            return true;
        }
    }
    state.node = node_t::TEXT_15_1;
    return true;
}

inline bool httpResp::text_15_2(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_12_1;
            return true;
        }
    }
    state.node = node_t::TEXT_15_2;
    return true;
}

inline bool httpResp::if_16_0(state_t & state) const
{
    if (!isKeepAlive)
    {
        state.node = node_t::DATA_16_1;
        return true;
    }
    state.node = node_t::NO_STATE;
    return false;
}

inline bool httpResp::data_16_1(state_t & state)
{
    const char * beginData = state.data;
    if (!state.consumed)
        state.node = node_t::DATA_16_1;
    if (state.data == state.end)
        return true;
    state.data = state.end;
    httpRespResult::resp(beginData, unsigned(state.data - beginData), !state.consumed, false);
    state.consumed += unsigned(state.data - beginData);
    return true;
}

inline bool httpResp::ret_17_0(state_t & state) const
{
    state.node = state.retStackCount ? state.retStack[--state.retStackCount] : node_t::NO_STATE;
    return state.node != node_t::NO_STATE;
}

inline bool httpResp::range_18_0(state_t & state) const
{
    const static std::array<bool, 256> exitSym = {
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
    while(state.data < state.end) [[likely]]
    {
        if(&state.data[16] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        state.consumed = 0;
        state.node = node_t::TEXT_18_1;
        return true;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_18_0;
    return true;
}

inline bool httpResp::text_18_1(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_18_2;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_18_2;
            return true;
        }
    }
    state.node = node_t::TEXT_18_1;
    return true;
}

inline bool httpResp::text_18_2(state_t & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_3_1;
            return true;
        }
    }
    state.node = node_t::TEXT_18_2;
    return true;
}

inline bool httpResp::loop_20_0(state_t & state)
{
    if (state.data == state.end)
        return true;
    if (bool_20_0(state)) // case_1
        return true;
    if (bool_21_0(state)) // case_2
        return true;
    state.node = node_t::NO_STATE;
    return true;
}

void httpResp::_bool_20_0(const char * data, unsigned len, uint64_t consumed)
{
    if (len)
        httpRespResult::isContentLen = (*data != 0);
    else if (!consumed)
        httpRespResult::isContentLen = false;
}

inline bool httpResp::bool_20_0(state_t & state)
{
    const char * beginData = state.data;
    if (!state.consumed)
        state.node = node_t::BOOL_20_0;
    if (state.data == state.end)
        return true;
    else if (int64_t(state.consumed + state.remainDataLen()) >= int64_t(1))
    {
        state.data += (1 - state.consumed);
        _bool_20_0(beginData, unsigned(state.data - beginData), state.consumed);
        state.consumed = 0;
        state.node = node_t::LOOP_20_0;
    } else {
        state.data = state.end;
        _bool_20_0(beginData, unsigned(state.data - beginData), state.consumed);
        state.consumed += unsigned(state.data - beginData);
    }
    return true;
}

void httpResp::_bool_21_0(const char * data, unsigned len, uint64_t consumed)
{
    if (len)
        httpRespResult::isKeepAlive = (*data != 0);
    else if (!consumed)
        httpRespResult::isKeepAlive = false;
}

inline bool httpResp::bool_21_0(state_t & state)
{
    const char * beginData = state.data;
    if (!state.consumed)
        state.node = node_t::BOOL_21_0;
    if (state.data == state.end)
        return true;
    else if (int64_t(state.consumed + state.remainDataLen()) >= int64_t(1))
    {
        state.data += (1 - state.consumed);
        _bool_21_0(beginData, unsigned(state.data - beginData), state.consumed);
        state.consumed = 0;
        state.node = node_t::LOOP_20_0;
    } else {
        state.data = state.end;
        _bool_21_0(beginData, unsigned(state.data - beginData), state.consumed);
        state.consumed += unsigned(state.data - beginData);
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
    httpResp::mainState = httpResp::state_t();
    httpResp::prlState.clear();
}

const char * httpResp::state_t::name() const
{
    switch(node)
    {
        case node_t::LOOP_1_0: return "LOOP_1_0";
        case node_t::TEXT_1_0: return "TEXT_1_0";
        case node_t::RANGE_1_1: return "RANGE_1_1";
        case node_t::TEXT_1_2: return "TEXT_1_2";
        case node_t::RANGE_1_3: return "RANGE_1_3";
        case node_t::RANGE_1_4: return "RANGE_1_4";
        case node_t::RANGE_1_5: return "RANGE_1_5";
        case node_t::RANGE_1_6: return "RANGE_1_6";
        case node_t::TEXT_1_7: return "TEXT_1_7";
        case node_t::TEXT_1_8: return "TEXT_1_8";
        case node_t::CALL_1_9: return "CALL_1_9";
        case node_t::RESET_1_10: return "RESET_1_10";
        case node_t::LOOP_3_0: return "LOOP_3_0";
        case node_t::LABEL_3_0: return "LABEL_3_0";
        case node_t::LOOP_3_1: return "LOOP_3_1";
        case node_t::RANGE_4_0: return "RANGE_4_0";
        case node_t::RANGE_4_1: return "RANGE_4_1";
        case node_t::TEXT_4_2: return "TEXT_4_2";
        case node_t::TEXT_4_3: return "TEXT_4_3";
        case node_t::TEXT_5_0: return "TEXT_5_0";
        case node_t::RANGE_5_1: return "RANGE_5_1";
        case node_t::STRING_5_2: return "STRING_5_2";
        case node_t::TEXT_5_3: return "TEXT_5_3";
        case node_t::TEXT_5_4: return "TEXT_5_4";
        case node_t::ANY_6_0: return "ANY_6_0";
        case node_t::TEXT_6_0_0_0: return "TEXT_6_0_0_0";
        case node_t::BANG_6_0: return "BANG_6_0";
        case node_t::RANGE_6_2: return "RANGE_6_2";
        case node_t::UINT_6_3: return "UINT_6_3";
        case node_t::FUNC_6_4: return "FUNC_6_4";
        case node_t::TEXT_6_5: return "TEXT_6_5";
        case node_t::TEXT_6_6: return "TEXT_6_6";
        case node_t::ANY_7_0: return "ANY_7_0";
        case node_t::TEXT_7_0_0_0: return "TEXT_7_0_0_0";
        case node_t::BANG_7_0: return "BANG_7_0";
        case node_t::RANGE_7_2: return "RANGE_7_2";
        case node_t::STRING_7_3: return "STRING_7_3";
        case node_t::FUNC_7_4: return "FUNC_7_4";
        case node_t::TEXT_7_5: return "TEXT_7_5";
        case node_t::TEXT_7_6: return "TEXT_7_6";
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
        case node_t::TEXT_9_3: return "TEXT_9_3";
        case node_t::FUNC_9_4: return "FUNC_9_4";
        case node_t::TEXT_9_5: return "TEXT_9_5";
        case node_t::TEXT_9_6: return "TEXT_9_6";
        case node_t::TEXT_10_0: return "TEXT_10_0";
        case node_t::TEXT_10_1: return "TEXT_10_1";
        case node_t::LOOP_10_2: return "LOOP_10_2";
        case node_t::IF_11_0: return "IF_11_0";
        case node_t::DATA_11_1: return "DATA_11_1";
        case node_t::RET_11_2: return "RET_11_2";
        case node_t::IF_12_0: return "IF_12_0";
        case node_t::LOOP_12_1: return "LOOP_12_1";
        case node_t::HEX_13_0: return "HEX_13_0";
        case node_t::RANGE_13_1: return "RANGE_13_1";
        case node_t::TEXT_13_2: return "TEXT_13_2";
        case node_t::TEXT_13_3: return "TEXT_13_3";
        case node_t::CASES_13_4: return "CASES_13_4";
        case node_t::IF_14_0: return "IF_14_0";
        case node_t::TEXT_14_1: return "TEXT_14_1";
        case node_t::TEXT_14_2: return "TEXT_14_2";
        case node_t::RET_14_3: return "RET_14_3";
        case node_t::DATA_15_0: return "DATA_15_0";
        case node_t::TEXT_15_1: return "TEXT_15_1";
        case node_t::TEXT_15_2: return "TEXT_15_2";
        case node_t::IF_16_0: return "IF_16_0";
        case node_t::DATA_16_1: return "DATA_16_1";
        case node_t::RET_17_0: return "RET_17_0";
        case node_t::RANGE_18_0: return "RANGE_18_0";
        case node_t::TEXT_18_1: return "TEXT_18_1";
        case node_t::TEXT_18_2: return "TEXT_18_2";
        case node_t::LOOP_20_0: return "LOOP_20_0";
        case node_t::BOOL_20_0: return "BOOL_20_0";
        case node_t::BOOL_21_0: return "BOOL_21_0";
        case node_t::NO_STATE: return "NO_STATE";
        default: return "unknown";
    };
}

