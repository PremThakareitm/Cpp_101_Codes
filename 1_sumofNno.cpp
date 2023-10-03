#include<iostream>
using namespace std;

int main()
{   
    int  n, sum=0;

    cout<<"Enter no.: ";
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        if(i == n){
            sum = sum + i;
            cout<<i;
        }
        else{
            sum =sum+i;
            cout<<i<< "+";
        }

        
    }

    cout<<" = "<<sum;
    
return 0;
}