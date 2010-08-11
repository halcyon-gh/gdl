#ifndef INC_GDLTreeParserTokenTypes_hpp_
#define INC_GDLTreeParserTokenTypes_hpp_

/* $ANTLR 2.7.6 (20071205): "gdlc.tree.g" -> "GDLTreeParserTokenTypes.hpp"$ */

#ifndef CUSTOM_API
# define CUSTOM_API
#endif

#ifdef __cplusplus
struct CUSTOM_API GDLTreeParserTokenTypes {
#endif
	enum {
		EOF_ = 1,
		ALL = 4,
		ASSIGN = 5,
		ASSIGN_INPLACE = 6,
		ASSIGN_REPLACE = 7,
		ASSIGN_ARRAYEXPR_MFCALL = 8,
		ARRAYDEF = 9,
		ARRAYDEF_CONST = 10,
		ARRAYIX = 11,
		ARRAYIX_ALL = 12,
		ARRAYIX_ORANGE = 13,
		ARRAYIX_RANGE = 14,
		ARRAYIX_ORANGE_S = 15,
		ARRAYIX_RANGE_S = 16,
		ARRAYEXPR = 17,
		ARRAYEXPR_FN = 18,
		ARRAYEXPR_MFCALL = 19,
		BLOCK = 20,
		BREAK = 21,
		CSBLOCK = 22,
		CONTINUE = 23,
		COMMONDECL = 24,
		COMMONDEF = 25,
		CONSTANT = 26,
		DEREF = 27,
		ELSEBLK = 28,
		EXPR = 29,
		FOR = 30,
		FOR_STEP = 31,
		FOREACH = 32,
		FOREACH_INDEX = 33,
		FOR_LOOP = 34,
		FOR_STEP_LOOP = 35,
		FOREACH_LOOP = 36,
		FOREACH_INDEX_LOOP = 37,
		FCALL = 38,
		FCALL_LIB = 39,
		FCALL_LIB_RETNEW = 40,
		IF_ELSE = 41,
		KEYDECL = 42,
		KEYDEF = 43,
		KEYDEF_REF = 44,
		KEYDEF_REF_CHECK = 45,
		KEYDEF_REF_EXPR = 46,
		LABEL = 47,
		MPCALL = 48,
		MPCALL_PARENT = 49,
		MFCALL = 50,
		MFCALL_LIB = 51,
		MFCALL_LIB_RETNEW = 52,
		MFCALL_PARENT = 53,
		MFCALL_PARENT_LIB = 54,
		MFCALL_PARENT_LIB_RETNEW = 55,
		NOP = 56,
		NSTRUC = 57,
		NSTRUC_REF = 58,
		ON_IOERROR_NULL = 59,
		PCALL = 60,
		PCALL_LIB = 61,
		PARADECL = 62,
		PARAEXPR = 63,
		POSTDEC = 64,
		POSTINC = 65,
		DECSTATEMENT = 66,
		INCSTATEMENT = 67,
		REF = 68,
		REF_CHECK = 69,
		REF_EXPR = 70,
		REPEAT = 71,
		REPEAT_LOOP = 72,
		RETURN = 73,
		RETF = 74,
		RETP = 75,
		STRUC = 76,
		SYSVAR = 77,
		UMINUS = 78,
		VAR = 79,
		VARPTR = 80,
		WHILE = 81,
		IDENTIFIER = 82,
		AND_OP = 83,
		BEGIN = 84,
		CASE = 85,
		COMMON = 86,
		COMPILE_OPT = 87,
		DO = 88,
		ELSE = 89,
		END = 90,
		ENDCASE = 91,
		ENDELSE = 92,
		ENDFOR = 93,
		ENDFOREACH = 94,
		ENDIF = 95,
		ENDREP = 96,
		ENDSWITCH = 97,
		ENDWHILE = 98,
		EQ_OP = 99,
		FORWARD = 100,
		FUNCTION = 101,
		GE_OP = 102,
		GOTO = 103,
		GT_OP = 104,
		IF = 105,
		INHERITS = 106,
		LE_OP = 107,
		LT_OP = 108,
		MOD_OP = 109,
		NE_OP = 110,
		NOT_OP = 111,
		OF = 112,
		ON_IOERROR = 113,
		OR_OP = 114,
		PRO = 115,
		SWITCH = 116,
		THEN = 117,
		UNTIL = 118,
		XOR_OP = 119,
		METHOD = 120,
		COMMA = 121,
		COLON = 122,
		END_U = 123,
		EQUAL = 124,
		DEC = 125,
		INC = 126,
		AND_OP_EQ = 127,
		ASTERIX_EQ = 128,
		EQ_OP_EQ = 129,
		GE_OP_EQ = 130,
		GTMARK_EQ = 131,
		GT_OP_EQ = 132,
		LE_OP_EQ = 133,
		LTMARK_EQ = 134,
		LT_OP_EQ = 135,
		MATRIX_OP1_EQ = 136,
		MATRIX_OP2_EQ = 137,
		MINUS_EQ = 138,
		MOD_OP_EQ = 139,
		NE_OP_EQ = 140,
		OR_OP_EQ = 141,
		PLUS_EQ = 142,
		POW_EQ = 143,
		SLASH_EQ = 144,
		XOR_OP_EQ = 145,
		MEMBER = 146,
		LBRACE = 147,
		RBRACE = 148,
		SLASH = 149,
		LSQUARE = 150,
		RSQUARE = 151,
		SYSVARNAME = 152,
		EXCLAMATION = 153,
		LCURLY = 154,
		RCURLY = 155,
		CONSTANT_HEX_BYTE = 156,
		CONSTANT_HEX_LONG = 157,
		CONSTANT_HEX_LONG64 = 158,
		CONSTANT_HEX_INT = 159,
		CONSTANT_HEX_I = 160,
		CONSTANT_HEX_ULONG = 161,
		CONSTANT_HEX_ULONG64 = 162,
		CONSTANT_HEX_UI = 163,
		CONSTANT_HEX_UINT = 164,
		CONSTANT_BYTE = 165,
		CONSTANT_LONG = 166,
		CONSTANT_LONG64 = 167,
		CONSTANT_INT = 168,
		CONSTANT_I = 169,
		CONSTANT_ULONG = 170,
		CONSTANT_ULONG64 = 171,
		CONSTANT_UI = 172,
		CONSTANT_UINT = 173,
		CONSTANT_OCT_BYTE = 174,
		CONSTANT_OCT_LONG = 175,
		CONSTANT_OCT_LONG64 = 176,
		CONSTANT_OCT_INT = 177,
		CONSTANT_OCT_I = 178,
		CONSTANT_OCT_ULONG = 179,
		CONSTANT_OCT_ULONG64 = 180,
		CONSTANT_OCT_UI = 181,
		CONSTANT_OCT_UINT = 182,
		CONSTANT_FLOAT = 183,
		CONSTANT_DOUBLE = 184,
		CONSTANT_BIN_BYTE = 185,
		CONSTANT_BIN_LONG = 186,
		CONSTANT_BIN_LONG64 = 187,
		CONSTANT_BIN_INT = 188,
		CONSTANT_BIN_I = 189,
		CONSTANT_BIN_ULONG = 190,
		CONSTANT_BIN_ULONG64 = 191,
		CONSTANT_BIN_UI = 192,
		CONSTANT_BIN_UINT = 193,
		ASTERIX = 194,
		DOT = 195,
		STRING_LITERAL = 196,
		POW = 197,
		MATRIX_OP1 = 198,
		MATRIX_OP2 = 199,
		PLUS = 200,
		MINUS = 201,
		LTMARK = 202,
		GTMARK = 203,
		LOG_NEG = 204,
		LOG_AND = 205,
		LOG_OR = 206,
		QUESTION = 207,
		STRING = 208,
		INCLUDE = 209,
		EOL = 210,
		W = 211,
		D = 212,
		L = 213,
		H = 214,
		O = 215,
		B = 216,
		EXP = 217,
		DBL_E = 218,
		DBL = 219,
		CONSTANT_OR_STRING_LITERAL = 220,
		COMMENT = 221,
		END_MARKER = 222,
		WHITESPACE = 223,
		SKIP_LINES = 224,
		CONT_STATEMENT = 225,
		END_OF_LINE = 226,
		NULL_TREE_LOOKAHEAD = 3
	};
#ifdef __cplusplus
};
#endif
#endif /*INC_GDLTreeParserTokenTypes_hpp_*/
