/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/Users/lowks/.asdf/installs/nim/v0.18.0/lib -o /Users/lowks/exercism/nim/hello-world/nimcache/stdlib_strformat.o /Users/lowks/exercism/nim/hello-world/nimcache/stdlib_strformat.c */
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
typedef struct tyObject_StandardFormatSpecifier_NDU7AW5Eu6Q69c8cH6RDouQ tyObject_StandardFormatSpecifier_NDU7AW5Eu6Q69c8cH6RDouQ;
typedef struct tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA;
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
typedef struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA;
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
struct tyObject_StandardFormatSpecifier_NDU7AW5Eu6Q69c8cH6RDouQ {
NIM_CHAR fill;
NIM_CHAR align;
NIM_CHAR sign;
NIM_BOOL alternateForm;
NIM_BOOL padWithZero;
NI minimumWidth;
NI precision;
NIM_CHAR typ;
NI endPosition;
};
typedef NU8 tySet_tyChar_nmiMWKVIe46vacnhAFrQvw[32];
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
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence_uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA {
  Exception Sup;
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
struct tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA {
NI a;
NI b;
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
struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
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
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
static N_INLINE(NimStringDesc*, mkDigit_CMhQD6pILTyQUBskwxEJIQstrformat)(NI v, NIM_CHAR typ);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR x);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, alignString_K0KhcBUnoHPpalDPYI9b6bA)(NimStringDesc* s, NI minimumWidth, NIM_CHAR align, NIM_CHAR fill);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NI, validateUtf8_Vhh4YDLBdQSeOA7s2z9bA7A)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NI, nucruneLen)(NimStringDesc* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_StandardFormatSpecifier_NDU7AW5Eu6Q69c8cH6RDouQ, parseStandardFormatSpecifier_l0Y8k5tIk0aj1kHTtFOjSw)(NimStringDesc* s, NI start, NIM_BOOL ignoreUnknownSuffix);
N_NOINLINE(void, raiseIndexError)(void);
N_LIB_PRIVATE N_NIMCALL(NI, parseSaturatedNatural_heAOnV8CAiOgwhPKbfpRgA)(NimStringDesc* s, NI* b, NI start);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(NimStringDesc*, X5BX5D__lkBUIkH7j2jb0vaXPf2frAstrutils)(NimStringDesc* s, tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA x);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
static N_INLINE(tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA, dotdot__ctxq0YSon7aLz7isCROwwQstrformat)(NI a, NI b);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_LIB_PRIVATE N_NIMCALL(void, format_0qs1MYNUDLlnJxpKBIQbnA)(NimStringDesc* value, NimStringDesc* specifier, NimStringDesc** res);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TNimType NTI_yCEN9anxCD6mzBxGjuaRBdg_;
extern TNimType NTI_Gi06FkNeykJn7mrqRZYrkA_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_qDXzsifTQdn8ucTam9cFp4w_2, "v < 26 ", 7);
NIM_CONST tySet_tyChar_nmiMWKVIe46vacnhAFrQvw alignChars_LBVGk5lO18m7LtF49bc1EDA = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_qDXzsifTQdn8ucTam9cFp4w_23, "invalid format string, cannot parse: ", 37);
STRING_LITERAL(TM_qDXzsifTQdn8ucTam9cFp4w_29, "invalid type in format string for string, expected \'s\', but got"
" ", 64);

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

