// Project:	DLX 
// Entity	Global Functions
// File		globals_fns.h
// Date:	26 Sept 2000

// Units are declared here to allow forward references between them.
// HASE automatically declares them from the .edl file but in sequence,
//only allowing backward references.

class clock;
class memory;
class instr_stack;
class scoreboard;  
class d_registers;
class xba_registers;
class addU;
class mulU;
class divU;
class fx_addU;
class incU;
class boolU;
class shiftU;
class branchU;

int pow(int, int);  // forms exponential without using doubles
char i_to_ch(int);

int get_port_no(int Qi);

bool is_a_function (int F);
