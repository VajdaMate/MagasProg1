//g++ drill_7.cpp -o drill_7
#include "std_lib_facilities.h"


int main()
{
	int a[10]= {0,1,2,3,4,5,6,7,8,9};
	vector<int>v   {0,1,2,3,4,5,6,7,8,9};
	list<int>l     {0,1,2,3,4,5,6,7,8,9};
	//int a2[10]; a2=a;
	vector<int>v2=v;
	list<int>l2=l;

	return 0;
}

