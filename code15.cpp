//Reverse a string without using the reverse function
#include<iostream>
using namespace std;

int main() 
{
    bool playagain = true;
    do{
        
    string input;
    cout << "Enter a string: ";
    cin >> input;

    int left = 0;
    int right = input.length() - 1;

    while (left < right) 
    {
        // Swap characters at the left and right indices
        char temp = input[left];
        input[left] = input[right];
        input[right] = temp;

        // Move the left index to the right and the right index to the left
        left++;
        right--;
    }

    // reverseString(input);

    cout << "The Reversed string is: " << input << endl;

            cout <<endl<< "Would you like to reverse another string? "<<endl;
            int choice;
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
    }while (playagain==true);

    return 0;
}