#include <iostream>
using namespace std;

int main(){

    double n , sum = 0;
    char opr;

    cout<<"Enter series: ";
    cin>>n;

    while (n>0)
    {
        for (int i = 1; i <=n; i++)
        {
           int p = 1 ;
              if(i%2==0)
            {
               opr='+';
            }

               else
            {
               opr='-';
            }
        
            if (i ==n)
            {    
                cout<<p<<"/"<<i<<" = ";
            }
            else 
            {
              cout<<p<<"/"<<i<<" "<<opr<<" " ;
            }

            if (opr=='-')
            {
               sum += float(p)/float(i);
            }
       
            else
            {
               sum -= float(p)/float(i);
            }

            
        }

        cout<<sum;
        return 0;
            
    }
    cout<<"enter valid no.";
    return 0;
}