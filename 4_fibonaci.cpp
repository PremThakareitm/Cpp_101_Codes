#include<iostream>

using namespace std;
 
 // addition of two no.

int main()
{

    int n , a=0, b=1, series = 0;

    cout<<"Enter your no.\n";
    cin >> n;

    for ( int i = 1; i < n ; i++)
    {
        if (i==1){
            cout<<"your series is\n" << a <<"\n" << b <<"\n" ;
        }
            series =a+b;
            a=b;
            b=series;

            cout<< series << "\n";

    }
    
    return 0;
}