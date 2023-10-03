#include <iostream>
using namespace std;

int main(){

    int first,second,small,big;
     
     cout<<"Enter first no.: ";
     cin>>first;

     cout<<"Enter second no.: ";
     cin>>second;



     if ( first>= second)
     {
        small=first;
        big=second;
     }

     else  
     {
        small= second;
        big=first;
     }
     
     while (first >=0 && second >=0)
     {
         for (int i = 1; i<=small; i++)
         {
            if (((big*i)% small)==0)
            {
               cout<<"lcm is: "<<(big*i);
               return 0;

            }
        
         }
         return 0;

      }   
     


 return 0;
}