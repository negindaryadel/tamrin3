#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout<<"please enter size snake"<<endl;
    cin>>n;
    for(int i=0 ; i<n/2;i++)
    {
        cout<<"*#";
    }
    if (n%2 !=0 )
    {

        cout<<"*";
    }
    return 0;
}
