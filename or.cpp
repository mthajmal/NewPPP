#include"or.h"
orgate::orgate(sc_module_name nm)
{
	SC_METHOD(or_operation);
	sensitive << i0 << i1 << i2 << i3 <<i4 << i5 << i6 << i7;
}
void orgate::or_operation()
{
	O.write(i0.read() | i1.read() | i2.read() | i3.read() | i4.read() | i5.read() | i6.read() | i7.read());
}

