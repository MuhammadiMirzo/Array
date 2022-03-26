#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int num,d,e;
    cin>>num;

    int array[num];
    for(int i=0; i<num; i++)
    {
        cin>>array[i];
    }
    cout<<array[num-1]<<" ";

    for(int i=0;i<num-1;i++)
        {
            cout<<array[i]<<" ";
        }


    return 0;
}
