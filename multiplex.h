#pragma once
#include<systemc.h>
#include"and.h"
#include"or.h"
#include"not.h"
SC_MODULE(multi8x1)
{
	sc_in<bool> s0, s1, s2;
	sc_in<bool> E;
	sc_in<bool> I0, I1, I2, I3, I4, I5, I6, I7;
	sc_signal<bool> nots0, nots1, nots2;
	sc_signal<bool> sig0, sig1, sig2, sig3, sig4, sig5, sig6, sig7;
	sc_out<bool> OUT;
	andgate a0, a1, a2, a3, a4, a5, a6, a7;
	orgate o0;
	notgate n0, n1, n2;
	SC_CTOR(multi8x1);
	void multi_op();

};
