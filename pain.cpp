#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    int array[n];

    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    cin>>a;
    for (int i=0; i<n; i++)
    {
        if(array[i]==a)
            cout<<i+1<<" ";
    }







return 0;
}
