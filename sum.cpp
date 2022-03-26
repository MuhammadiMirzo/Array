#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int num,cnt=0,sum=0;
    cin>>num;
    int arr[num];
    for(i=0;i<num;i++)
    {
        cin>>arr[i];

    }
    if (arr[i]%2==0){sum=sum+arr[i];}
    if (arr[i]%2!=0) {cnt =cnt+arr[i];}
    cout<<sum<<endl;
    cout<<cnt<<endl;
    return 0;
}
