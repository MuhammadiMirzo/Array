#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int num,cnt=1;
   cin>>num;
    int arr[1000];
    for(int i=0; i<num; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i<num-1; i++)
    {
        if(arr[i+1]!=arr[i])
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}

