#include"not.h"
notgate::notgate(sc_module_name nm)
{
	SC_METHOD(not_operation);
	sensitive << X;
}
void notgate::not_operation()
{
	Y.write(!(X.read()));
}

