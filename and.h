#pragma once
#include<systemc.h>
SC_MODULE(andgate)
{
	sc_in<bool> A, B, C, EN, IN;
	sc_out<bool> D;
	SC_CTOR(andgate);
	void and_operation();
};