static N_INLINE(NimStringDesc*, mkDigit_CMhQD6pILTyQUBskwxEJIQstrformat)(NI v, NIM_CHAR typ) {
	NimStringDesc* result;
	nimfr_("mkDigit", "strformat.nim");
	result = (NimStringDesc*)0;
	nimln_(340, "strformat.nim");
	{
		if (!!((v < ((NI) 26)))) goto LA3_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_qDXzsifTQdn8ucTam9cFp4w_2));
	}
	LA3_: ;
	nimln_(341, "strformat.nim");
	{
		NI TM_qDXzsifTQdn8ucTam9cFp4w_3;
		if (!(v < ((NI) 10))) goto LA7_;
		nimln_(342, "strformat.nim");
		TM_qDXzsifTQdn8ucTam9cFp4w_3 = addInt(((NI) 48), v);
		result = nimCharToStr(((NIM_CHAR) (((NI)chckRange((NI)(TM_qDXzsifTQdn8ucTam9cFp4w_3), ((NI) 0), ((NI) 255))))));
	}
	goto LA5_;
	LA7_: ;
	{
		NIM_CHAR T10_;
		NI TM_qDXzsifTQdn8ucTam9cFp4w_4;
		NI TM_qDXzsifTQdn8ucTam9cFp4w_5;
		nimln_(344, "strformat.nim");
		T10_ = (NIM_CHAR)0;
		{
			if (!((NU8)(typ) == (NU8)(120))) goto LA13_;
			T10_ = 97;
		}
		goto LA11_;
		LA13_: ;
		{
			T10_ = 65;
		}
		LA11_: ;
		TM_qDXzsifTQdn8ucTam9cFp4w_4 = addInt(((NU8)(T10_)), v);
		TM_qDXzsifTQdn8ucTam9cFp4w_5 = subInt((NI)(TM_qDXzsifTQdn8ucTam9cFp4w_4), ((NI) 10));
		result = nimCharToStr(((NIM_CHAR) (((NI)chckRange((NI)(TM_qDXzsifTQdn8ucTam9cFp4w_5), ((NI) 0), ((NI) 255))))));
	}
	LA5_: ;
	popFrame();
	return result;
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
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

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, alignString_K0KhcBUnoHPpalDPYI9b6bA)(NimStringDesc* s, NI minimumWidth, NIM_CHAR align, NIM_CHAR fill) {
	NimStringDesc* result;
	nimfr_("alignString", "strformat.nim");
	result = (NimStringDesc*)0;
	nimln_(350, "strformat.nim");
	{
		if (!(minimumWidth == ((NI) 0))) goto LA3_;
		nimln_(351, "strformat.nim");
		result = copyString(s);
	}
	goto LA1_;
	LA3_: ;
	{
		NI sRuneLen;
		NI toFill;
		NI TM_qDXzsifTQdn8ucTam9cFp4w_6;
		nimln_(353, "strformat.nim");
		{
			NI T8_;
			T8_ = (NI)0;
			T8_ = validateUtf8_Vhh4YDLBdQSeOA7s2z9bA7A(s);
			if (!(T8_ == ((NI) -1))) goto LA9_;
			sRuneLen = nucruneLen(s);
		}
		goto LA6_;
		LA9_: ;
		{
			sRuneLen = (s ? s->Sup.len : 0);
		}
		LA6_: ;
		nimln_(354, "strformat.nim");
		TM_qDXzsifTQdn8ucTam9cFp4w_6 = subInt(minimumWidth, sRuneLen);
		toFill = (NI)(TM_qDXzsifTQdn8ucTam9cFp4w_6);
		nimln_(355, "strformat.nim");
		{
			if (!(toFill <= ((NI) 0))) goto LA14_;
			nimln_(356, "strformat.nim");
			result = copyString(s);
		}
		goto LA12_;
		LA14_: ;
		{
			NIM_BOOL T17_;
			NimStringDesc* T21_;
			NimStringDesc* T22_;
			nimln_(357, "strformat.nim");
			T17_ = (NIM_BOOL)0;
			T17_ = ((NU8)(align) == (NU8)(60));
			if (T17_) goto LA18_;
			T17_ = ((NU8)(align) == (NU8)(0));
			LA18_: ;
			if (!T17_) goto LA19_;
			nimln_(358, "strformat.nim");
			T21_ = (NimStringDesc*)0;
			T22_ = (NimStringDesc*)0;
			T22_ = nsuRepeatChar(fill, ((NI)chckRange(toFill, ((NI) 0), ((NI) IL64(9223372036854775807)))));
			T21_ = rawNewString(s->Sup.len + T22_->Sup.len + 0);
appendString(T21_, s);
appendString(T21_, T22_);
			result = T21_;
		}
		goto LA12_;
		LA19_: ;
		{
			NI half;
			NI TM_qDXzsifTQdn8ucTam9cFp4w_7;
			NimStringDesc* T26_;
			NimStringDesc* T27_;
			NI TM_qDXzsifTQdn8ucTam9cFp4w_8;
			NimStringDesc* T28_;
			nimln_(359, "strformat.nim");
			if (!((NU8)(align) == (NU8)(94))) goto LA24_;
			nimln_(360, "strformat.nim");
			TM_qDXzsifTQdn8ucTam9cFp4w_7 = divInt(toFill, ((NI) 2));
			half = (NI)(TM_qDXzsifTQdn8ucTam9cFp4w_7);
			nimln_(361, "strformat.nim");
			T26_ = (NimStringDesc*)0;
			T27_ = (NimStringDesc*)0;
			T27_ = nsuRepeatChar(fill, ((NI)chckRange(half, ((NI) 0), ((NI) IL64(9223372036854775807)))));
			TM_qDXzsifTQdn8ucTam9cFp4w_8 = subInt(toFill, half);
			T28_ = (NimStringDesc*)0;
			T28_ = nsuRepeatChar(fill, ((NI)chckRange((NI)(TM_qDXzsifTQdn8ucTam9cFp4w_8), ((NI) 0), ((NI) IL64(9223372036854775807)))));
			T26_ = rawNewString(T27_->Sup.len + s->Sup.len + T28_->Sup.len + 0);
appendString(T26_, T27_);
appendString(T26_, s);
appendString(T26_, T28_);
			result = T26_;
		}
		goto LA12_;
		LA24_: ;
		{
			NimStringDesc* T30_;
			NimStringDesc* T31_;
			nimln_(363, "strformat.nim");
			T30_ = (NimStringDesc*)0;
			T31_ = (NimStringDesc*)0;
			T31_ = nsuRepeatChar(fill, ((NI)chckRange(toFill, ((NI) 0), ((NI) IL64(9223372036854775807)))));
			T30_ = rawNewString(T31_->Sup.len + s->Sup.len + 0);
appendString(T30_, T31_);
appendString(T30_, s);
			result = T30_;
		}
		LA12_: ;
	}
	LA1_: ;
	popFrame();
	return result;
}

