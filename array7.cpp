#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int num;
    cin>>num;

    int array[num];
    for(int i=0; i<num; i++)
    {
        cin>>array[i];
    }
    reverse(array,array+num);

    for(int i=0;i<num;i++){

        cout<<array[i]<<" ";

    }

    return 0;
}


