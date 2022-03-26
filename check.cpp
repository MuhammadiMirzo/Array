#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int num,cnt=0;
    cin>>num;
    int arr[num];
    for(int i=0; i<num; i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
        {
            cnt++;
        }
        cout<<cnt<<" ";
    }
    cout<<cnt;
     return 0;
}
