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
    }
    for(int i = 0; i<num; i++)
    {
        if(arr[i]!=arr[i+1])
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
