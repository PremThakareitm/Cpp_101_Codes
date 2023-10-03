// Calculate the square and cube of a number using functions.
#include<iostream>
using namespace std;

void square(int x)
{
    int prod;
    prod=x*x;
    cout<<"The square of "<<x<<" is " <<prod<<"."<<endl;
}
void cube(int y)
{
    int cuprod;
    cuprod=y*y*y;
    cout<<"The cube of "<<y<<" is " <<cuprod<<".";
};

int main()
{
    bool playagain = true;
    int power,choice;
    cout<<"Which prcodeure would you like to perform?"<<endl;
    cout<<"1.Square"<<endl;
    cout<<"2.Cube"<<endl;
    cout<<"3.Both"<<endl;
    cin>>power;

    do{
            switch(power)
        {
            case 1:
                    int a;
                    cout<<endl<<"Please enter number - ";
                    cin>>a;
                    square(a);
                    break;
            
            case 2:
                    int b;
                    cout<<endl<<"Please enter number - ";
                    cin>>b;
                    cube(b);
                    break;

            case 3:
                    int c;
                    cout<<endl<<"Please enter number - ";
                    cin>>c;
                    square(c);
                    cube(c);
                    break;

            cout <<endl<< "Check the square or cube of another number? "<<endl;
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

        }
    }while(playagain==true);
    return 0;

}
