#include <iostream>
using namespace std;

void towersofhanoi(int start, int end, char source, char aux, char destination)
{
    if(start>end)
    {
        return;
    }
    towersofhanoi (start, end-1, source, destination, aux);
    cout<<"move disk"<<end<<"from"<<source<<"to"<<destination<<endl; 
    towersofhanoi (start, end-1, aux, source, destination);
}
int main()
{
int choice;
bool doagain=true;
do
{
    int n;
    cout<<"Please enter the number of disks - ";
    cin>>n;
    towersofhanoi(1,n,'A','B','C');

    cout <<endl<< "Check for another number of disks? "<<endl;
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
}

