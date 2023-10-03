// Create a program to check if a given string is a palindrome.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string input;
    bool istrue=true;
    int choice;
    do
    {
    cout<<"Please enter string : ";
    cin>>input;

    int left=0;
    int right=input.length() - 1;

    for(int i=0;i<input.length();i++)
    {
        if(input[left]==input[right])
        {
            left++;
            right--;
        }
        else
        {
            istrue=false;
            break;
        }
    }
    if(istrue==false)
    {
        cout<<"Not a Palindrome";
    }
    else
    {
        cout<<"It is a palindrome";
    }
    cout <<endl<< "Check for another? "<<endl;
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