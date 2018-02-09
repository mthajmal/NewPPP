
#include"monitor.h"
monitor::monitor(sc_module_name nm)
{
	SC_THREAD(do_monitor);
	SC_METHOD(val_monitor);
	sensitive << OUT << S0 << S1 << S2;
}
void monitor::do_monitor()
{
	cout << std::setw(10)<< "Time"<<"  ";
	cout << "EN ";
	cout << "S0 ";
	cout << "S1 ";
	cout << "S2 ";
	cout << "I0 ";
	cout << "I1 ";
	cout << "I2 ";
	cout << "I3 ";
	cout << "I4 ";
	cout << "I5 ";
	cout << "I6 ";
	cout << "I7 ";
	cout << "OUT ";
	cout << endl;
}
void monitor::val_monitor()
{
		cout << std::setw(10) << sc_time_stamp() << "  ";
		cout << EN.read() << "  ";
		cout << S0.read()<<"  ";
		cout << S1.read() << "  ";
		cout << S2.read() << "  ";

		cout << I0.read() << "  ";
		cout << I1.read() << "  ";
		cout << I2.read() << "  ";
		cout << I3.read() << "  ";
		cout << I4.read() << "  ";
		cout << I5.read() << "  ";
		cout << I6.read() << "  ";
		cout << I7.read() << "  ";
		cout << OUT.read() << endl;

	
}

