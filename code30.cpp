// Calculate the product of digits of a number using a while loop.
#include <iostream>
using namespace std;

int main() 
{
    int a,product=1,dig,choice;
    bool playagain=true;
    


    do{
        cout << "Enter a positive integer: ";
        cin >> a;

        if (a<0)
        {
            cout<<"Please enter positive integer";
        }
        else
        {      
            while (a > 0) 
            {
                dig = a % 10; 
                product = product*dig;      
                a = a/10;                    
            }               
        }
        cout << "The product of the digits is: " << product << endl;
        do
        {   
            cout <<endl<< "Check another number? "<<endl;
            cout << "Press 1 for yes, 2 for No"<<endl;
            cin >> choice;
                if(choice!=1 && choice!=2)
                {
                    cout << "Please enter valid response "<<endl;
                }
        }while(choice!=2 && choice!=1);
            
            if(choice==1)
            {
                playagain=true;
                product=1;
            }

            if(choice==2)
                {
                    playagain=false;
                    cout << "Thank you for using this program, have a great day!! ";
                }
    }while(playagain==true);
    
    
    
    return 0;
}