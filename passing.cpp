#include <iostream>
using namespace std;

void fun(int a)
{
	a=20;

}
int main()
{
	int a =10,b;

	fun(a);

	cout<<"Value of A: "<<a<<endl;
	return 0;
}
