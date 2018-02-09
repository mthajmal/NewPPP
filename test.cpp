#include"test.h"
#include"multiplex.h"
Test::Test(sc_module_name nm)
{
	SC_THREAD(stimgen);
	sensitive << clk;
	dont_initialize();
}
void Test::stimgen()
{
	cout << "Test started" << endl;

	ENABLE.write(true);
	//checking I0;
	S0.write(false);
	S1.write(false);
	S2.write(false);
	
	I0.write(true);  //I0 1;
	I1.write(false);
	I2.write(false);
	I3.write(false);
	I4.write(false);
	I5.write(false);
	I6.write(false);
	I7.write(false);
	wait();

	I0.write(false); //I0 0;
	I1.write(true);
	I2.write(true);
	I3.write(true);
	I4.write(true);
	I5.write(true);
	I6.write(true);
	I7.write(true);
	wait();

	//checking I1;
	S0.write(false);
	S1.write(false);
	S2.write(true);

	I0.write(false);
	I1.write(true); //I1=1;
	I2.write(false);
	I3.write(false);
	I4.write(false);
	I5.write(false);
	I6.write(false);
	I7.write(false);
	wait();

	I0.write(true);
	I1.write(false); //I1=0;
	I2.write(true);
	I3.write(true);
	I4.write(true);
	I5.write(true);
	I6.write(true);
	I7.write(true);
	wait();

	//checking I3;
	S0.write(false);
	S1.write(true);
	S2.write(true);

	I0.write(false);
	I1.write(false);
	I2.write(false);
	I3.write(true); //I3=1;
	I4.write(false);
	I5.write(false);
	I6.write(false);
	I7.write(false);
	wait();

	I0.write(true);
	I1.write(true);
	I2.write(true);
	I3.write(false); //I3=0;
	I4.write(true);
	I5.write(true);
	I6.write(true);
	I7.write(true);
	wait();

	//checking I2;
	S0.write(false);
	S1.write(true);
	S2.write(false);

	I0.write(false);
	I1.write(false);
	I2.write(true); //I2=1;
	I3.write(false); 
	I4.write(false);
	I5.write(false);
	I6.write(false);
	I7.write(false);
	wait();

	I0.write(true);
	I1.write(true);
	I2.write(false); //I2=0;
	I3.write(true); 
	I4.write(true);
	I5.write(true);
	I6.write(true);
	I7.write(true);
	wait();

	//checking I6;
	S0.write(true);
	S1.write(true);
	S2.write(false);

	I0.write(false);
	I1.write(false);
	I2.write(false);
	I3.write(false);
	I4.write(false);
	I5.write(false);
	I6.write(true); //I6=1;
	I7.write(false);
	wait();

	I0.write(true);
	I1.write(true);
	I2.write(true);
	I3.write(true);
	I4.write(true);
	I5.write(true);
	I6.write(false); //I6=0;
	I7.write(true);
	wait();

	//checking I7;
	S0.write(true);
	S1.write(true);
	S2.write(true);

	I0.write(false);
	I1.write(false);
	I2.write(false);
	I3.write(false);
	I4.write(false);
	I5.write(false);
	I6.write(false);
	I7.write(true); //I7=1;
	wait();

	I0.write(true);
	I1.write(true);
	I2.write(true);
	I3.write(true);
	I4.write(true);
	I5.write(true);
	I6.write(true);
	I7.write(false); //I7=0;
	wait();

	//checking I5;
	S0.write(true);
	S1.write(false);
	S2.write(true);

	I0.write(false);
	I1.write(false);
	I2.write(false);
	I3.write(false);
	I4.write(false);
	I5.write(true); //I5=1;
	I6.write(false);
	I7.write(false); 
	wait();

	I0.write(true);
	I1.write(true);
	I2.write(true);
	I3.write(true);
	I4.write(true);
	I5.write(false); //I5=0;
	I6.write(true);
	I7.write(true); 
	wait();

	//checking I4;
	S0.write(true);
	S1.write(false);
	S2.write(false);

	I0.write(false);
	I1.write(false);
	I2.write(false);
	I3.write(false);
	I4.write(true); //I4=1;
	I5.write(false); 
	I6.write(false);
	I7.write(false);
	wait();

	I0.write(true);
	I1.write(true);
	I2.write(true);
	I3.write(true);
	I4.write(false); //I4=0;
	I5.write(true); 
	I6.write(true);
	I7.write(true);
	wait();

	ENABLE.write(false);
	//checking I0;
	S0.write(false);
	S1.write(false);
	S2.write(false);

	I0.write(true);  //I0 1;
	I1.write(false);
	I2.write(false);
	I3.write(false);
	I4.write(false);
	I5.write(false);
	I6.write(false);
	I7.write(false);
	wait();

	I0.write(false); //I0 0;
	I1.write(true);
	I2.write(true);
	I3.write(true);
	I4.write(true);
	I5.write(true);
	I6.write(true);
	I7.write(true);
	wait();

	//checking I1;
	S0.write(false);
	S1.write(false);
	S2.write(true);

	I0.write(false);
	I1.write(true); //I1=1;
	I2.write(false);
	I3.write(false);
	I4.write(false);
	I5.write(false);
	I6.write(false);
	I7.write(false);
	wait();

	I0.write(true);
	I1.write(false); //I1=0;
	I2.write(true);
	I3.write(true);
	I4.write(true);
	I5.write(true);
	I6.write(true);
	I7.write(true);
	wait();

	//checking I3;
	S0.write(false);
	S1.write(true);
	S2.write(true);

	I0.write(false);
	I1.write(false);
	I2.write(false);
	I3.write(true); //I3=1;
	I4.write(false);
	I5.write(false);
	I6.write(false);
	I7.write(false);
	wait();

	I0.write(true);
	I1.write(true);
	I2.write(true);
	I3.write(false); //I3=0;
	I4.write(true);
	I5.write(true);
	I6.write(true);
	I7.write(true);
	wait();

	//checking I2;
	S0.write(false);
	S1.write(true);
	S2.write(false);

	I0.write(false);
	I1.write(false);
	I2.write(true); //I2=1;
	I3.write(false);
	I4.write(false);
	I5.write(false);
	I6.write(false);
	I7.write(false);
	wait();

	I0.write(true);
	I1.write(true);
	I2.write(false); //I2=0;
	I3.write(true);
	I4.write(true);
	I5.write(true);
	I6.write(true);
	I7.write(true);
	wait();

	//checking I6;
	S0.write(true);
	S1.write(true);
	S2.write(false);

	I0.write(false);
	I1.write(false);
	I2.write(false);
	I3.write(false);
	I4.write(false);
	I5.write(false);
	I6.write(true); //I6=1;
	I7.write(false);
	wait();

	I0.write(true);
	I1.write(true);
	I2.write(true);
	I3.write(true);
	I4.write(true);
	I5.write(true);
	I6.write(false); //I6=0;
	I7.write(true);
	wait();

	//checking I7;
	S0.write(true);
	S1.write(true);
	S2.write(true);

	I0.write(false);
	I1.write(false);
	I2.write(false);
	I3.write(false);
	I4.write(false);
	I5.write(false);
	I6.write(false);
	I7.write(true); //I7=1;
	wait();

	I0.write(true);
	I1.write(true);
	I2.write(true);
	I3.write(true);
	I4.write(true);
	I5.write(true);
	I6.write(true);
	I7.write(false); //I7=0;
	wait();

	//checking I5;
	S0.write(true);
	S1.write(false);
	S2.write(true);

	I0.write(false);
	I1.write(false);
	I2.write(false);
	I3.write(false);
	I4.write(false);
	I5.write(true); //I5=1;
	I6.write(false);
	I7.write(false);
	wait();

	I0.write(true);
	I1.write(true);
	I2.write(true);
	I3.write(true);
	I4.write(true);
	I5.write(false); //I5=0;
	I6.write(true);
	I7.write(true);
	wait();

	//checking I4;
	S0.write(true);
	S1.write(false);
	S2.write(false);

	I0.write(false);
	I1.write(false);
	I2.write(false);
	I3.write(false);
	I4.write(true); //I4=1;
	I5.write(false);
	I6.write(false);
	I7.write(false);
	wait();

	I0.write(true);
	I1.write(true);
	I2.write(true);
	I3.write(true);
	I4.write(false); //I4=0;
	I5.write(true);
	I6.write(true);
	I7.write(true);
	wait();

}