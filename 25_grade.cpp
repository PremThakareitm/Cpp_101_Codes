#include <iostream>
using namespace std;

int main()
{ 
   int g;
    cout<<"Enter your grade : ";
    cin>>g;

    if (g>=90)
    {
        cout<<"you got a = 'A' grade ";
    }
    else if (g>=80 && g<90)
    {
        cout<<"you got a = 'B' grade ";
    }
    else if (g>=70 && g<80)
    {
        cout<<"you got a = 'C' grade ";
    }
    else if (g>=50 && g<70)
    {
        cout<<"you got a = 'D' grade ";
    }
    else if (g>=40 && g<50)
    {
        cout<<"you got a = 'E' grade ";
    }
    else
    {
        cout<<"you got a = 'f' grade ";
    }
    
    
    
    
    

}