/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/Users/lowks/.asdf/installs/nim/v0.18.0/lib -o /Users/lowks/exercism/nim/bob/nimcache/stdlib_sets.o /Users/lowks/exercism/nim/bob/nimcache/stdlib_sets.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg;
typedef struct tySequence_4eRCaZmrYLLw2k30GPTiMw tySequence_4eRCaZmrYLLw2k30GPTiMw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple_QeWl6B6ffS4pU6WWrtcrDw tyTuple_QeWl6B6ffS4pU6WWrtcrDw;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg {
tySequence_4eRCaZmrYLLw2k30GPTiMw* data;
NI counter;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct tyTuple_QeWl6B6ffS4pU6WWrtcrDw {
NI Field0;
NimStringDesc* Field1;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tySequence_4eRCaZmrYLLw2k30GPTiMw {
  TGenericSeq Sup;
  tyTuple_QeWl6B6ffS4pU6WWrtcrDw data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, isEmpty_UshbaKGVTNLaJdFZ6zcwswsets)(NI hcode);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, isFilled_UshbaKGVTNLaJdFZ6zcwsw_2sets)(NI hcode);
static N_INLINE(NIM_BOOL, mustRehash_flzFqVXoQqeNJHN4qDyOhwsets)(NI length, NI counter);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, rightSize_9aQ9aswOyc6W7eMnLOsk3W7Asets)(NI count);
N_LIB_PRIVATE N_NIMCALL(NI, nextPowerOfTwo_gcitR3TEXHJ3GR9bmwIvtRA)(NI x);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(NI, nextTry_iM1OyigHU0QXXBzsM5QjYAsets)(NI h, NI maxHash);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence_4eRCaZmrYLLw2k30GPTiMw)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isPowerOfTwo_M0Db9b9cHxuUgw2ZF0P8utPg)(NI x);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isValid_6eOTx6voj6zxXrOLagnuRg)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg s);
static N_INLINE(NI, rawGet_SaVNwZAzzx9cfbfqIaCbK7Qsets)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg s, NimStringDesc* key, NI* hc);
N_LIB_PRIVATE N_NIMCALL(NI, hash_uBstFm5SYVQeOL3j9c9bc58A)(NimStringDesc* x);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQsystem)(void* a, void* b, NI size);
N_LIB_PRIVATE N_NIMCALL(void, enlarge_AdJq4wBW1P1lPO9b8ZHnO2g)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg* s);
static N_INLINE(NI, rawGetKnownHC_CuJUY9aKh8Ku1t1T7BDJRuQsets)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg s, NimStringDesc* key, NI hc);
N_LIB_PRIVATE N_NIMCALL(void, rawInsert_NHve4XdmAn7u81IC9bnRBng)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg* s, tySequence_4eRCaZmrYLLw2k30GPTiMw** data, NimStringDesc* key, NI hc, NI h);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
TNimType NTI_pOhUohTPuRItuGmDY0Ddzg_;
TNimType NTI_QeWl6B6ffS4pU6WWrtcrDw_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
TNimType NTI_4eRCaZmrYLLw2k30GPTiMw_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_0JXiWyhP5OCO8jWMA6sb1w_2, "\012counter < length ", 18);
STRING_LITERAL(TM_0JXiWyhP5OCO8jWMA6sb1w_12, "isPowerOfTwo(initialSize) ", 26);
STRING_LITERAL(TM_0JXiWyhP5OCO8jWMA6sb1w_13, "isValid(s) The set needs to be initialized.", 43);

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

