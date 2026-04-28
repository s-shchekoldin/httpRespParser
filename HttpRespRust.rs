// ==============================================================
// Date: 2026-04-28 17:05:32 GMT
// Generated using vProto(2026.04.28)        https://www.cgen.dev
// Author: Sergey V. Shchekoldin     Email: shchekoldin@gmail.com
// ==============================================================

// Example usage:
// let mut m = crate::HttpRespRust::HttpRespRust::<HttpRespRust::HttpRespRustExample>::new();
// m.parse(&byte_slice);
// Also, you can redefine HttpRespRustTrait implementation for interacting with the HttpRespRust module.


#[cfg(target_arch = "x86_64")]
use std::arch::x86_64::*;

#[derive(Debug, PartialEq, Eq, Copy, Clone)]
#[allow(dead_code)]
enum NodeT {
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
        Bool20_0, Bool20_1,
    Loop22_0, // line_22
    NoState
}
impl std::fmt::Display for NodeT {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "{:?}", self)
    }
}

#[derive(Debug, Copy, Clone)]
pub struct StateT {
    node: NodeT,
    left: usize,
    right: usize,
    consumed: usize,
    rcount: usize,
    rstack: [NodeT; 2],
}
impl StateT {
    pub fn new() -> Self { Self{ node: NodeT::Loop1_0, left: 0, right: 0, consumed: 0, rcount: 0, rstack: [NodeT::NoState; 2] } }
    pub fn remain(&self) -> usize { self.right - self.left }
}
impl std::fmt::Display for StateT {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "{} remain:{}({}->{}) consumed:{}", self.node, self.remain(), self.left, self.right, self.consumed)
    }
}

#[allow(unreachable_code)]
pub trait HttpRespRustTrait {
    fn new() -> Self;

    // field accessors:
    fn chunklen(&mut self) -> &mut u32;
    fn contentLength(&mut self) -> &mut u64;
    fn ctype(&mut self) -> &mut String;
    fn encoding(&mut self) -> &mut String;
    fn isContentLen(&mut self) -> &mut bool;
    fn isKeepAlive(&mut self) -> &mut bool;
    fn transferEncoding(&mut self) -> &mut String;

    // callbacks to be implemented by the user:
    fn resp(&mut self, data: &[u8], is_first: bool, is_last: bool) { println!("resp({}:{})={:X?}", is_first, is_last, data); }

    // private functions:
    fn _func6_4(&mut self) -> bool {  *self.isContentLen() = true;  return true; }
    fn _func7_4(&mut self) -> bool {  println!("CType: {}\n", self.ctype());  return true; }
    fn _func8_4(&mut self) -> bool {  println!("Encoding: {}\n", self.encoding());  return true; }
    fn _func9_4(&mut self) -> bool {  *self.isKeepAlive() = true;  return true; }
    fn _if11_0(&mut self) -> bool { *self.isContentLen() }
    fn _if12_0(&mut self) -> bool { self.transferEncoding().contains("chunked") }
    fn _if14_0(&mut self) -> bool { *self.chunklen() == 0 }
    fn _if16_0(&mut self) -> bool { *self.isKeepAlive() == false }
    fn _max_data11_1(&mut self) -> usize { (*self.contentLength()) as usize }
    fn _max_data15_0(&mut self) -> usize { (*self.chunklen()) as usize }
}

pub struct HttpRespRustExample
{
    ctype: String,
    encoding: String,
    transferEncoding: String,
    contentLength: u64,
    chunklen: u32,
    isContentLen: bool,
    isKeepAlive: bool
}
#[allow(dead_code)]
impl HttpRespRustTrait for HttpRespRustExample {
    fn new() -> Self { Self{ctype: String::new(), encoding: String::new(), transferEncoding: String::new(), contentLength: 0, chunklen: 0, isContentLen: false, isKeepAlive: false} }
    fn chunklen(&mut self) -> &mut u32 { &mut self.chunklen }
    fn contentLength(&mut self) -> &mut u64 { &mut self.contentLength }
    fn ctype(&mut self) -> &mut String { &mut self.ctype }
    fn encoding(&mut self) -> &mut String { &mut self.encoding }
    fn isContentLen(&mut self) -> &mut bool { &mut self.isContentLen }
    fn isKeepAlive(&mut self) -> &mut bool { &mut self.isKeepAlive }
    fn transferEncoding(&mut self) -> &mut String { &mut self.transferEncoding }
}

