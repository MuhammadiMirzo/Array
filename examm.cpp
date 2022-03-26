#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num,cnt=0;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cout<<"Array["<<i<<"] = ";
        cin>>arr[i];
        cnt=cnt+arr[i];
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
    cout<<"}"<<endl;
    cout<<"Srednoye arifmeticheskoye = "<<cnt/(float)num;
}

