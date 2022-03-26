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
    sort (array,array+n);

    cout<<array[n-1];





    return 0;
}
