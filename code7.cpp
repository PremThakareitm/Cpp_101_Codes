// Write a program that checks if a number is a perfect number.
#include <iostream>
using namespace std;

// Function to check if a number is a perfect number
bool ispn(int num) 
{
    int sum = 0;

    for (int i = 1; i <= num / 2; i++) 
    {
        if (num % i == 0) 
        {
            sum =sum+i; // Add the divisor to the sum
        }
    }

    return sum == num; // Check if the sum of divisors is equal to the number
}

int main() 
{
    int n,choice;
    bool playagain = true;
    cout << endl<<endl<<"A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding itself. \nFor example, 28 is a perfect number \nbecause its divisors (1, 2, 4, 7, and 14) add up to 28.";

    do{

        while (true) 
        {
            cout << endl<<endl<<"Enter a number to check if it's a perfect number: ";
            cin >> n;

            if (n > 0)
            {
                break; // Exit the loop if the number is valid
            } else 
            {
                cout << "Please enter a number greater than 0." << endl;
            }
        }

        if (ispn(n)) 
        {
            cout << n << " is a perfect number." << endl;
        } 
        else 
        {
            cout << n << " is not a perfect number." << endl;
        }

        cout <<endl<< "Check another number? "<<endl;
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