static N_INLINE(NIM_BOOL, isEmpty_UshbaKGVTNLaJdFZ6zcwswsets)(NI hcode) {
	NIM_BOOL result;
	nimfr_("isEmpty", "sets.nim");
	result = (NIM_BOOL)0;
	nimln_(60, "sets.nim");
	result = (hcode == ((NI) 0));
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, isFilled_UshbaKGVTNLaJdFZ6zcwsw_2sets)(NI hcode) {
	NIM_BOOL result;
	nimfr_("isFilled", "sets.nim");
	result = (NIM_BOOL)0;
	nimln_(63, "sets.nim");
	nimln_(398, "system.nim");
	nimln_(63, "sets.nim");
	result = !((hcode == ((NI) 0)));
	popFrame();
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustRehash_flzFqVXoQqeNJHN4qDyOhwsets)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL T5_;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_3;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_4;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_5;
	nimfr_("mustRehash", "sets.nim");
	result = (NIM_BOOL)0;
	nimln_(127, "sets.nim");
	{
		if (!!((counter < length))) goto LA3_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_0JXiWyhP5OCO8jWMA6sb1w_2));
	}
	LA3_: ;
	nimln_(128, "sets.nim");
	T5_ = (NIM_BOOL)0;
	TM_0JXiWyhP5OCO8jWMA6sb1w_3 = mulInt(length, ((NI) 2));
	TM_0JXiWyhP5OCO8jWMA6sb1w_4 = mulInt(counter, ((NI) 3));
	T5_ = ((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_3) < (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_4));
	if (T5_) goto LA6_;
	TM_0JXiWyhP5OCO8jWMA6sb1w_5 = subInt(length, counter);
	T5_ = ((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_5) < ((NI) 4));
	LA6_: ;
	result = T5_;
	popFrame();
	return result;
}

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		if (!(b == ((NI) 0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == ((NI) (IL64(-9223372036854775807) - IL64(1))));
		if (!(T7_)) goto LA8_;
		T7_ = (b == ((NI) -1));
		LA8_: ;
		if (!T7_) goto LA9_;
		raiseOverflow();
	}
	LA9_: ;
	result = (NI)(a / b);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, rightSize_9aQ9aswOyc6W7eMnLOsk3W7Asets)(NI count) {
	NI result;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_6;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_7;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_8;
	nimfr_("rightSize", "sets.nim");
	result = (NI)0;
	nimln_(137, "sets.nim");
	TM_0JXiWyhP5OCO8jWMA6sb1w_6 = mulInt(((NI) (count)), ((NI) 3));
	TM_0JXiWyhP5OCO8jWMA6sb1w_7 = divInt((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_6), ((NI) 2));
	TM_0JXiWyhP5OCO8jWMA6sb1w_8 = addInt((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_7), ((NI) 4));
	result = nextPowerOfTwo_gcitR3TEXHJ3GR9bmwIvtRA((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_8));
	popFrame();
	return result;
}

static N_INLINE(NI, nextTry_iM1OyigHU0QXXBzsM5QjYAsets)(NI h, NI maxHash) {
	NI result;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_9;
	nimfr_("nextTry", "sets.nim");
	result = (NI)0;
	nimln_(140, "sets.nim");
	TM_0JXiWyhP5OCO8jWMA6sb1w_9 = addInt(h, ((NI) 1));
	result = (NI)((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_9) & maxHash);
	popFrame();
	return result;
}
static N_NIMCALL(void, Marker_tySequence_4eRCaZmrYLLw2k30GPTiMw)(void* p, NI op) {
	tySequence_4eRCaZmrYLLw2k30GPTiMw* a;
	NI T1_;
	a = (tySequence_4eRCaZmrYLLw2k30GPTiMw*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < a->Sup.len; T1_++) {
	nimGCvisit((void*)a->data[T1_].Field1, op);
	}
}

