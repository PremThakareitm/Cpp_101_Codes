// Write a program to print all natural numbers from 1 to N using a while loop.
#include<iostream>
using namespace std;

int main()
{
    int i,p=0;
    int format,choice;
    bool playagain =true;

    cout<<"Please enter upper limit - ";
    cin>>i;
    cout<<"What format would you like to print the numbers? "<<endl;
    cout<<"1.Vertical"<<endl;
    cout<<"2.Horizontal"<<endl;
    cin>>format;
    cout<<endl;

    do{
        switch(format)
    {
            case 1:
                while(i>p)
                {
                    p++;
                    cout<<p<<endl;
                }
                break;

            case 2:
                while(i>p)
                {
                    p++;
                    cout<<p<<" ";
                }
                break;
    }
    cout <<endl<< "Print sequence for another number? "<<endl;
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