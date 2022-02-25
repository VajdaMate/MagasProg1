//g++ drill_3.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
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