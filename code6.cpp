// Calculate the sum of all even numbers between 1 and N.
#include <iostream>
using namespace std;

int main() 
{
    int x,choice;
    bool doagain = true;
    do
    {
        while (true) 
    {
        cout << "Enter a positive integer: ";
        cin >> x;

        if (x > 0) {
            break; 
        } else {
            cout << "Please enter another number ." << endl;
        }
    }

    int i = 1;
    int sum = 0;

    cout << "All the Even numbers from 1 to " << x << ":" << endl;

    for(i=1; i<= x; i++) 
    {
        if(i%2==0)
        {
            cout << i << " ";
            sum=sum+i;
        }
    }
    cout <<endl<<endl<<"Sum of even numbers from 1 - "<<x<<" = "<<sum << endl;

     cout <<endl<< "Check another number? "<<endl;
        do{   
            cout << "Press 1 for yes, 2 for No"<<endl;
            cin >> choice;

            if(choice!=1 && choice!=2)
            {
                cout << "Please enter valid response "<<endl;
            }
        }while(choice!=2 && choice!=1);

        if(choice==2)
            {
                doagain=false;
                cout << "Thank you for using this program, have a great day!! ";
            }
    }while(doagain == true);
    return 0;
}
