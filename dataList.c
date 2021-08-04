#include <stdio.h>
#include <stdlib.h>

typedef enum opcodes 
{
	ADD_OP = 0,
	SUB_OP = 0,
	AND_OP = 0,
	OR_OP = 0,
	NOR_OP = 0,
	MOVE_OP = 1,
	MVHI_OP = 1,
	MVLO_OP = 1,
	ADDI_OP = 10,
	SUBI_OP = 11,
	ANDI_OP = 12,
	ORI_OP = 13,
	NORI_OP = 14,
	BNE_OP = 15,
	BEQ_OP = 16,
	BLT_OP = 17,
	BGT_OP = 18,
	LB_OP = 19,
	SB_OP = 20,
	LW_OP = 21,
	SW_OP = 22,
	LH_OP = 23,
	SH_OP = 24,
	JMP_OP = 30,
	LA_OP = 31,
	CALL_OP = 32,
	STOP_OP = 63
}opcode;

typedef enum funct 
{
	ADD_FUNCT = 1,
	SUB_FUNCT = 2,
	AND_FUNCT = 3,
	OR_FUNCT = 4,
	NOR_FUNCT = 5,
	MOVE_FUNCT = 1,
	MVHI_FUNCT = 2,
	MVLO_FUNCT = 3,
	
	NONE_FUNCT = 0
} funct;

struct cmd_lookup_element 
{
	char *cmd;
	char type;
	int fun; /*funct*/
	int op; /*opcode*/
};

static struct cmd_lookup_element lookup_table[] = 
{
		{"add", R, ADD_FUNCT, ADD_OP},
		{"sub", R, SUB_FUNCT, SUB_OP},
		{"and", R, AND_FUNCT, AND_OP},
		{"or", R, OR_FUNCT, OR_OP},
		{"nor", R, NOR_FUNCT, NOR_OP},
		{"move",R, MOVE_FUNCT, MOVE_OP},
		{"mvhi", R, MVHI_FUNCT, MVHI_OP},
		{"mvlo", R, MVLO_FUNCT, MVLO_OP},
		{"addi", I, NONE_FUNCT, ADDI_OP},
		{"subi", I, NONE_FUNCT, SUBI_OP},
		{"andi", I, NONE_FUNCT, ANDI_OP},
		{"ori", I, NONE_FUNCT, ORI_OP},
		{"nori", I, NONE_FUNCT, NORI_OP},
		{"bne", I, NONE_FUNCT, BNE_OP},
		{"beq", I, NONE_FUNCT, BEQ_OP},
		{"blt", I, NONE_FUNCT, BLT_OP},
		{"bgt", I, NONE_FUNCT, BGT_OP},
		{"lb", I, NONE_FUNCT, LB_OP},
		{"sb", I, NONE_FUNCT, SB_OP},
		{"lw", I, NONE_FUNCT, LW_OP},
		{"sw", I, NONE_FUNCT, SW_OP},
		{"lh", I, NONE_FUNCT, LH_OP},
		{"sh", I, NONE_FUNCT, SH_OP},
		{"jpm", J, NONE_FUNCT, JPM_OP},
		{"la", J, NONE_FUNCT, LA_OP},
		{"call", J, NONE_FUNCT, CALL_OP},
		{"stop", J, NONE_FUNCT, STOP_OP},
		{NULL, NONE_OP, NONE_FUNCT}
};

typedef enum registers {
	$0 = 0,
	$1,
	$2,
	$3,
	$4,
	$5,
	$6,
	$7,
	$8,
	$9,
	$10,
	$11,
	$12,
	$13,
	$14,
	$15,
	$16,
	$18,
	$19,
	$20,
	$21,
	$22,
	$23,
	$24,
	$25,
	$26,
	$27,
	$28,
	$29,
	$30,
	$31,
	NONE_REG = -1
} reg;
}
