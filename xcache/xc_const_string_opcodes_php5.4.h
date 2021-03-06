/* size = 159 */
static const char *const xc_opcode_names[] = {
/* 0 */	"NOP",
/* 1 */	"ADD",
/* 2 */	"SUB",
/* 3 */	"MUL",
/* 4 */	"DIV",
/* 5 */	"MOD",
/* 6 */	"SL",
/* 7 */	"SR",
/* 8 */	"CONCAT",
/* 9 */	"BW_OR",
/* 10 */	"BW_AND",
/* 11 */	"BW_XOR",
/* 12 */	"BW_NOT",
/* 13 */	"BOOL_NOT",
/* 14 */	"BOOL_XOR",
/* 15 */	"IS_IDENTICAL",
/* 16 */	"IS_NOT_IDENTICAL",
/* 17 */	"IS_EQUAL",
/* 18 */	"IS_NOT_EQUAL",
/* 19 */	"IS_SMALLER",
/* 20 */	"IS_SMALLER_OR_EQUAL",
/* 21 */	"CAST",
/* 22 */	"QM_ASSIGN",
/* 23 */	"ASSIGN_ADD",
/* 24 */	"ASSIGN_SUB",
/* 25 */	"ASSIGN_MUL",
/* 26 */	"ASSIGN_DIV",
/* 27 */	"ASSIGN_MOD",
/* 28 */	"ASSIGN_SL",
/* 29 */	"ASSIGN_SR",
/* 30 */	"ASSIGN_CONCAT",
/* 31 */	"ASSIGN_BW_OR",
/* 32 */	"ASSIGN_BW_AND",
/* 33 */	"ASSIGN_BW_XOR",
/* 34 */	"PRE_INC",
/* 35 */	"PRE_DEC",
/* 36 */	"POST_INC",
/* 37 */	"POST_DEC",
/* 38 */	"ASSIGN",
/* 39 */	"ASSIGN_REF",
/* 40 */	"ECHO",
/* 41 */	"PRINT",
/* 42 */	"JMP",
/* 43 */	"JMPZ",
/* 44 */	"JMPNZ",
/* 45 */	"JMPZNZ",
/* 46 */	"JMPZ_EX",
/* 47 */	"JMPNZ_EX",
/* 48 */	"CASE",
/* 49 */	"SWITCH_FREE",
/* 50 */	"BRK",
/* 51 */	"CONT",
/* 52 */	"BOOL",
/* 53 */	"INIT_STRING",
/* 54 */	"ADD_CHAR",
/* 55 */	"ADD_STRING",
/* 56 */	"ADD_VAR",
/* 57 */	"BEGIN_SILENCE",
/* 58 */	"END_SILENCE",
/* 59 */	"INIT_FCALL_BY_NAME",
/* 60 */	"DO_FCALL",
/* 61 */	"DO_FCALL_BY_NAME",
/* 62 */	"RETURN",
/* 63 */	"RECV",
/* 64 */	"RECV_INIT",
/* 65 */	"SEND_VAL",
/* 66 */	"SEND_VAR",
/* 67 */	"SEND_REF",
/* 68 */	"NEW",
/* 69 */	"INIT_NS_FCALL_BY_NAME",
/* 70 */	"FREE",
/* 71 */	"INIT_ARRAY",
/* 72 */	"ADD_ARRAY_ELEMENT",
/* 73 */	"INCLUDE_OR_EVAL",
/* 74 */	"UNSET_VAR",
/* 75 */	"UNSET_DIM",
/* 76 */	"UNSET_OBJ",
/* 77 */	"FE_RESET",
/* 78 */	"FE_FETCH",
/* 79 */	"EXIT",
/* 80 */	"FETCH_R",
/* 81 */	"FETCH_DIM_R",
/* 82 */	"FETCH_OBJ_R",
/* 83 */	"FETCH_W",
/* 84 */	"FETCH_DIM_W",
/* 85 */	"FETCH_OBJ_W",
/* 86 */	"FETCH_RW",
/* 87 */	"FETCH_DIM_RW",
/* 88 */	"FETCH_OBJ_RW",
/* 89 */	"FETCH_IS",
/* 90 */	"FETCH_DIM_IS",
/* 91 */	"FETCH_OBJ_IS",
/* 92 */	"FETCH_FUNC_ARG",
/* 93 */	"FETCH_DIM_FUNC_ARG",
/* 94 */	"FETCH_OBJ_FUNC_ARG",
/* 95 */	"FETCH_UNSET",
/* 96 */	"FETCH_DIM_UNSET",
/* 97 */	"FETCH_OBJ_UNSET",
/* 98 */	"FETCH_DIM_TMP_VAR",
/* 99 */	"FETCH_CONSTANT",
/* 100 */	"GOTO",
/* 101 */	"EXT_STMT",
/* 102 */	"EXT_FCALL_BEGIN",
/* 103 */	"EXT_FCALL_END",
/* 104 */	"EXT_NOP",
/* 105 */	"TICKS",
/* 106 */	"SEND_VAR_NO_REF",
/* 107 */	"CATCH",
/* 108 */	"THROW",
/* 109 */	"FETCH_CLASS",
/* 110 */	"CLONE",
/* 111 */	"RETURN_BY_REF",
/* 112 */	"INIT_METHOD_CALL",
/* 113 */	"INIT_STATIC_METHOD_CALL",
/* 114 */	"ISSET_ISEMPTY_VAR",
/* 115 */	"ISSET_ISEMPTY_DIM_OBJ",
/* 116 */	"UNDEF",
/* 117 */	"UNDEF",
/* 118 */	"UNDEF",
/* 119 */	"UNDEF",
/* 120 */	"UNDEF",
/* 121 */	"UNDEF",
/* 122 */	"UNDEF",
/* 123 */	"UNDEF",
/* 124 */	"UNDEF",
/* 125 */	"UNDEF",
/* 126 */	"UNDEF",
/* 127 */	"UNDEF",
/* 128 */	"UNDEF",
/* 129 */	"UNDEF",
/* 130 */	"UNDEF",
/* 131 */	"UNDEF",
/* 132 */	"PRE_INC_OBJ",
/* 133 */	"PRE_DEC_OBJ",
/* 134 */	"POST_INC_OBJ",
/* 135 */	"POST_DEC_OBJ",
/* 136 */	"ASSIGN_OBJ",
/* 137 */	"OP_DATA",
/* 138 */	"INSTANCEOF",
/* 139 */	"DECLARE_CLASS",
/* 140 */	"DECLARE_INHERITED_CLASS",
/* 141 */	"DECLARE_FUNCTION",
/* 142 */	"RAISE_ABSTRACT_ERROR",
/* 143 */	"DECLARE_CONST",
/* 144 */	"ADD_INTERFACE",
/* 145 */	"DECLARE_INHERITED_CLASS_DELAYED",
/* 146 */	"VERIFY_ABSTRACT_CLASS",
/* 147 */	"ASSIGN_DIM",
/* 148 */	"ISSET_ISEMPTY_PROP_OBJ",
/* 149 */	"HANDLE_EXCEPTION",
/* 150 */	"USER_OPCODE",
/* 151 */	"UNDEF",
/* 152 */	"JMP_SET",
/* 153 */	"DECLARE_LAMBDA_FUNCTION",
/* 154 */	"ADD_TRAIT",
/* 155 */	"BIND_TRAITS",
/* 156 */	"SEPARATE",
/* 157 */	"QM_ASSIGN_VAR",
/* 158 */	"JMP_SET_VAR"
};
