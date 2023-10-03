// Calculate the factorial of a number using a nested loop.
#include <iostream>
using namespace std;

int main() {
    int a,i,j,choice;
    do{
            cout << "Enter a number: ";
        cin >> a;

        if (a < 0) {
            cout << "Factorial is not defined for negative numbers." << endl;
        } else {
            int factorial ;

            for (i = 1; i <= a; ++i) {
                factorial = 1; 
                for (j = 1; j <= i; ++j) {
                    factorial *= j;
                }
                
            }
            cout << "Factorial of " << a << " is: " << factorial << endl;
        }
        cout <<endl<< "Check factorial for another number? "<<endl;
        do{   
            cout << "Press 1 for yes, 2 for No"<<endl;
            cin >> choice;

            if(choice!=2 && choice!=1)
            {
                cout << "Please enter valid response "<<endl;
            }
        }while(choice!=2 && choice!=1);

        if(choice==2)
            {
                cout << "Thank you for using this program, have a great day!! ";
                break;
            }
    }while(true);
    
    return 0;
}

