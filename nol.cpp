#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,cnt;
    cin>>n;
    while(n!=0)
    {
        if(n%10==0) cnt++;
        n=n/10;
    }
    cout<<cnt;
}
