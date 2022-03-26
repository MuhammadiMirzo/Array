#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cout<<"Array["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<"Array = {";
    for(int i=0;i<num;i++)
    {
        cout<<arr[i];
        if (i!=num-1)
        {
            cout<<",";
        }

    }
    cout<<"}";
}
