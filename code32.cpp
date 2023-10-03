// Print tables.
#include<iostream>
using namespace std;
int main()
{
    bool playagain=true;
    int choice;
    do
    {
        int a,prod;
        int i=1;
        cout<<"Please enter a number - ";
        cin>>a;

        for(i=1;i<=10;i++)
        {
            prod=a*i;
            cout<<a<<" X "<<i<<" = "<<prod<< endl;    
        }

         cout <<endl<< "Print table for another number? "<<endl;
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
    } while (playagain==true);
        
    
    
}