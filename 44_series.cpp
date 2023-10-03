
#include <iostream>

using namespace std;

int main(){

    int n , p = 0 , q = 1 ;
    float sum = 0;
    char opr = '+';

    cout<<"Number you want series till : \n";
    cin>>n;

    while(n>0)
    {
        for(int i = 1 ; i <= n ; i++)
        {
            p = i;
                
            q =+ q*i;

            if(i == n)
            {
                    
                cout<<p<<"/"<<q<<" = "<<sum+(float(p)/float(q))<<"\n\n";
                return 0;

                    
            }
            else
            {
                cout<<p<<"/"<<q<<" + ";
                sum += float(p)/float(q);
            }
            
            
            
                
        }
    }   
    

    cout<<"Invalid input please put positive number greater than zero ..Thank you\n\n";

    return 0;
}