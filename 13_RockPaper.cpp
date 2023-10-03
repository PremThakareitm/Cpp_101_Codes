#include <iostream>

using namespace std;

int main()
{

    int userchoice , computerchoice;

    
    
    cout<<" Enter your choice :( 1 for rock , 2 for paper , 3 for sciesors): \n";
      cin>>userchoice;


    if (userchoice <1 || userchoice>3){

        cout<<"invalid choice.\n";
        return 0;
        
    }
    srand((int) time(NULL));
    computerchoice = (rand()%2)+1;


    cout<<"userchoice:  ";

    switch (userchoice)
    {
    case 1:
       cout<<"rock";
        break;

    case 2:
       cout<<"paper";
        break;    

    case 3:
       cout<<"scissore";
        break;

    }

    cout<<"\n";

    cout<<"computerchoice:  ";

    switch (computerchoice )
    {
    case 1:
        cout<<"rock";
        break;

    case 2:
        cout<<"paper";
        break;    
    
    case 3:
        cout<<"scissore";
        break;

    }

    cout<<"\n";

    if (userchoice==computerchoice)
    {
        cout<<"tie 😂 \n";

    }
    else if (userchoice== 1 && computerchoice==3 ||
             userchoice== 2 && computerchoice==1 ||     
             userchoice== 3 && computerchoice==2 )
    {
       cout<<"you win 😎 \n";
    
    }

    else
    {
        cout<<"computer win 🥲 \n ";

    }
    

    
   return 0;   
}