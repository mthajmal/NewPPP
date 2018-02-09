#pragma once
#include<systemc.h>
SC_MODULE(notgate)
{
	sc_in<bool> X;
	sc_out<bool> Y;

	SC_CTOR(notgate);
	void not_operation();
	
};
