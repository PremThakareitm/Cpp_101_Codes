#include <iostream>
using namespace std;

int main()
{
    int num1, num2 , num3;

    cout<<"Enter numbers : \n";
    cin>>num1>>num2>>num3;

   if (num1>num2)
   {
       if (num1>num3)
         {
          cout<<"Largest no. is: "<<num1;
        }else{
            cout<<"Largest no. is: "<<num3;
        }
    } 

    else
    {
        if (num2>num3)
        {
           cout<<"Largest no. is : "<<num2;
        } else{

          cout<<"Largest no. is : "<<num3;
        }
    
    }
       
    
    
 return 0;
}