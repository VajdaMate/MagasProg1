//g++ drill_9.cpp -o drill_9
#include "std_lib_facilities.h"
#include "Matrix.h"
#include "MatrixIO.h"
using namespace Numeric_lib;

int main()
{
	cout<<"The size of char: "<<sizeof(char)<<endl;
	cout<<"The size of short: "<<sizeof(short)<<endl;
	cout<<"The size of int: "<<sizeof(int)<<endl;
	cout<<"The size of long: "<<sizeof(long)<<endl;
	cout<<"The size of float: "<<sizeof(float)<<endl;
	cout<<"The size of double: "<<sizeof(double)<<endl;
	cout<<"The size of int*: "<<sizeof(int*)<<endl;
	cout<<"The size of double*: "<<sizeof(double*)<<endl;
	Matrix<int> a(10);
	Matrix<int> b(100);
	Matrix<double> c(10);
	Matrix<int,2> d(10,10);
	Matrix<int,3> e(10,10,10);
	cout<<"The size of Matrix<int> a(10): "<<sizeof(a)<<endl;
	cout<<"The size of Matrix<int> b(100): "<<sizeof(b)<<endl;
	cout<<"The size of Matrix<double> c(10): "<<sizeof(c)<<endl;
	cout<<"The size of Matrix<int,2> d(10,10): "<<sizeof(d)<<endl;
	cout<<"The size of Matrix<int,3> e(10,10,10): "<<sizeof(e)<<endl;

	cout<<"The number of elements in Matrix<int> a(10): "<<a.size()<<endl;
	cout<<"The number of elements in Matrix<int> b(100): "<<b.size()<<endl;
	cout<<"The number of elements in Matrix<double> c(10): "<<c.size()<<endl;
	cout<<"The number of elements in Matrix<int,2> d(10,10): "<<d.size()<<endl;
	cout<<"The number of elements in Matrix<int,3> e(10,10,10): "<<e.size()<<endl;








	
	return 0;
}