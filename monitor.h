#pragma once
#include<systemc.h>
#include<iomanip>
#include<iostream>
SC_MODULE(monitor)
{
	sc_in<bool> EN, S0, S1, S2, I0, I1, I2, I3, I4, I5, I6, I7, OUT;
	SC_CTOR(monitor);
	void do_monitor();
	void val_monitor();
};