N_LIB_PRIVATE N_NIMCALL(NI, len_0AUATxCKyjOFDOv0xWITWA)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg s) {
	NI result;
	nimfr_("len", "sets.nim");
	result = (NI)0;
	nimln_(91, "sets.nim");
	result = s.counter;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isValid_6eOTx6voj6zxXrOLagnuRg)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg s) {
	NIM_BOOL result;
	nimfr_("isValid", "sets.nim");
	result = (NIM_BOOL)0;
	nimln_(77, "sets.nim");
	result = !((s.data == 0));
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, init_dG7qwLANa3DTWvQLq7ZA7g)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg* s, NI initialSize) {
	nimfr_("init", "sets.nim");
	nimln_(377, "sets.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isPowerOfTwo_M0Db9b9cHxuUgw2ZF0P8utPg(initialSize);
		if (!!(T3_)) goto LA4_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_0JXiWyhP5OCO8jWMA6sb1w_12));
	}
	LA4_: ;
	nimln_(378, "sets.nim");
	(*s).counter = ((NI) 0);
	nimln_(379, "sets.nim");
	unsureAsgnRef((void**) (&(*s).data), (tySequence_4eRCaZmrYLLw2k30GPTiMw*) newSeq((&NTI_4eRCaZmrYLLw2k30GPTiMw_), ((NI)chckRange(initialSize, ((NI) 0), ((NI) IL64(9223372036854775807))))));
	popFrame();
}

