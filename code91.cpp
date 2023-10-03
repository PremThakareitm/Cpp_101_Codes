#include<iostream>
using namespace std;

int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=(2*n)-i;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
        for(int k=1;k<=i;k++)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}

