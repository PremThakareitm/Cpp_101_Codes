#include <iostream>
using namespace std;

int main()
{
    double num1, num2 , sum ;
    int choice;

    cout<<"Enter first no. : ";
    cin>>num1;
    cout<<"Enter second no. : ";
    cin>>num2;

    cout<<"Enter your choice : (1.'+' 2.'-' 3.'*' 4.'/' 5.'%') : ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"sum of "<<num1<<" + "<<num2<< " is = " <<num1+num2;
        break;

    case 2:
        cout<<"sum of " <<num1<<" - "<<num2<< " is = " <<num1-num2;
        break;

    case 3:
        cout<<"sum of "<<num1<<" * "<<num2<< " is = " <<num1*num2;
        break;      

    case 4:
        cout<<"sum of "<<num1<<" / "<<num2<< " is = " <<num1/num2;
        break;

    case 5:
        cout<<"sum of "<<num1<<" % "<<num2<< " is = " <<int(num1)%int(num2);
        break;    
   
    }

return 0;
}