pub struct HttpRespRust <T> {
    output: T,
    vstate: Vec<StateT>
}
#[allow(dead_code)]
#[allow(unused_variables)]
impl <T: HttpRespRustTrait> HttpRespRust<T> {
    pub fn new() -> Self { Self{ output: T::new(), vstate: vec![StateT::new()] } }
    pub fn empty(&self) -> bool { self.vstate.is_empty() }
    pub fn reset(&mut self) {
        *self.output.chunklen() = 0;
        *self.output.contentLength() = 0;
        *self.output.ctype()= String::new();
        *self.output.encoding()= String::new();
        *self.output.isContentLen() = false;
        *self.output.isKeepAlive() = false;
        *self.output.transferEncoding()= String::new();
        for v in & mut self.vstate {
            v.node = NodeT::NoState;
        }
        self.vstate.push(StateT::new());
    }
    pub fn parse(&mut self, data : &[u8]) -> bool {
        for v in & mut self.vstate {
            v.left = 0;
            v.right = data.len();
        }
        let mut reparse = true;
        while reparse {
            reparse = false;
            let mut d_flow = 0;
            let mut s_flow = 0;
            while s_flow < self.vstate.len() {
                if self.vstate[s_flow].node == NodeT::NoState {
                    s_flow += 1;
                } else if self.vstate[s_flow].remain() == 0 {
                    if s_flow != d_flow {
                        self.vstate[d_flow] = self.vstate[s_flow];
                    }
                    d_flow += 1;
                    s_flow += 1;
                } else {
                    reparse = true;
                    let mut state = self.vstate[s_flow];
                    self.parse_s(&mut state, data);
                    if state.node != NodeT::NoState {
                        self.vstate[d_flow] = state;
                        d_flow += 1;
                    }
                    s_flow += 1;
                }
            } // while
            if d_flow < self.vstate.len() {
                self.vstate.resize(d_flow, StateT::new());
            }
        }
        return !self.empty();
    }
    fn parse_s(&mut self, state: &mut StateT, data: &[u8]) {
        loop {
            if cfg!(debug_assertions) {
                println!("State: {} data: [{:#04X}, {:#04X}, {:#04X}, {:#04X}, {:#04X}]", state.node,
                    if state.remain() > 0 { data[state.left+0] } else { 0 },
                    if state.remain() > 1 { data[state.left+1] } else { 0 },
                    if state.remain() > 2 { data[state.left+2] } else { 0 },
                    if state.remain() > 3 { data[state.left+3] } else { 0 },
                    if state.remain() > 4 { data[state.left+4] } else { 0 });
            }
            let n = state.node;
            let d = state.left;
            match state.node {
                NodeT::Loop1_0 => { self.loop1_0(state, data); }
                NodeT::Text1_0 => { self.text1_0(state, data, false); }
                NodeT::Range1_1 => { self.range1_1(state, data); }
                NodeT::Text1_2 => { self.text1_2(state, data); }
                NodeT::Range1_3 => { self.range1_3(state, data); }
                NodeT::Range1_4 => { self.range1_4(state, data); }
                NodeT::Range1_5 => { self.range1_5(state, data); }
                NodeT::Range1_6 => { self.range1_6(state, data); }
                NodeT::Text1_7 => { self.text1_7(state, data); }
                NodeT::Text1_8 => { self.text1_8(state, data); }
                NodeT::Call1_9 => { self.call1_9(state, data); }
                NodeT::Reset1_10 => { self.reset1_10(state, data); }
                NodeT::Loop3_0 => { self.loop3_0(state, data); }
                NodeT::Label3_0 => { self.label3_0(state, data); }
                NodeT::Loop3_1 => { self.loop3_1(state, data); }
                NodeT::Range4_0 => { self.range4_0(state, data); }
                NodeT::Range4_1 => { self.range4_1(state, data); }
                NodeT::Text4_2 => { self.text4_2(state, data); }
                NodeT::Text4_3 => { self.text4_3(state, data); }
                NodeT::Text5_0 => { self.text5_0(state, data, false); }
                NodeT::Range5_1 => { self.range5_1(state, data); }
                NodeT::String5_2 => { self.string5_2(state, data); }
                NodeT::Text5_3 => { self.text5_3(state, data); }
                NodeT::Text5_4 => { self.text5_4(state, data); }
                NodeT::Any6_0 => { self.any6_0(state, data); }
                NodeT::Text6_0_0_0 => { self.text6_0_0_0(state, data); }
                NodeT::Bang6_0 => { self.bang6_0(state, data); }
                NodeT::Range6_2 => { self.range6_2(state, data); }
                NodeT::Uint6_3 => { self.uint6_3(state, data); }
                NodeT::Func6_4 => { self.func6_4(state, data); }
                NodeT::Text6_5 => { self.text6_5(state, data); }
                NodeT::Text6_6 => { self.text6_6(state, data); }
                NodeT::Any7_0 => { self.any7_0(state, data); }
                NodeT::Text7_0_0_0 => { self.text7_0_0_0(state, data); }
                NodeT::Bang7_0 => { self.bang7_0(state, data); }
                NodeT::Range7_2 => { self.range7_2(state, data); }
                NodeT::String7_3 => { self.string7_3(state, data); }
                NodeT::Func7_4 => { self.func7_4(state, data); }
                NodeT::Text7_5 => { self.text7_5(state, data); }
                NodeT::Text7_6 => { self.text7_6(state, data); }
                NodeT::Any8_0 => { self.any8_0(state, data); }
                NodeT::Text8_0_0_0 => { self.text8_0_0_0(state, data); }
                NodeT::Bang8_0 => { self.bang8_0(state, data); }
                NodeT::Range8_2 => { self.range8_2(state, data); }
                NodeT::String8_3 => { self.string8_3(state, data); }
                NodeT::Func8_4 => { self.func8_4(state, data); }
                NodeT::Text8_5 => { self.text8_5(state, data); }
                NodeT::Text8_6 => { self.text8_6(state, data); }
                NodeT::Any9_0 => { self.any9_0(state, data); }
                NodeT::Text9_0_0_0 => { self.text9_0_0_0(state, data); }
                NodeT::Bang9_0 => { self.bang9_0(state, data); }
                NodeT::Range9_2 => { self.range9_2(state, data); }
                NodeT::Text9_3 => { self.text9_3(state, data); }
                NodeT::Func9_4 => { self.func9_4(state, data); }
                NodeT::Text9_5 => { self.text9_5(state, data); }
                NodeT::Text9_6 => { self.text9_6(state, data); }
                NodeT::Text10_0 => { self.text10_0(state, data); }
                NodeT::Text10_1 => { self.text10_1(state, data); }
                NodeT::Loop10_2 => { self.loop10_2(state, data); }
                NodeT::If11_0 => { self.if11_0(state, data); }
                NodeT::Data11_1 => { self.data11_1(state, data); }
                NodeT::Ret11_2 => { self.ret11_2(state, data); }
                NodeT::If12_0 => { self.if12_0(state, data); }
                NodeT::Loop12_1 => { self.loop12_1(state, data); }
                NodeT::Hex13_0 => { self.hex13_0(state, data); }
                NodeT::Range13_1 => { self.range13_1(state, data); }
                NodeT::Text13_2 => { self.text13_2(state, data); }
                NodeT::Text13_3 => { self.text13_3(state, data); }
                NodeT::Cases13_4 => { self.cases13_4(state, data); }
                NodeT::If14_0 => { self.if14_0(state, data); }
                NodeT::Text14_1 => { self.text14_1(state, data); }
                NodeT::Text14_2 => { self.text14_2(state, data); }
                NodeT::Ret14_3 => { self.ret14_3(state, data); }
                NodeT::Data15_0 => { self.data15_0(state, data); }
                NodeT::Text15_1 => { self.text15_1(state, data); }
                NodeT::Text15_2 => { self.text15_2(state, data); }
                NodeT::If16_0 => { self.if16_0(state, data); }
                NodeT::Data16_1 => { self.data16_1(state, data); }
                NodeT::Ret17_0 => { self.ret17_0(state, data); }
                NodeT::Range18_0 => { self.range18_0(state, data); }
                NodeT::Text18_1 => { self.text18_1(state, data); }
                NodeT::Text18_2 => { self.text18_2(state, data); }
                NodeT::Loop20_0 => { self.loop20_0(state, data); }
                NodeT::Bool20_0 => { self.bool20_0(state, data); }
                NodeT::Bool20_1 => { self.bool20_1(state, data); }
                NodeT::Loop22_0 => { self.loop22_0(state, data); }
                NodeT::NoState => { break; }
            }; // match
            if d == state.left && n == state.node {
                break;
            }
        } // loop
    }
    fn loop1_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        return self.text1_0(state, data, false);
    }
    fn text1_0(&mut self, state: &mut StateT, data: &[u8], is_branch: bool) -> bool {
        static TEXT:[u8;5] = [0x48, 0x54, 0x54, 0x50, 0x2f]; // http/
        while state.left < state.right {
            if TEXT[state.consumed] != data[state.left] {
                state.node = NodeT::NoState;
                let ret = is_branch && state.consumed != 0;
                state.consumed = 0;
                return ret;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Range1_1;
                return true;
            }
            state.left += 1;
        }
        state.node = NodeT::Text1_0;
        return true;
    }
    fn range1_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0-9]
        let datastart = state.left;
        let is_sse42 = is_x86_feature_detected!("sse4.2");
        while state.left < state.right {
            if is_sse42 && (state.left+16) <= state.right {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.left) as *const __m128i);
                    let s0 = _mm_setr_epi8(0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
                    let r = _mm_cmpestri(s0, 10, d, 16, _SIDD_UBYTE_OPS | _SIDD_LEAST_SIGNIFICANT | _SIDD_CMP_EQUAL_ANY | _SIDD_NEGATIVE_POLARITY);
                    if r < 16 {
                        state.left += r as usize;
                    } else {
                        state.left += 16;
                        continue;
                    }
                }
            }
            else if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Text1_2;
                return true;
            } else {
                state.node = NodeT::NoState;
                return false;
            }
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range1_1;
        return true;
    }
    fn text1_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x2E != data[state.left] {
                state.node = NodeT::NoState;
                return false;
            } else {
                state.left += 1;
                state.node = NodeT::Range1_3;
                return true;
            }
        }
        state.node = NodeT::Text1_2;
        return true;
    }
    fn range1_3(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0-9]
        let datastart = state.left;
        let is_sse42 = is_x86_feature_detected!("sse4.2");
        while state.left < state.right {
            if is_sse42 && (state.left+16) <= state.right {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.left) as *const __m128i);
                    let s0 = _mm_setr_epi8(0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
                    let r = _mm_cmpestri(s0, 10, d, 16, _SIDD_UBYTE_OPS | _SIDD_LEAST_SIGNIFICANT | _SIDD_CMP_EQUAL_ANY | _SIDD_NEGATIVE_POLARITY);
                    if r < 16 {
                        state.left += r as usize;
                    } else {
                        state.left += 16;
                        continue;
                    }
                }
            }
            else if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Range1_4;
                return true;
            } else {
                state.node = NodeT::NoState;
                return false;
            }
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range1_3;
        return true;
    }
    fn range1_4(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0x9][0x20]
        let datastart = state.left;
        let is_avx2 = is_x86_feature_detected!("avx2");
        let is_sse2 = is_x86_feature_detected!("sse2");
        while state.left < state.right {
            if is_avx2 && (state.left + 32) <= state.right {
                unsafe {
                    let d = _mm256_lddqu_si256(data.as_ptr().add(state.left) as *const __m256i);
                    let mut m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
                    m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
                    let r: u32 = !_mm256_movemask_epi8(m) as u32;
                    if r > 0 {
                        state.left += r.trailing_zeros() as usize;
                    } else {
                        state.left += 32;
                        continue;
                    }
                }
            }
            else if is_sse2 && (state.left + 16) <= state.right {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.left) as *const __m128i);
                    let mut m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
                    m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
                    let r: u16 = !_mm_movemask_epi8(m) as u16;
                    if r > 0 {
                        state.left += r.trailing_zeros() as usize;
                    } else {
                        state.left += 16;
                        continue;
                    }
                }
            }
            else if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Range1_5;
                return true;
            } else {
                state.node = NodeT::NoState;
                return false;
            }
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range1_4;
        return true;
    }
    fn range1_5(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0-9]
        let datastart = state.left;
        let is_sse42 = is_x86_feature_detected!("sse4.2");
        while state.left < state.right {
            if is_sse42 && (state.left+16) <= state.right {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.left) as *const __m128i);
                    let s0 = _mm_setr_epi8(0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
                    let r = _mm_cmpestri(s0, 10, d, 16, _SIDD_UBYTE_OPS | _SIDD_LEAST_SIGNIFICANT | _SIDD_CMP_EQUAL_ANY | _SIDD_NEGATIVE_POLARITY);
                    if r < 16 {
                        state.left += r as usize;
                    } else {
                        state.left += 16;
                        continue;
                    }
                }
            }
            else if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Range1_6;
                return true;
            } else {
                state.node = NodeT::NoState;
                return false;
            }
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range1_5;
        return true;
    }
    fn range1_6(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false]; // ^[0xa][0xd]
        let datastart = state.left;
        while state.left < state.right {
            if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            state.consumed = 0;
            state.node = NodeT::Text1_7;
            return true;
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range1_6;
        return true;
    }
    fn text1_7(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0D != data[state.left] {
                state.node = NodeT::Text1_8;
                return true;
            } else {
                state.left += 1;
                state.node = NodeT::Text1_8;
                return true;
            }
        }
        state.node = NodeT::Text1_7;
        return true;
    }
    fn text1_8(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::NoState;
                return false;
            } else {
                state.left += 1;
                state.node = NodeT::Call1_9;
                return true;
            }
        }
        state.node = NodeT::Text1_8;
        return true;
    }
    fn call1_9(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        state.node = NodeT::Label3_0;
        let rlen = state.rstack.len();
        if state.rcount < rlen {
            let rcount = state.rcount;
            state.rstack[rcount] = NodeT::Reset1_10;
            state.rcount = state.rcount + 1;
        } else {
            for i in 1 .. rlen {
                state.rstack[i - 1] = state.rstack[i];
            }
            state.rstack[rlen - 1] = NodeT::Reset1_10;
        }
        return true;
    }
    fn reset1_10(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        state.node = NodeT::NoState;
        self.reset();
        let c = self.vstate.len();
        self.vstate[c-1].left = state.left;
        self.vstate[c-1].right = state.right;
        return true;
    }
    fn loop3_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        return self.label3_0(state, data);
    }
    fn label3_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        state.node = NodeT::Loop3_1;
        return true;
    }
    fn loop3_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left == state.right {
            return true;
        }
        if self.range4_0(state, data) { // case_1
            return true;
        }
        if self.text5_0(state, data, true) { // case_2
            return true;
        }
        let istate = *state;
        if self.any6_0(state, data) { // case_3
            return true;
        }
        *state = istate;
        if self.any7_0(state, data) { // case_4
            return true;
        }
        *state = istate;
        if self.any8_0(state, data) { // case_5
            return true;
        }
        *state = istate;
        if self.any9_0(state, data) { // case_6
            return true;
        }
        *state = istate;
        if self.text10_0(state, data) { // case_7
            return true;
        }
        state.node = NodeT::Range18_0;
        return true;
    }
    fn range4_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0x9][0x20]
        let datastart = state.left;
        while state.left < state.right {
            if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Range4_1;
                return true;
            } else {
                state.node = NodeT::Range18_0;
                return false;
            }
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range4_0;
        return true;
    }
    fn range4_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false]; // ^[0xa][0xd]
        let datastart = state.left;
        while state.left < state.right {
            if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            state.consumed = 0;
            state.node = NodeT::Text4_2;
            return true;
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range4_1;
        return true;
    }
    fn text4_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0D != data[state.left] {
                state.node = NodeT::Text4_3;
                return true;
            } else {
                state.left += 1;
                state.node = NodeT::Text4_3;
                return true;
            }
        }
        state.node = NodeT::Text4_2;
        return true;
    }
    fn text4_3(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::Range18_0;
                return false;
            } else {
                state.left += 1;
                state.node = NodeT::Loop3_1;
                return true;
            }
        }
        state.node = NodeT::Text4_3;
        return true;
    }
    fn text5_0(&mut self, state: &mut StateT, data: &[u8], is_branch: bool) -> bool {
        static TEXT:[u8;18] = [0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, 0x65, 0x72, 0x2d, 0x65, 0x6e, 0x63, 0x6f, 0x64, 0x69, 0x6e, 0x67, 0x3a]; // transfer-encoding:
        while state.left < state.right {
            if ((TEXT[state.consumed] ^ data[state.left]) & 0xDF) != 0 {
                state.node = NodeT::Range18_0;
                let ret = is_branch && state.consumed != 0;
                state.consumed = 0;
                return ret;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Range5_1;
                return true;
            }
            state.left += 1;
        }
        state.node = NodeT::Text5_0;
        return true;
    }
    fn range5_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0x9][0x20]
        let datastart = state.left;
        let is_avx2 = is_x86_feature_detected!("avx2");
        let is_sse2 = is_x86_feature_detected!("sse2");
        while state.left < state.right {
            if is_avx2 && (state.left + 32) <= state.right {
                unsafe {
                    let d = _mm256_lddqu_si256(data.as_ptr().add(state.left) as *const __m256i);
                    let mut m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
                    m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
                    let r: u32 = !_mm256_movemask_epi8(m) as u32;
                    if r > 0 {
                        state.left += r.trailing_zeros() as usize;
                    } else {
                        state.left += 32;
                        continue;
                    }
                }
            }
            else if is_sse2 && (state.left + 16) <= state.right {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.left) as *const __m128i);
                    let mut m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
                    m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
                    let r: u16 = !_mm_movemask_epi8(m) as u16;
                    if r > 0 {
                        state.left += r.trailing_zeros() as usize;
                    } else {
                        state.left += 16;
                        continue;
                    }
                }
            }
            else if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::String5_2;
                return true;
            } else {
                state.node = NodeT::Range18_0;
                return false;
            }
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range5_1;
        return true;
    }
    fn _string5_2(&mut self, state: &mut StateT, data: &[u8]) {
        if state.consumed == 0 {
            self.output.transferEncoding().clear();
        }
        let len = if (self.output.transferEncoding().len() + data.len()) > 256 { 256 - self.output.transferEncoding().len() } else { data.len() };
        self.output.transferEncoding().push_str(&String::from_utf8_lossy(&data[0 .. len]));
    }
    fn string5_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false]; // ^[0xa][0xd]
        let datastart = state.left;
        let is_avx2 = is_x86_feature_detected!("avx2");
        let is_sse2 = is_x86_feature_detected!("sse2");
        while state.left < state.right {
            if is_avx2 && (state.left + 32) <= state.right {
                unsafe {
                    let d = _mm256_lddqu_si256(data.as_ptr().add(state.left) as *const __m256i);
                    let mut m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0xa), d);
                    m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0xd), d));
                    let r: u32 = _mm256_movemask_epi8(m) as u32;
                    if r > 0 {
                        state.left += r.trailing_zeros() as usize;
                    } else {
                        state.left += 32;
                        continue;
                    }
                }
            }
            else if is_sse2 && (state.left + 16) <= state.right {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.left) as *const __m128i);
                    let mut m = _mm_cmpeq_epi8(_mm_set1_epi8(0xa), d);
                    m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0xd), d));
                    let r: u16 = _mm_movemask_epi8(m) as u16;
                    if r > 0 {
                        state.left += r.trailing_zeros() as usize;
                    } else {
                        state.left += 16;
                        continue;
                    }
                }
            }
            else if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            let left = state.left;
            self._string5_2(state, &data[datastart .. left]);
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Text5_3;
                return true;
            } else {
                state.node = NodeT::Range18_0;
                return false;
            }
        }
        if datastart < state.left {
            let left = state.left;
            self._string5_2(state, &data[datastart .. left]);
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::String5_2;
        return true;
    }
    fn text5_3(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0D != data[state.left] {
                state.node = NodeT::Text5_4;
                return true;
            } else {
                state.left += 1;
                state.node = NodeT::Text5_4;
                return true;
            }
        }
        state.node = NodeT::Text5_3;
        return true;
    }
    fn text5_4(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::Range18_0;
                return false;
            } else {
                state.left += 1;
                state.node = NodeT::Loop3_1;
                return true;
            }
        }
        state.node = NodeT::Text5_4;
        return true;
    }
    fn any6_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left == state.right {
            return true;
        }
        // case_1: Text6_0_0_0
        if self.text6_0_0_0(state, data) && state.node == NodeT::Bang6_0 {
            return true;
        }
        else if state.node != NodeT::NoState {
            self.vstate.push(*state);
        }
        state.node = NodeT::Range18_0;
        return false;
    }
    fn text6_0_0_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;15] = [0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x3a]; // content-length:
        while state.left < state.right {
            if ((TEXT[state.consumed] ^ data[state.left]) & 0xDF) != 0 {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Bang6_0;
                return true;
            }
            state.left += 1;
        }
        state.node = NodeT::Text6_0_0_0;
        return true;
    }
    fn bang6_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        state.node = NodeT::Range6_2;
        for v in & mut self.vstate {
            v.node = NodeT::NoState;
        }
        return true;
    }
    fn range6_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0x9][0x20]
        let datastart = state.left;
        let is_avx2 = is_x86_feature_detected!("avx2");
        let is_sse2 = is_x86_feature_detected!("sse2");
        while state.left < state.right {
            if is_avx2 && (state.left + 32) <= state.right {
                unsafe {
                    let d = _mm256_lddqu_si256(data.as_ptr().add(state.left) as *const __m256i);
                    let mut m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
                    m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
                    let r: u32 = !_mm256_movemask_epi8(m) as u32;
                    if r > 0 {
                        state.left += r.trailing_zeros() as usize;
                    } else {
                        state.left += 32;
                        continue;
                    }
                }
            }
            else if is_sse2 && (state.left + 16) <= state.right {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.left) as *const __m128i);
                    let mut m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
                    m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
                    let r: u16 = !_mm_movemask_epi8(m) as u16;
                    if r > 0 {
                        state.left += r.trailing_zeros() as usize;
                    } else {
                        state.left += 16;
                        continue;
                    }
                }
            }
            else if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Uint6_3;
                return true;
            } else {
                state.node = NodeT::Range18_0;
                return false;
            }
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range6_2;
        return true;
    }
    fn _uint6_3(&mut self, state: &mut StateT, data: &[u8]) {
        if state.consumed == 0 {
            *self.output.contentLength() = 0;
        }
        for x in data {
            *self.output.contentLength() = *self.output.contentLength()*10 + u64::from(*x - b'0');
        }
    }
    fn uint6_3(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0-9]
        let datastart = state.left;
        while state.left < state.right {
            if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            let left = state.left;
            self._uint6_3(state, &data[datastart .. left]);
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Func6_4;
                return true;
            } else {
                state.node = NodeT::Range18_0;
                return false;
            }
        }
        if datastart < state.left {
            let left = state.left;
            self._uint6_3(state, &data[datastart .. left]);
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Uint6_3;
        return true;
    }
    fn func6_4(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if self.output._func6_4() {
            state.node = NodeT::Text6_5;
            return true;
        }
        state.node = NodeT::Range18_0;
        return false;
    }
    fn text6_5(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0D != data[state.left] {
                state.node = NodeT::Text6_6;
                return true;
            } else {
                state.left += 1;
                state.node = NodeT::Text6_6;
                return true;
            }
        }
        state.node = NodeT::Text6_5;
        return true;
    }
    fn text6_6(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::Range18_0;
                return false;
            } else {
                state.left += 1;
                state.node = NodeT::Loop3_1;
                return true;
            }
        }
        state.node = NodeT::Text6_6;
        return true;
    }
    fn any7_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left == state.right {
            return true;
        }
        // case_1: Text7_0_0_0
        if self.text7_0_0_0(state, data) && state.node == NodeT::Bang7_0 {
            return true;
        }
        else if state.node != NodeT::NoState {
            self.vstate.push(*state);
        }
        state.node = NodeT::Range18_0;
        return false;
    }
    fn text7_0_0_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;13] = [0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a]; // content-type:
        while state.left < state.right {
            if ((TEXT[state.consumed] ^ data[state.left]) & 0xDF) != 0 {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Bang7_0;
                return true;
            }
            state.left += 1;
        }
        state.node = NodeT::Text7_0_0_0;
        return true;
    }
    fn bang7_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        state.node = NodeT::Range7_2;
        for v in & mut self.vstate {
            v.node = NodeT::NoState;
        }
        return true;
    }
    fn range7_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0x9][0x20]
        let datastart = state.left;
        let is_avx2 = is_x86_feature_detected!("avx2");
        let is_sse2 = is_x86_feature_detected!("sse2");
        while state.left < state.right {
            if is_avx2 && (state.left + 32) <= state.right {
                unsafe {
                    let d = _mm256_lddqu_si256(data.as_ptr().add(state.left) as *const __m256i);
                    let mut m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
                    m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
                    let r: u32 = !_mm256_movemask_epi8(m) as u32;
                    if r > 0 {
                        state.left += r.trailing_zeros() as usize;
                    } else {
                        state.left += 32;
                        continue;
                    }
                }
            }
            else if is_sse2 && (state.left + 16) <= state.right {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.left) as *const __m128i);
                    let mut m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
                    m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
                    let r: u16 = !_mm_movemask_epi8(m) as u16;
                    if r > 0 {
                        state.left += r.trailing_zeros() as usize;
                    } else {
                        state.left += 16;
                        continue;
                    }
                }
            }
            else if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::String7_3;
                return true;
            } else {
                state.node = NodeT::Range18_0;
                return false;
            }
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range7_2;
        return true;
    }
    fn _string7_3(&mut self, state: &mut StateT, data: &[u8]) {
        if state.consumed == 0 {
            self.output.ctype().clear();
        }
        let len = if (self.output.ctype().len() + data.len()) > 256 { 256 - self.output.ctype().len() } else { data.len() };
        self.output.ctype().push_str(&String::from_utf8_lossy(&data[0 .. len]));
    }
    fn string7_3(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false]; // ^[0xa][0xd]
        let datastart = state.left;
        let is_avx2 = is_x86_feature_detected!("avx2");
        let is_sse2 = is_x86_feature_detected!("sse2");
        while state.left < state.right {
            if is_avx2 && (state.left + 32) <= state.right {
                unsafe {
                    let d = _mm256_lddqu_si256(data.as_ptr().add(state.left) as *const __m256i);
                    let mut m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0xa), d);
                    m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0xd), d));
                    let r: u32 = _mm256_movemask_epi8(m) as u32;
                    if r > 0 {
                        state.left += r.trailing_zeros() as usize;
                    } else {
                        state.left += 32;
                        continue;
                    }
                }
            }
            else if is_sse2 && (state.left + 16) <= state.right {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.left) as *const __m128i);
                    let mut m = _mm_cmpeq_epi8(_mm_set1_epi8(0xa), d);
                    m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0xd), d));
                    let r: u16 = _mm_movemask_epi8(m) as u16;
                    if r > 0 {
                        state.left += r.trailing_zeros() as usize;
                    } else {
                        state.left += 16;
                        continue;
                    }
                }
            }
            else if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            let left = state.left;
            self._string7_3(state, &data[datastart .. left]);
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Func7_4;
                return true;
            } else {
                state.node = NodeT::Range18_0;
                return false;
            }
        }
        if datastart < state.left {
            let left = state.left;
            self._string7_3(state, &data[datastart .. left]);
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::String7_3;
        return true;
    }
    fn func7_4(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if self.output._func7_4() {
            state.node = NodeT::Text7_5;
            return true;
        }
        state.node = NodeT::Range18_0;
        return false;
    }
    fn text7_5(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0D != data[state.left] {
                state.node = NodeT::Text7_6;
                return true;
            } else {
                state.left += 1;
                state.node = NodeT::Text7_6;
                return true;
            }
        }
        state.node = NodeT::Text7_5;
        return true;
    }
    fn text7_6(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::Range18_0;
                return false;
            } else {
                state.left += 1;
                state.node = NodeT::Loop3_1;
                return true;
            }
        }
        state.node = NodeT::Text7_6;
        return true;
    }
    fn any8_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left == state.right {
            return true;
        }
        // case_1: Text8_0_0_0
        if self.text8_0_0_0(state, data) && state.node == NodeT::Bang8_0 {
            return true;
        }
        else if state.node != NodeT::NoState {
            self.vstate.push(*state);
        }
        state.node = NodeT::Range18_0;
        return false;
    }
    fn text8_0_0_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;17] = [0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x65, 0x6e, 0x63, 0x6f, 0x64, 0x69, 0x6e, 0x67, 0x3a]; // content-encoding:
        while state.left < state.right {
            if ((TEXT[state.consumed] ^ data[state.left]) & 0xDF) != 0 {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Bang8_0;
                return true;
            }
            state.left += 1;
        }
        state.node = NodeT::Text8_0_0_0;
        return true;
    }
    fn bang8_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        state.node = NodeT::Range8_2;
        for v in & mut self.vstate {
            v.node = NodeT::NoState;
        }
        return true;
    }
    fn range8_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0x9][0x20]
        let datastart = state.left;
        let is_avx2 = is_x86_feature_detected!("avx2");
        let is_sse2 = is_x86_feature_detected!("sse2");
        while state.left < state.right {
            if is_avx2 && (state.left + 32) <= state.right {
                unsafe {
                    let d = _mm256_lddqu_si256(data.as_ptr().add(state.left) as *const __m256i);
                    let mut m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
                    m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
                    let r: u32 = !_mm256_movemask_epi8(m) as u32;
                    if r > 0 {
                        state.left += r.trailing_zeros() as usize;
                    } else {
                        state.left += 32;
                        continue;
                    }
                }
            }
            else if is_sse2 && (state.left + 16) <= state.right {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.left) as *const __m128i);
                    let mut m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
                    m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
                    let r: u16 = !_mm_movemask_epi8(m) as u16;
                    if r > 0 {
                        state.left += r.trailing_zeros() as usize;
                    } else {
                        state.left += 16;
                        continue;
                    }
                }
            }
            else if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::String8_3;
                return true;
            } else {
                state.node = NodeT::Range18_0;
                return false;
            }
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range8_2;
        return true;
    }
    fn _string8_3(&mut self, state: &mut StateT, data: &[u8]) {
        if state.consumed == 0 {
            self.output.encoding().clear();
        }
        let len = if (self.output.encoding().len() + data.len()) > 256 { 256 - self.output.encoding().len() } else { data.len() };
        self.output.encoding().push_str(&String::from_utf8_lossy(&data[0 .. len]));
    }
    fn string8_3(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false]; // ^[0xa][0xd]
        let datastart = state.left;
        let is_avx2 = is_x86_feature_detected!("avx2");
        let is_sse2 = is_x86_feature_detected!("sse2");
        while state.left < state.right {
            if is_avx2 && (state.left + 32) <= state.right {
                unsafe {
                    let d = _mm256_lddqu_si256(data.as_ptr().add(state.left) as *const __m256i);
                    let mut m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0xa), d);
                    m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0xd), d));
                    let r: u32 = _mm256_movemask_epi8(m) as u32;
                    if r > 0 {
                        state.left += r.trailing_zeros() as usize;
                    } else {
                        state.left += 32;
                        continue;
                    }
                }
            }
            else if is_sse2 && (state.left + 16) <= state.right {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.left) as *const __m128i);
                    let mut m = _mm_cmpeq_epi8(_mm_set1_epi8(0xa), d);
                    m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0xd), d));
                    let r: u16 = _mm_movemask_epi8(m) as u16;
                    if r > 0 {
                        state.left += r.trailing_zeros() as usize;
                    } else {
                        state.left += 16;
                        continue;
                    }
                }
            }
            else if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            let left = state.left;
            self._string8_3(state, &data[datastart .. left]);
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Func8_4;
                return true;
            } else {
                state.node = NodeT::Range18_0;
                return false;
            }
        }
        if datastart < state.left {
            let left = state.left;
            self._string8_3(state, &data[datastart .. left]);
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::String8_3;
        return true;
    }
    fn func8_4(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if self.output._func8_4() {
            state.node = NodeT::Text8_5;
            return true;
        }
        state.node = NodeT::Range18_0;
        return false;
    }
    fn text8_5(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0D != data[state.left] {
                state.node = NodeT::Text8_6;
                return true;
            } else {
                state.left += 1;
                state.node = NodeT::Text8_6;
                return true;
            }
        }
        state.node = NodeT::Text8_5;
        return true;
    }
    fn text8_6(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::Range18_0;
                return false;
            } else {
                state.left += 1;
                state.node = NodeT::Loop3_1;
                return true;
            }
        }
        state.node = NodeT::Text8_6;
        return true;
    }
    fn any9_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left == state.right {
            return true;
        }
        // case_1: Text9_0_0_0
        if self.text9_0_0_0(state, data) && state.node == NodeT::Bang9_0 {
            return true;
        }
        else if state.node != NodeT::NoState {
            self.vstate.push(*state);
        }
        state.node = NodeT::Range18_0;
        return false;
    }
    fn text9_0_0_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;11] = [0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x3a]; // connection:
        while state.left < state.right {
            if ((TEXT[state.consumed] ^ data[state.left]) & 0xDF) != 0 {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Bang9_0;
                return true;
            }
            state.left += 1;
        }
        state.node = NodeT::Text9_0_0_0;
        return true;
    }
    fn bang9_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        state.node = NodeT::Range9_2;
        for v in & mut self.vstate {
            v.node = NodeT::NoState;
        }
        return true;
    }
    fn range9_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0x9][0x20]
        let datastart = state.left;
        let is_avx2 = is_x86_feature_detected!("avx2");
        let is_sse2 = is_x86_feature_detected!("sse2");
        while state.left < state.right {
            if is_avx2 && (state.left + 32) <= state.right {
                unsafe {
                    let d = _mm256_lddqu_si256(data.as_ptr().add(state.left) as *const __m256i);
                    let mut m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
                    m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
                    let r: u32 = !_mm256_movemask_epi8(m) as u32;
                    if r > 0 {
                        state.left += r.trailing_zeros() as usize;
                    } else {
                        state.left += 32;
                        continue;
                    }
                }
            }
            else if is_sse2 && (state.left + 16) <= state.right {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.left) as *const __m128i);
                    let mut m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
                    m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
                    let r: u16 = !_mm_movemask_epi8(m) as u16;
                    if r > 0 {
                        state.left += r.trailing_zeros() as usize;
                    } else {
                        state.left += 16;
                        continue;
                    }
                }
            }
            else if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Text9_3;
                return true;
            } else {
                state.node = NodeT::Range18_0;
                return false;
            }
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range9_2;
        return true;
    }
    fn text9_3(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;10] = [0x6b, 0x65, 0x65, 0x70, 0x2d, 0x61, 0x6c, 0x69, 0x76, 0x65]; // keep-alive
        while state.left < state.right {
            if ((TEXT[state.consumed] ^ data[state.left]) & 0xDF) != 0 {
                state.node = NodeT::Range18_0;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Func9_4;
                return true;
            }
            state.left += 1;
        }
        state.node = NodeT::Text9_3;
        return true;
    }
    fn func9_4(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if self.output._func9_4() {
            state.node = NodeT::Text9_5;
            return true;
        }
        state.node = NodeT::Range18_0;
        return false;
    }
    fn text9_5(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0D != data[state.left] {
                state.node = NodeT::Text9_6;
                return true;
            } else {
                state.left += 1;
                state.node = NodeT::Text9_6;
                return true;
            }
        }
        state.node = NodeT::Text9_5;
        return true;
    }
    fn text9_6(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::Range18_0;
                return false;
            } else {
                state.left += 1;
                state.node = NodeT::Loop3_1;
                return true;
            }
        }
        state.node = NodeT::Text9_6;
        return true;
    }
    fn text10_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0D != data[state.left] {
                state.node = NodeT::Text10_1;
                return true;
            } else {
                state.left += 1;
                state.node = NodeT::Text10_1;
                return true;
            }
        }
        state.node = NodeT::Text10_0;
        return true;
    }
    fn text10_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::Range18_0;
                return false;
            } else {
                state.left += 1;
                state.node = NodeT::Loop10_2;
                return true;
            }
        }
        state.node = NodeT::Text10_1;
        return true;
    }
    fn loop10_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if self.if11_0(state, data) { // case_1
            return true;
        }
        if self.if12_0(state, data) { // case_2
            return true;
        }
        if self.if16_0(state, data) { // case_3
            return true;
        }
        if self.ret17_0(state, data) { // case_4
            return true;
        }
        state.node = NodeT::NoState;
        return true;
    }
    fn if11_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if self.output._if11_0() {
            state.node = NodeT::Data11_1;
            return true;
        }
        state.node = NodeT::NoState;
        return false;
    }
    fn data11_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        let datastart = state.left;
        if state.consumed == 0 {
            state.node = NodeT::Data11_1;
        }
        if state.left == state.right {
            return true;
        }
        else if (state.consumed + state.remain()) >= self.output._max_data11_1() {
            state.left += self.output._max_data11_1() - state.consumed;
            let left = state.left;
            self.output.resp(&data[datastart .. left], state.consumed == 0, true);
            state.consumed = 0;
            state.node = NodeT::Ret11_2;
        } else {
            state.left = state.right;
            let left = state.left;
            self.output.resp(&data[datastart .. left], state.consumed == 0, false);
            state.consumed += state.left - datastart;
        }
        return true;
    }
    fn ret11_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.rcount > 0 {
            state.rcount = state.rcount - 1;
            state.node = state.rstack[state.rcount]
        } else {
            state.node = NodeT::NoState;
        }
        return state.node != NodeT::NoState;
    }
    fn if12_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if self.output._if12_0() {
            state.node = NodeT::Loop12_1;
            return true;
        }
        state.node = NodeT::NoState;
        return false;
    }
    fn loop12_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        return self.hex13_0(state, data);
    }
    fn _hex13_0(&mut self, state: &mut StateT, data: &[u8]) {
        if state.consumed == 0 {
            *self.output.chunklen() = 0;
        }
        for x in data {
            if *x >= b'a' && *x <= b'f' {
                *self.output.chunklen() = (*self.output.chunklen() << 4) | u32::from(*x - b'a' + 10);
            }
            else if *x >= b'A' && *x <= b'F' {
                *self.output.chunklen() = (*self.output.chunklen() << 4) | u32::from(*x - b'A' + 10);
            }
            else if *x >= b'0' && *x <= b'9' {
                *self.output.chunklen() = (*self.output.chunklen() << 4) | u32::from(*x - b'0');
            }
        }
    }
    fn hex13_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0-9][A-F][a-f]
        let datastart = state.left;
        while state.left < state.right {
            if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            let left = state.left;
            self._hex13_0(state, &data[datastart .. left]);
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Range13_1;
                return true;
            } else {
                state.node = NodeT::NoState;
                return false;
            }
        }
        if datastart < state.left {
            let left = state.left;
            self._hex13_0(state, &data[datastart .. left]);
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Hex13_0;
        return true;
    }
    fn range13_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0x9][0x20]
        let datastart = state.left;
        while state.left < state.right {
            if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            state.consumed = 0;
            state.node = NodeT::Text13_2;
            return true;
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range13_1;
        return true;
    }
    fn text13_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0D != data[state.left] {
                state.node = NodeT::Text13_3;
                return true;
            } else {
                state.left += 1;
                state.node = NodeT::Text13_3;
                return true;
            }
        }
        state.node = NodeT::Text13_2;
        return true;
    }
    fn text13_3(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::NoState;
                return false;
            } else {
                state.left += 1;
                state.node = NodeT::Cases13_4;
                return true;
            }
        }
        state.node = NodeT::Text13_3;
        return true;
    }
    fn cases13_4(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left == state.right {
            return true;
        }
        if self.if14_0(state, data) { // case_1
            return true;
        }
        if self.data15_0(state, data) { // case_2
            return true;
        }
        state.node = NodeT::NoState;
        return true;
    }
    fn if14_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if self.output._if14_0() {
            state.node = NodeT::Text14_1;
            return true;
        }
        state.node = NodeT::NoState;
        return false;
    }
    fn text14_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0D != data[state.left] {
                state.node = NodeT::Text14_2;
                return true;
            } else {
                state.left += 1;
                state.node = NodeT::Text14_2;
                return true;
            }
        }
        state.node = NodeT::Text14_1;
        return true;
    }
    fn text14_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::NoState;
                return false;
            } else {
                state.left += 1;
                state.node = NodeT::Ret14_3;
                return true;
            }
        }
        state.node = NodeT::Text14_2;
        return true;
    }
    fn ret14_3(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.rcount > 0 {
            state.rcount = state.rcount - 1;
            state.node = state.rstack[state.rcount]
        } else {
            state.node = NodeT::NoState;
        }
        return state.node != NodeT::NoState;
    }
    fn data15_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        let datastart = state.left;
        if state.consumed == 0 {
            state.node = NodeT::Data15_0;
        }
        if state.left == state.right {
            return true;
        }
        else if (state.consumed + state.remain()) >= self.output._max_data15_0() {
            state.left += self.output._max_data15_0() - state.consumed;
            let left = state.left;
            self.output.resp(&data[datastart .. left], state.consumed == 0, true);
            state.consumed = 0;
            state.node = NodeT::Text15_1;
        } else {
            state.left = state.right;
            let left = state.left;
            self.output.resp(&data[datastart .. left], state.consumed == 0, false);
            state.consumed += state.left - datastart;
        }
        return true;
    }
    fn text15_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0D != data[state.left] {
                state.node = NodeT::Text15_2;
                return true;
            } else {
                state.left += 1;
                state.node = NodeT::Text15_2;
                return true;
            }
        }
        state.node = NodeT::Text15_1;
        return true;
    }
    fn text15_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::NoState;
                return false;
            } else {
                state.left += 1;
                state.node = NodeT::Loop12_1;
                return true;
            }
        }
        state.node = NodeT::Text15_2;
        return true;
    }
    fn if16_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if self.output._if16_0() {
            state.node = NodeT::Data16_1;
            return true;
        }
        state.node = NodeT::NoState;
        return false;
    }
    fn data16_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        let datastart = state.left;
        if state.consumed == 0 {
            state.node = NodeT::Data16_1;
        }
        if state.left == state.right {
            return true;
        }
        state.left = state.right;
        let left = state.left;
        self.output.resp(&data[datastart .. left], state.consumed == 0, false);
        state.consumed += state.left - datastart;
        return true;
    }
    fn ret17_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.rcount > 0 {
            state.rcount = state.rcount - 1;
            state.node = state.rstack[state.rcount]
        } else {
            state.node = NodeT::NoState;
        }
        return state.node != NodeT::NoState;
    }
    fn range18_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false]; // ^[0xa][0xd]
        let datastart = state.left;
        while state.left < state.right {
            if (state.left + 8) <= state.right {
                if TERMINATOR[usize::from(data[state.left])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else if TERMINATOR[usize::from(data[state.left + 4])] {
                    state.left += 4;
                }
                else if TERMINATOR[usize::from(data[state.left + 5])] {
                    state.left += 5;
                }
                else if TERMINATOR[usize::from(data[state.left + 6])] {
                    state.left += 6;
                }
                else if TERMINATOR[usize::from(data[state.left + 7])] {
                    state.left += 7;
                }
                else
                {
                    state.left += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left])]) {
                state.left += 1;
                continue;
            }
            state.consumed = 0;
            state.node = NodeT::Text18_1;
            return true;
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range18_0;
        return true;
    }
    fn text18_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0D != data[state.left] {
                state.node = NodeT::Text18_2;
                return true;
            } else {
                state.left += 1;
                state.node = NodeT::Text18_2;
                return true;
            }
        }
        state.node = NodeT::Text18_1;
        return true;
    }
    fn text18_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::NoState;
                return false;
            } else {
                state.left += 1;
                state.node = NodeT::Loop3_1;
                return true;
            }
        }
        state.node = NodeT::Text18_2;
        return true;
    }
    fn loop20_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        return self.bool20_0(state, data);
    }
    fn _bool20_0(&mut self, state: &mut StateT, data: &[u8]) {
        if data.len() > 0 {
            *self.output.isContentLen() = data[0] != 0;
        }
        else if state.consumed == 0 {
            *self.output.isContentLen() = false;
        }
    }
    fn bool20_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        let datastart = state.left;
        if state.consumed == 0 {
            state.node = NodeT::Bool20_0;
        }
        if state.left == state.right {
            return true;
        }
        else if (state.consumed + state.remain()) >= 1 {
            state.left += 1 - state.consumed;
            let left = state.left;
            self._bool20_0(state, &data[datastart .. left]);
            state.consumed = 0;
            state.node = NodeT::Bool20_1;
        } else {
            state.left = state.right;
            let left = state.left;
            self._bool20_0(state, &data[datastart .. left]);
            state.consumed += state.left - datastart;
        }
        return true;
    }
    fn _bool20_1(&mut self, state: &mut StateT, data: &[u8]) {
        if data.len() > 0 {
            *self.output.isKeepAlive() = data[0] != 0;
        }
        else if state.consumed == 0 {
            *self.output.isKeepAlive() = false;
        }
    }
    fn bool20_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        let datastart = state.left;
        if state.consumed == 0 {
            state.node = NodeT::Bool20_1;
        }
        if state.left == state.right {
            return true;
        }
        else if (state.consumed + state.remain()) >= 1 {
            state.left += 1 - state.consumed;
            let left = state.left;
            self._bool20_1(state, &data[datastart .. left]);
            state.consumed = 0;
            state.node = NodeT::Loop20_0;
        } else {
            state.left = state.right;
            let left = state.left;
            self._bool20_1(state, &data[datastart .. left]);
            state.consumed += state.left - datastart;
        }
        return true;
    }
    fn loop22_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        state.node = NodeT::NoState;
        return true;
    }
} // impl