static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQsystem)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = memcmp(a, b, ((size_t) (size)));
	result = (T1_ == ((NI32) 0));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL T11_;
{	result = (NIM_BOOL)0;
	{
		if (!(a == b)) goto LA3_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == NIM_NIL);
		if (T7_) goto LA8_;
		T7_ = (b == NIM_NIL);
		LA8_: ;
		if (!T7_) goto LA9_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA9_: ;
	T11_ = (NIM_BOOL)0;
	T11_ = ((*a).Sup.len == (*b).Sup.len);
	if (!(T11_)) goto LA12_;
	T11_ = equalMem_fmeFeLBvgmAHG9bC8ETS9bYQsystem(((void*) ((*a).data)), ((void*) ((*b).data)), ((NI) ((*a).Sup.len)));
	LA12_: ;
	result = T11_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, rawGet_SaVNwZAzzx9cfbfqIaCbK7Qsets)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg s, NimStringDesc* key, NI* hc) {
	NI result;
	NI h;
	NI T5_;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_14;
	nimfr_("rawGet", "sets.nim");
{	result = (NI)0;
	nimln_(155, "sets.nim");
	(*hc) = hash_uBstFm5SYVQeOL3j9c9bc58A(key);
	nimln_(156, "sets.nim");
	{
		if (!((*hc) == ((NI) 0))) goto LA3_;
		nimln_(157, "sets.nim");
		(*hc) = ((NI) 314159265);
	}
	LA3_: ;
	nimln_(143, "sets.nim");
	T5_ = (s.data ? (s.data->Sup.len-1) : -1);
	h = (NI)((*hc) & T5_);
	{
		nimln_(144, "sets.nim");
		while (1) {
			NIM_BOOL T8_;
			NI T15_;
			if ((NU)(h) >= (NU)(s.data->Sup.len)) raiseIndexError();
			T8_ = (NIM_BOOL)0;
			T8_ = isFilled_UshbaKGVTNLaJdFZ6zcwsw_2sets(s.data->data[h].Field0);
			if (!T8_) goto LA7;
			nimln_(149, "sets.nim");
			{
				NIM_BOOL T11_;
				T11_ = (NIM_BOOL)0;
				if ((NU)(h) >= (NU)(s.data->Sup.len)) raiseIndexError();
				T11_ = (s.data->data[h].Field0 == (*hc));
				if (!(T11_)) goto LA12_;
				if ((NU)(h) >= (NU)(s.data->Sup.len)) raiseIndexError();
				T11_ = eqStrings(s.data->data[h].Field1, key);
				LA12_: ;
				if (!T11_) goto LA13_;
				nimln_(150, "sets.nim");
				result = h;
				goto BeforeRet_;
			}
			LA13_: ;
			nimln_(151, "sets.nim");
			T15_ = (s.data ? (s.data->Sup.len-1) : -1);
			h = nextTry_iM1OyigHU0QXXBzsM5QjYAsets(h, T15_);
		} LA7: ;
	}
	nimln_(152, "sets.nim");
	TM_0JXiWyhP5OCO8jWMA6sb1w_14 = subInt(((NI) -1), h);
	result = (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_14);
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(NI, rawGetKnownHC_CuJUY9aKh8Ku1t1T7BDJRuQsets)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg s, NimStringDesc* key, NI hc) {
	NI result;
	NI h;
	NI T1_;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_16;
	nimfr_("rawGetKnownHC", "sets.nim");
{	result = (NI)0;
	nimln_(143, "sets.nim");
	T1_ = (s.data ? (s.data->Sup.len-1) : -1);
	h = (NI)(hc & T1_);
	{
		nimln_(144, "sets.nim");
		while (1) {
			NIM_BOOL T4_;
			NI T11_;
			if ((NU)(h) >= (NU)(s.data->Sup.len)) raiseIndexError();
			T4_ = (NIM_BOOL)0;
			T4_ = isFilled_UshbaKGVTNLaJdFZ6zcwsw_2sets(s.data->data[h].Field0);
			if (!T4_) goto LA3;
			nimln_(149, "sets.nim");
			{
				NIM_BOOL T7_;
				T7_ = (NIM_BOOL)0;
				if ((NU)(h) >= (NU)(s.data->Sup.len)) raiseIndexError();
				T7_ = (s.data->data[h].Field0 == hc);
				if (!(T7_)) goto LA8_;
				if ((NU)(h) >= (NU)(s.data->Sup.len)) raiseIndexError();
				T7_ = eqStrings(s.data->data[h].Field1, key);
				LA8_: ;
				if (!T7_) goto LA9_;
				nimln_(150, "sets.nim");
				result = h;
				goto BeforeRet_;
			}
			LA9_: ;
			nimln_(151, "sets.nim");
			T11_ = (s.data ? (s.data->Sup.len-1) : -1);
			h = nextTry_iM1OyigHU0QXXBzsM5QjYAsets(h, T11_);
		} LA3: ;
	}
	nimln_(152, "sets.nim");
	TM_0JXiWyhP5OCO8jWMA6sb1w_16 = subInt(((NI) -1), h);
	result = (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_16);
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim");
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(132, "gc.nim");
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim");
	nimln_(211, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	nimfr_("nimGCunrefNoCycle", "gc.nim");
	nimln_(250, "gc.nim");
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	nimln_(252, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(253, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, rawInsert_NHve4XdmAn7u81IC9bnRBng)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg* s, tySequence_4eRCaZmrYLLw2k30GPTiMw** data, NimStringDesc* key, NI hc, NI h) {
	NimStringDesc* T1_;
	nimfr_("rawInsert", "sets.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	nimln_(161, "sets.nim");
	T1_ = (NimStringDesc*)0;
	T1_ = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(key);
	if (T1_) nimGCunrefNoCycle(T1_);
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	nimln_(162, "sets.nim");
	(*data)->data[h].Field0 = hc;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, enlarge_AdJq4wBW1P1lPO9b8ZHnO2g)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg* s) {
	tySequence_4eRCaZmrYLLw2k30GPTiMw* n;
	NI T1_;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_15;
	tySequence_4eRCaZmrYLLw2k30GPTiMw* T2_;
	nimfr_("enlarge", "sets.nim");
	n = (tySequence_4eRCaZmrYLLw2k30GPTiMw*)0;
	nimln_(215, "sets.nim");
	T1_ = ((*s).data ? (*s).data->Sup.len : 0);
	TM_0JXiWyhP5OCO8jWMA6sb1w_15 = mulInt(T1_, ((NI) 2));
	n = (tySequence_4eRCaZmrYLLw2k30GPTiMw*) newSeq((&NTI_4eRCaZmrYLLw2k30GPTiMw_), ((NI)chckRange((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_15), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln_(216, "sets.nim");
	T2_ = (tySequence_4eRCaZmrYLLw2k30GPTiMw*)0;
	T2_ = (*s).data;
	unsureAsgnRef((void**) (&(*s).data), n);
	n = T2_;
	{
		NI i;
		NI colontmp_;
		NI T4_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimln_(217, "sets.nim");
		T4_ = (n ? (n->Sup.len-1) : -1);
		colontmp_ = T4_;
		nimln_(2032, "system.nim");
		res = ((NI) 0);
		{
			nimln_(2033, "system.nim");
			while (1) {
				NI TM_0JXiWyhP5OCO8jWMA6sb1w_18;
				if (!(res <= colontmp_)) goto LA6;
				nimln_(2034, "system.nim");
				i = res;
				nimln_(218, "sets.nim");
				{
					NIM_BOOL T9_;
					NI j;
					NI T12_;
					NI TM_0JXiWyhP5OCO8jWMA6sb1w_17;
					if ((NU)(i) >= (NU)(n->Sup.len)) raiseIndexError();
					T9_ = (NIM_BOOL)0;
					T9_ = isFilled_UshbaKGVTNLaJdFZ6zcwsw_2sets(n->data[i].Field0);
					if (!T9_) goto LA10_;
					nimln_(219, "sets.nim");
					if ((NU)(i) >= (NU)(n->Sup.len)) raiseIndexError();
					if ((NU)(i) >= (NU)(n->Sup.len)) raiseIndexError();
					T12_ = (NI)0;
					T12_ = rawGetKnownHC_CuJUY9aKh8Ku1t1T7BDJRuQsets((*s), n->data[i].Field1, n->data[i].Field0);
					TM_0JXiWyhP5OCO8jWMA6sb1w_17 = subInt(((NI) -1), T12_);
					j = (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_17);
					nimln_(220, "sets.nim");
					if ((NU)(i) >= (NU)(n->Sup.len)) raiseIndexError();
					if ((NU)(i) >= (NU)(n->Sup.len)) raiseIndexError();
					rawInsert_NHve4XdmAn7u81IC9bnRBng(s, (&(*s).data), n->data[i].Field1, n->data[i].Field0, j);
				}
				LA10_: ;
				nimln_(2035, "system.nim");
				TM_0JXiWyhP5OCO8jWMA6sb1w_18 = addInt(res, ((NI) 1));
				res = (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_18);
			} LA6: ;
		}
	}
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, incl_I6VFHFuzEfqdUNaUfyr6kA)(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg* s, NimStringDesc* key) {
	NI hc;
	NI index;
	nimfr_("incl", "sets.nim");
	nimln_(254, "sets.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isValid_6eOTx6voj6zxXrOLagnuRg((*s));
		if (!!(T3_)) goto LA4_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_0JXiWyhP5OCO8jWMA6sb1w_13));
	}
	LA4_: ;
	hc = (NI)0;
	nimln_(224, "sets.nim");
	index = rawGet_SaVNwZAzzx9cfbfqIaCbK7Qsets((*s), key, (&hc));
	nimln_(255, "sets.nim");
	{
		NI TM_0JXiWyhP5OCO8jWMA6sb1w_19;
		NI TM_0JXiWyhP5OCO8jWMA6sb1w_20;
		nimln_(225, "sets.nim");
		if (!(index < ((NI) 0))) goto LA8_;
		nimln_(226, "sets.nim");
		{
			NI T12_;
			NIM_BOOL T13_;
			T12_ = ((*s).data ? (*s).data->Sup.len : 0);
			T13_ = (NIM_BOOL)0;
			T13_ = mustRehash_flzFqVXoQqeNJHN4qDyOhwsets(T12_, (*s).counter);
			if (!T13_) goto LA14_;
			nimln_(227, "sets.nim");
			enlarge_AdJq4wBW1P1lPO9b8ZHnO2g(s);
			nimln_(228, "sets.nim");
			index = rawGetKnownHC_CuJUY9aKh8Ku1t1T7BDJRuQsets((*s), key, hc);
		}
		LA14_: ;
		nimln_(229, "sets.nim");
		TM_0JXiWyhP5OCO8jWMA6sb1w_19 = subInt(((NI) -1), index);
		rawInsert_NHve4XdmAn7u81IC9bnRBng(s, (&(*s).data), key, hc, (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_19));
		nimln_(230, "sets.nim");
		TM_0JXiWyhP5OCO8jWMA6sb1w_20 = addInt((*s).counter, ((NI) 1));
		(*s).counter = (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_20);
	}
	LA8_: ;
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_setsInit000)(void) {
	nimfr_("sets", "sets.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_setsDatInit000)(void) {
static TNimNode* TM_0JXiWyhP5OCO8jWMA6sb1w_10[2];
static TNimNode* TM_0JXiWyhP5OCO8jWMA6sb1w_11[2];
static TNimNode TM_0JXiWyhP5OCO8jWMA6sb1w_0[6];
NTI_pOhUohTPuRItuGmDY0Ddzg_.size = sizeof(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg);
NTI_pOhUohTPuRItuGmDY0Ddzg_.kind = 18;
NTI_pOhUohTPuRItuGmDY0Ddzg_.base = 0;
NTI_pOhUohTPuRItuGmDY0Ddzg_.flags = 2;
TM_0JXiWyhP5OCO8jWMA6sb1w_10[0] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[1];
NTI_QeWl6B6ffS4pU6WWrtcrDw_.size = sizeof(tyTuple_QeWl6B6ffS4pU6WWrtcrDw);
NTI_QeWl6B6ffS4pU6WWrtcrDw_.kind = 18;
NTI_QeWl6B6ffS4pU6WWrtcrDw_.base = 0;
NTI_QeWl6B6ffS4pU6WWrtcrDw_.flags = 2;
TM_0JXiWyhP5OCO8jWMA6sb1w_11[0] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[3];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].offset = offsetof(tyTuple_QeWl6B6ffS4pU6WWrtcrDw, Field0);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].name = "Field0";
TM_0JXiWyhP5OCO8jWMA6sb1w_11[1] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[4];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].offset = offsetof(tyTuple_QeWl6B6ffS4pU6WWrtcrDw, Field1);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].name = "Field1";
TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].len = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].kind = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].sons = &TM_0JXiWyhP5OCO8jWMA6sb1w_11[0];
NTI_QeWl6B6ffS4pU6WWrtcrDw_.node = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[2];
NTI_4eRCaZmrYLLw2k30GPTiMw_.size = sizeof(tySequence_4eRCaZmrYLLw2k30GPTiMw*);
NTI_4eRCaZmrYLLw2k30GPTiMw_.kind = 24;
NTI_4eRCaZmrYLLw2k30GPTiMw_.base = (&NTI_QeWl6B6ffS4pU6WWrtcrDw_);
NTI_4eRCaZmrYLLw2k30GPTiMw_.flags = 2;
NTI_4eRCaZmrYLLw2k30GPTiMw_.marker = Marker_tySequence_4eRCaZmrYLLw2k30GPTiMw;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].offset = offsetof(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg, data);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].typ = (&NTI_4eRCaZmrYLLw2k30GPTiMw_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].name = "data";
TM_0JXiWyhP5OCO8jWMA6sb1w_10[1] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[5];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].offset = offsetof(tyObject_HashSet_pOhUohTPuRItuGmDY0Ddzg, counter);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].name = "counter";
TM_0JXiWyhP5OCO8jWMA6sb1w_0[0].len = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[0].kind = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[0].sons = &TM_0JXiWyhP5OCO8jWMA6sb1w_10[0];
NTI_pOhUohTPuRItuGmDY0Ddzg_.node = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[0];
}