static N_INLINE(NimStringDesc*, X5BX5D__lkBUIkH7j2jb0vaXPf2frAstrutils)(NimStringDesc* s, tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA x) {
	NimStringDesc* result;
	NI a;
	NI L;
	NI TM_qDXzsifTQdn8ucTam9cFp4w_24;
	NI TM_qDXzsifTQdn8ucTam9cFp4w_25;
	NI TM_qDXzsifTQdn8ucTam9cFp4w_26;
	nimfr_("[]", "system.nim");
	result = (NimStringDesc*)0;
	nimln_(3556, "system.nim");
	a = x.a;
	nimln_(3557, "system.nim");
	nimln_(3546, "system.nim");
	nimln_(3557, "system.nim");
	TM_qDXzsifTQdn8ucTam9cFp4w_24 = subInt((s ? s->Sup.len : 0), x.b);
	TM_qDXzsifTQdn8ucTam9cFp4w_25 = subInt((NI)(TM_qDXzsifTQdn8ucTam9cFp4w_24), a);
	TM_qDXzsifTQdn8ucTam9cFp4w_26 = addInt((NI)(TM_qDXzsifTQdn8ucTam9cFp4w_25), ((NI) 1));
	L = (NI)(TM_qDXzsifTQdn8ucTam9cFp4w_26);
	nimln_(3558, "system.nim");
	result = mnewString(((NI)chckRange(L, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		nimln_(3519, "system.nim");
		i_2 = ((NI) 0);
		{
			nimln_(3520, "system.nim");
			while (1) {
				NI TM_qDXzsifTQdn8ucTam9cFp4w_27;
				NI TM_qDXzsifTQdn8ucTam9cFp4w_28;
				if (!(i_2 < L)) goto LA3;
				nimln_(3521, "system.nim");
				i = i_2;
				if ((NU)(i) > (NU)(result->Sup.len)) raiseIndexError();
				nimln_(3559, "system.nim");
				TM_qDXzsifTQdn8ucTam9cFp4w_27 = addInt(i, a);
				if ((NU)((NI)(TM_qDXzsifTQdn8ucTam9cFp4w_27)) > (NU)(s->Sup.len)) raiseIndexError();
				result->data[i] = s->data[(NI)(TM_qDXzsifTQdn8ucTam9cFp4w_27)];
				nimln_(3522, "system.nim");
				TM_qDXzsifTQdn8ucTam9cFp4w_28 = addInt(i_2, ((NI) 1));
				i_2 = (NI)(TM_qDXzsifTQdn8ucTam9cFp4w_28);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}

static N_INLINE(tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA, dotdot__ctxq0YSon7aLz7isCROwwQstrformat)(NI a, NI b) {
	tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA result;
	nimfr_("..", "system.nim");
	memset((void*)(&result), 0, sizeof(result));
	nimln_(325, "system.nim");
	result.a = a;
	nimln_(326, "system.nim");
	result.b = b;
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

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr_("asgnRefNoCycle", "gc.nim");
	nimln_(271, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		nimln_(398, "system.nim");
		nimln_(271, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		nimln_(272, "gc.nim");
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		nimln_(273, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	nimln_(274, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		nimln_(398, "system.nim");
		nimln_(274, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		nimln_(275, "gc.nim");
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		nimln_(276, "gc.nim");
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			nimln_(277, "gc.nim");
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	nimln_(278, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("incRef", "gc.nim");
	nimln_(191, "gc.nim");
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	popFrame();
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("decRef", "gc.nim");
	nimln_(218, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(219, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr_("asgnRef", "gc.nim");
	nimln_(264, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		nimln_(398, "system.nim");
		nimln_(264, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	nimln_(265, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		nimln_(398, "system.nim");
		nimln_(265, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	nimln_(266, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(tyObject_StandardFormatSpecifier_NDU7AW5Eu6Q69c8cH6RDouQ, parseStandardFormatSpecifier_l0Y8k5tIk0aj1kHTtFOjSw)(NimStringDesc* s, NI start, NIM_BOOL ignoreUnknownSuffix) {
	tyObject_StandardFormatSpecifier_NDU7AW5Eu6Q69c8cH6RDouQ result;
	NI i;
	NI parsedLength;
	NI TM_qDXzsifTQdn8ucTam9cFp4w_19;
	nimfr_("parseStandardFormatSpecifier", "strformat.nim");
	memset((void*)(&result), 0, sizeof(result));
	nimln_(447, "strformat.nim");
	result.fill = 32;
	nimln_(448, "strformat.nim");
	result.align = 0;
	nimln_(449, "strformat.nim");
	result.sign = 45;
	nimln_(450, "strformat.nim");
	i = start;
	nimln_(451, "strformat.nim");
	{
		NIM_BOOL T3_;
		NI TM_qDXzsifTQdn8ucTam9cFp4w_9;
		NI TM_qDXzsifTQdn8ucTam9cFp4w_10;
		NI TM_qDXzsifTQdn8ucTam9cFp4w_11;
		NI TM_qDXzsifTQdn8ucTam9cFp4w_12;
		T3_ = (NIM_BOOL)0;
		TM_qDXzsifTQdn8ucTam9cFp4w_9 = addInt(i, ((NI) 1));
		T3_ = ((NI)(TM_qDXzsifTQdn8ucTam9cFp4w_9) < (s ? s->Sup.len : 0));
		if (!(T3_)) goto LA4_;
		TM_qDXzsifTQdn8ucTam9cFp4w_10 = addInt(i, ((NI) 1));
		if ((NU)((NI)(TM_qDXzsifTQdn8ucTam9cFp4w_10)) > (NU)(s->Sup.len)) raiseIndexError();
		T3_ = (((NU8)(s->data[(NI)(TM_qDXzsifTQdn8ucTam9cFp4w_10)])) == ((NU8)(60)) || ((NU8)(s->data[(NI)(TM_qDXzsifTQdn8ucTam9cFp4w_10)])) == ((NU8)(62)) || ((NU8)(s->data[(NI)(TM_qDXzsifTQdn8ucTam9cFp4w_10)])) == ((NU8)(94)));
		LA4_: ;
		if (!T3_) goto LA5_;
		nimln_(452, "strformat.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		result.fill = s->data[i];
		nimln_(453, "strformat.nim");
		TM_qDXzsifTQdn8ucTam9cFp4w_11 = addInt(i, ((NI) 1));
		if ((NU)((NI)(TM_qDXzsifTQdn8ucTam9cFp4w_11)) > (NU)(s->Sup.len)) raiseIndexError();
		result.align = s->data[(NI)(TM_qDXzsifTQdn8ucTam9cFp4w_11)];
		nimln_(454, "strformat.nim");
		TM_qDXzsifTQdn8ucTam9cFp4w_12 = addInt(i, ((NI) 2));
		i = (NI)(TM_qDXzsifTQdn8ucTam9cFp4w_12);
	}
	goto LA1_;
	LA5_: ;
	{
		NIM_BOOL T8_;
		NI TM_qDXzsifTQdn8ucTam9cFp4w_13;
		nimln_(455, "strformat.nim");
		T8_ = (NIM_BOOL)0;
		T8_ = (i < (s ? s->Sup.len : 0));
		if (!(T8_)) goto LA9_;
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		T8_ = (((NU8)(s->data[i])) == ((NU8)(60)) || ((NU8)(s->data[i])) == ((NU8)(62)) || ((NU8)(s->data[i])) == ((NU8)(94)));
		LA9_: ;
		if (!T8_) goto LA10_;
		nimln_(456, "strformat.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		result.align = s->data[i];
		nimln_(457, "strformat.nim");
		TM_qDXzsifTQdn8ucTam9cFp4w_13 = addInt(i, ((NI) 1));
		i = (NI)(TM_qDXzsifTQdn8ucTam9cFp4w_13);
	}
	goto LA1_;
	LA10_: ;
	LA1_: ;
	nimln_(459, "strformat.nim");
	{
		NIM_BOOL T14_;
		NI TM_qDXzsifTQdn8ucTam9cFp4w_14;
		T14_ = (NIM_BOOL)0;
		T14_ = (i < (s ? s->Sup.len : 0));
		if (!(T14_)) goto LA15_;
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		T14_ = (((NU8)(s->data[i])) == ((NU8)(45)) || ((NU8)(s->data[i])) == ((NU8)(43)) || ((NU8)(s->data[i])) == ((NU8)(32)));
		LA15_: ;
		if (!T14_) goto LA16_;
		nimln_(460, "strformat.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		result.sign = s->data[i];
		nimln_(461, "strformat.nim");
		TM_qDXzsifTQdn8ucTam9cFp4w_14 = addInt(i, ((NI) 1));
		i = (NI)(TM_qDXzsifTQdn8ucTam9cFp4w_14);
	}
	LA16_: ;
	nimln_(463, "strformat.nim");
	{
		NIM_BOOL T20_;
		NI TM_qDXzsifTQdn8ucTam9cFp4w_15;
		T20_ = (NIM_BOOL)0;
		T20_ = (i < (s ? s->Sup.len : 0));
		if (!(T20_)) goto LA21_;
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		T20_ = ((NU8)(s->data[i]) == (NU8)(35));
		LA21_: ;
		if (!T20_) goto LA22_;
		nimln_(464, "strformat.nim");
		result.alternateForm = NIM_TRUE;
		nimln_(465, "strformat.nim");
		TM_qDXzsifTQdn8ucTam9cFp4w_15 = addInt(i, ((NI) 1));
		i = (NI)(TM_qDXzsifTQdn8ucTam9cFp4w_15);
	}
	LA22_: ;
	nimln_(467, "strformat.nim");
	{
		NIM_BOOL T26_;
		NIM_BOOL T27_;
		NI TM_qDXzsifTQdn8ucTam9cFp4w_16;
		NI TM_qDXzsifTQdn8ucTam9cFp4w_17;
		NI TM_qDXzsifTQdn8ucTam9cFp4w_18;
		T26_ = (NIM_BOOL)0;
		T27_ = (NIM_BOOL)0;
		TM_qDXzsifTQdn8ucTam9cFp4w_16 = addInt(i, ((NI) 1));
		T27_ = ((NI)(TM_qDXzsifTQdn8ucTam9cFp4w_16) < (s ? s->Sup.len : 0));
		if (!(T27_)) goto LA28_;
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		T27_ = ((NU8)(s->data[i]) == (NU8)(48));
		LA28_: ;
		T26_ = T27_;
		if (!(T26_)) goto LA29_;
		TM_qDXzsifTQdn8ucTam9cFp4w_17 = addInt(i, ((NI) 1));
		if ((NU)((NI)(TM_qDXzsifTQdn8ucTam9cFp4w_17)) > (NU)(s->Sup.len)) raiseIndexError();
		T26_ = (((NU8)(s->data[(NI)(TM_qDXzsifTQdn8ucTam9cFp4w_17)])) >= ((NU8)(48)) && ((NU8)(s->data[(NI)(TM_qDXzsifTQdn8ucTam9cFp4w_17)])) <= ((NU8)(57)));
		LA29_: ;
		if (!T26_) goto LA30_;
		nimln_(468, "strformat.nim");
		result.padWithZero = NIM_TRUE;
		nimln_(469, "strformat.nim");
		TM_qDXzsifTQdn8ucTam9cFp4w_18 = addInt(i, ((NI) 1));
		i = (NI)(TM_qDXzsifTQdn8ucTam9cFp4w_18);
	}
	LA30_: ;
	nimln_(471, "strformat.nim");
	parsedLength = parseSaturatedNatural_heAOnV8CAiOgwhPKbfpRgA(s, (&result.minimumWidth), i);
	nimln_(472, "strformat.nim");
	TM_qDXzsifTQdn8ucTam9cFp4w_19 = addInt(i, parsedLength);
	i = (NI)(TM_qDXzsifTQdn8ucTam9cFp4w_19);
	nimln_(473, "strformat.nim");
	{
		NIM_BOOL T34_;
		NI TM_qDXzsifTQdn8ucTam9cFp4w_20;
		NI parsedLengthB;
		NI TM_qDXzsifTQdn8ucTam9cFp4w_21;
		T34_ = (NIM_BOOL)0;
		T34_ = (i < (s ? s->Sup.len : 0));
		if (!(T34_)) goto LA35_;
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		T34_ = ((NU8)(s->data[i]) == (NU8)(46));
		LA35_: ;
		if (!T34_) goto LA36_;
		nimln_(474, "strformat.nim");
		TM_qDXzsifTQdn8ucTam9cFp4w_20 = addInt(i, ((NI) 1));
		i = (NI)(TM_qDXzsifTQdn8ucTam9cFp4w_20);
		nimln_(475, "strformat.nim");
		parsedLengthB = parseSaturatedNatural_heAOnV8CAiOgwhPKbfpRgA(s, (&result.precision), i);
		nimln_(476, "strformat.nim");
		TM_qDXzsifTQdn8ucTam9cFp4w_21 = addInt(i, parsedLengthB);
		i = (NI)(TM_qDXzsifTQdn8ucTam9cFp4w_21);
	}
	goto LA32_;
	LA36_: ;
	{
		nimln_(478, "strformat.nim");
		result.precision = ((NI) -1);
	}
	LA32_: ;
	nimln_(480, "strformat.nim");
	{
		NIM_BOOL T41_;
		NI TM_qDXzsifTQdn8ucTam9cFp4w_22;
		T41_ = (NIM_BOOL)0;
		T41_ = (i < (s ? s->Sup.len : 0));
		if (!(T41_)) goto LA42_;
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		T41_ = (((NU8)(s->data[i])) >= ((NU8)(65)) && ((NU8)(s->data[i])) <= ((NU8)(90)) || ((NU8)(s->data[i])) >= ((NU8)(97)) && ((NU8)(s->data[i])) <= ((NU8)(122)));
		LA42_: ;
		if (!T41_) goto LA43_;
		nimln_(481, "strformat.nim");
		if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
		result.typ = s->data[i];
		nimln_(482, "strformat.nim");
		TM_qDXzsifTQdn8ucTam9cFp4w_22 = addInt(i, ((NI) 1));
		i = (NI)(TM_qDXzsifTQdn8ucTam9cFp4w_22);
	}
	LA43_: ;
	nimln_(483, "strformat.nim");
	result.endPosition = i;
	nimln_(484, "strformat.nim");
	{
		NIM_BOOL T47_;
		tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA* e;
		NimStringDesc* T51_;
		tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA T52_;
		NimStringDesc* T53_;
		T47_ = (NIM_BOOL)0;
		nimln_(398, "system.nim");
		nimln_(484, "strformat.nim");
		T47_ = !((i == (s ? s->Sup.len : 0)));
		if (!(T47_)) goto LA48_;
		T47_ = !(ignoreUnknownSuffix);
		LA48_: ;
		if (!T47_) goto LA49_;
		e = (tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA*)0;
		nimln_(2811, "system.nim");
		e = (tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA*) newObj((&NTI_yCEN9anxCD6mzBxGjuaRBdg_), sizeof(tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA));
		(*e).Sup.Sup.m_type = (&NTI_Gi06FkNeykJn7mrqRZYrkA_);
		nimln_(486, "strformat.nim");
		T51_ = (NimStringDesc*)0;
		T52_ = dotdot__ctxq0YSon7aLz7isCROwwQstrformat(i, ((NI) 1));
		T53_ = (NimStringDesc*)0;
		T53_ = X5BX5D__lkBUIkH7j2jb0vaXPf2frAstrutils(s, T52_);
		T51_ = rawNewString(T53_->Sup.len + 37);
appendString(T51_, ((NimStringDesc*) &TM_qDXzsifTQdn8ucTam9cFp4w_23));
appendString(T51_, T53_);
		asgnRefNoCycle((void**) (&(*e).Sup.message), T51_);
		nimln_(2806, "system.nim");
		asgnRef((void**) (&(*e).Sup.parent), NIM_NIL);
		nimln_(485, "strformat.nim");
		raiseException((Exception*)e, "ValueError");
	}
	LA49_: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_LIB_PRIVATE N_NIMCALL(void, format_0qs1MYNUDLlnJxpKBIQbnA)(NimStringDesc* value, NimStringDesc* specifier, NimStringDesc** res) {
	tyObject_StandardFormatSpecifier_NDU7AW5Eu6Q69c8cH6RDouQ spec;
	NimStringDesc* T4_;
	nimfr_("format", "strformat.nim");
	nimln_(542, "strformat.nim");
	spec = parseStandardFormatSpecifier_l0Y8k5tIk0aj1kHTtFOjSw(specifier, ((NI) 0), NIM_FALSE);
	nimln_(543, "strformat.nim");
	switch (((NU8)(spec.typ))) {
	case 115:
	case 0:
	{
	}
	break;
	default:
	{
		tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA* e;
		NimStringDesc* T3_;
		e = (tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA*)0;
		nimln_(2811, "system.nim");
		e = (tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA*) newObj((&NTI_yCEN9anxCD6mzBxGjuaRBdg_), sizeof(tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA));
		(*e).Sup.Sup.m_type = (&NTI_Gi06FkNeykJn7mrqRZYrkA_);
		nimln_(547, "strformat.nim");
		T3_ = (NimStringDesc*)0;
		T3_ = rawNewString(65);
appendString(T3_, ((NimStringDesc*) &TM_qDXzsifTQdn8ucTam9cFp4w_29));
appendChar(T3_, spec.typ);
		asgnRefNoCycle((void**) (&(*e).Sup.message), T3_);
		nimln_(2806, "system.nim");
		asgnRef((void**) (&(*e).Sup.parent), NIM_NIL);
		nimln_(546, "strformat.nim");
		raiseException((Exception*)e, "ValueError");
	}
	break;
	}
	nimln_(549, "strformat.nim");
	T4_ = (NimStringDesc*)0;
	T4_ = alignString_K0KhcBUnoHPpalDPYI9b6bA(value, spec.minimumWidth, spec.align, spec.fill);
	(*res) = resizeString((*res), T4_->Sup.len + 0);
appendString((*res), T4_);
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_strformatInit000)(void) {
	nimfr_("strformat", "strformat.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_strformatDatInit000)(void) {
}

