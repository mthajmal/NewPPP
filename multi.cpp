#include"multiplex.h"
multi8x1::multi8x1(sc_module_name nm) :a0("A0"), a1("A1"), a2("A2"), a3("A3"), a4("A4"), a5("A5"), a6("A6"), a7("A7"), o0("O0"), n0("N0"), n1("N1"), n2("N2")
{
	n0.X(s0);
	n0.Y(nots0);

	n1.X(s1);
	n1.Y(nots1);

	n2.X(s2);
	n2.Y(nots2);
//Here, the comment is unnecessary, but we done...
	a0.A(nots0);
	a0.B(nots1);
	a0.C(nots2);
	a0.IN(I0);
	a0.EN(E);
	a0.D(sig0);

	a1.A(nots0);
	a1.B(nots1);
	a1.C(s2);
	a1.IN(I1);
	a1.EN(E);
	a1.D(sig1);

	a2.A(nots0);
	a2.B(s1);
	a2.C(nots2);
	a2.IN(I2);
	a2.EN(E);
	a2.D(sig2);

	a3.A(nots0);
	a3.B(s1);
	a3.C(s2);
	a3.IN(I3);
	a3.EN(E);
	a3.D(sig3);

	a4.A(s0);
	a4.B(nots1);
	a4.C(nots2);
	a4.IN(I4);
	a4.EN(E);
	a4.D(sig4);

	a5.A(s0);
	a5.B(nots1);
	a5.C(s2);
	a5.IN(I5);
	a5.EN(E);
	a5.D(sig5);

	a6.A(s0);
	a6.B(s1);
	a6.C(nots2);
	a6.IN(I6);
	a6.EN(E);
	a6.D(sig6);

	a7.A(s0);
	a7.B(s1);
	a7.C(s2);
	a7.IN(I7);
	a7.EN(E);
	a7.D(sig7);

	o0.i0(sig0);
	o0.i1(sig1);
	o0.i2(sig2);
	o0.i3(sig3);
	o0.i4(sig4);
	o0.i5(sig5);
	o0.i6(sig6);
	o0.i7(sig7);
	o0.O(OUT);
}
