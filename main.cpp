#include"multiplex.h"
#include"test.h"
#include"monitor.h"
using namespace std;

int sc_main(int argc, char* argv[])
{
	sc_signal<bool> s0sig, s1sig, s2sig, enable, out;
	sc_signal<bool> i0sig, i1sig, i2sig, i3sig, i4sig, i5sig, i6sig, i7sig;
	sc_clock TestClk("Testclk", 100, SC_MS);
	//Random comment here is really important!!! CHANGED AGAIN
	sc_trace_file *TF;
	TF = sc_create_vcd_trace_file("TRACE");
	sc_trace(TF, s0sig, "S0");
	sc_trace(TF, s1sig, "S1");
	sc_trace(TF, s2sig, "S2");
	sc_trace(TF, enable, "EN");
	sc_trace(TF, i0sig, "I0");
	sc_trace(TF, i1sig, "I1");
	sc_trace(TF, i2sig, "I2");
	sc_trace(TF, i3sig, "I3");
	sc_trace(TF, i4sig, "I4");
	sc_trace(TF, i5sig, "I5");
	sc_trace(TF, i6sig, "I6");
	sc_trace(TF, i7sig, "I7");
	sc_trace(TF, out, "OUT");
	
	Test T1("Test");
	T1.ENABLE(enable);
	T1.S0(s0sig);
	T1.S1(s1sig);
	T1.S2(s2sig);
	T1.I0(i0sig);
	T1.I1(i1sig);
	T1.I2(i2sig);
	T1.I3(i3sig);
	T1.I4(i4sig);
	T1.I5(i5sig);
	T1.I6(i6sig);
	T1.I7(i7sig);
	T1.OUT(out);
	T1.clk(TestClk);

	monitor m1("Monitor");
	m1.EN(enable);
	m1.S0(s0sig);
	m1.S1(s1sig);
	m1.S2(s2sig);
	m1.I0(i0sig);
	m1.I1(i1sig);
	m1.I2(i2sig);
	m1.I3(i3sig);
	m1.I4(i4sig);
	m1.I5(i5sig);
	m1.I6(i6sig);
	m1.I7(i7sig);
	m1.OUT(out);
	

	multi8x1 M1("Multiplexer");
	M1.E(enable);
	M1.s0(s0sig);
	M1.s1(s1sig);
	M1.s2(s2sig);
	M1.I0(i0sig);
	M1.I1(i1sig);
	M1.I2(i2sig);
	M1.I3(i3sig);
	M1.I4(i4sig);
	M1.I5(i5sig);
	M1.I6(i6sig);
	M1.I7(i7sig);
	M1.OUT(out);

	
	sc_start();
	sc_close_vcd_trace_file(TF);
	sc_stop();
	
	return(0);
}
