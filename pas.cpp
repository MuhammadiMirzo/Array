#include <iostream>
using namespace std;
int add (int x)
{
    int input,x;
    cout<<"Enter the value to be added in data "<<endl;
    cin>>input;   // 4
    x = x + input;  // x = 10 + 4
    return x;  // 14

}

int main()
{
    int data = 10;
    data = add(data);
    cout<<"Value in data = "<<data<<endl;
    return 0;

}
