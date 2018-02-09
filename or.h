#pragma once
#include<systemc.h>
SC_MODULE(orgate)
{
	sc_in<bool> i0,i1,i2,i3,i4,i5,i6,i7;
	sc_out<bool> O;
	SC_CTOR(orgate);
	void or_operation();
};
