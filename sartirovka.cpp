#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n,k,cnt=0;
    cout<<"Enter your number: ";
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for(int i=0; i<n; i++)
    {
        if(a[i]==k) cnt++;
    }
    cout<

    <cnt<<" ";

    return 0;
}


