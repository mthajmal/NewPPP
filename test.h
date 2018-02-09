#pragma once
#include<systemc.h>

SC_MODULE(Test)
{
	sc_in<bool> clk, OUT;
	sc_out<bool> S0, S1, S2, I0, I1, I2, I3, I4, I5, I6, I7, ENABLE;
	SC_CTOR(Test);
	void stimgen();
};
