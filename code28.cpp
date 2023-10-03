// Create a program to find the sum of even numbers from 1 to N using a while loop.
#include <iostream>
using namespace std;

int main() 
{
    int n,choice;
    bool playagain = true;
    
    do{
        while (true) {
        cout << "Enter a positive integer: ";
        cin >> n;

        if (n > 0) {
            break; // Exit the loop if the number is valid
        } else {
            cout << "Please enter a number greater than 0." << endl;
        }
    }

    int i = 1;
    int sum = 0;

    cout << "Even numbers from 1 to " << n << ":" << endl;

    while (i <= n) {
        if(i%2==0){
            cout << i << " ";
            sum=sum+i;
        }
        i++;
    }
    cout << "\n\nSum of even numbers from 1 - "<<n<<" = "<<sum << endl;

        cout <<endl<< "Check for another number? "<<endl;
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
                playagain=false;
                cout << "Thank you for using this program, have a great day!! ";
            }

    }while(playagain==true);
    return 0;

}