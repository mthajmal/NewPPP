#include"and.h"
andgate::andgate(sc_module_name nm)
{
	SC_METHOD(and_operation);
	sensitive << EN << IN << A << B << C;
}
void andgate::and_operation()
{
	D.write(EN.read() & IN.read() & A.read() & B.read() & C.read());
}

