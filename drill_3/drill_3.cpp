#include "std_lib_facilities.h"


class B1
{
public:
	void virtual vf() {cout<<"B1::vf"<<"\n";}
	void f() {cout<<"B1::f"<<"\n";}
};
B1 first;
first.vf();
first.f();