// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, fact=1;
     
//     cout<<"Enter number : ";
//     cin>>n;

//     for (int i = 1; i <=n; i++)
//     {
//         fact=fact*i;

//         cout<<"Factorial  of "<<i<<" is = "<<fact<<"\n";

//     }
// return 0;
// }




//Including Streaming library 
#include <iostream>

//Std namespace for the program
using namespace std;


//Fact function to calculate the factorial and check For conditions
int fact(int* n)
{
    int ans = 1 ;

    //error condition
    if (*n < 0)
    {
        cout<<"\nERROR : \nCANNOT PRINT FACTORIAL OF NEGATIVE NUMBER  \n \n";
        //reasking the user in hope to get input of a whole number
        cout<<"Please Input some factorisable Number : \n";
        cin>>*n;
        //Recursion of function after accepting a new input for n variable
        fact(n);

    }

    //Factorial of zero is 1 so Hardcoding the return to 1
    else if(*n == 0)
    {
        
        return 1; 
    }

    //Now for positive number greater than zero
    else
    {

         //Put brackets to get the sequence in organised
        cout<<"\n\n(";

        //Priting the sequence of factorial to show the way answer came
        for(int i = *n ; i>0 ; i--)
        {
            if(i == 1) //Using this to get the last number to not end with multiplication sign
            {
                cout<<i;
            }
            else //To Print the whole sequence decrementing from input to 1
            {
                cout<<i<<"X";
            }
        }

        cout<<") \n\n";//Closing the bracket and adding new line

        int a = *n;//Did this so it is easier to understand the logic and less of error

        //Loop for getting the solution
        for(int i = 1 ; i <= a ; i++)//Work on incrementing the i till the user input and multiplying a variable"ans" with i and updating it after each loop
        {
            ans = ans*i;
        }
        
    }

    //Returning the answer to the main loop
    return ans;
   
}


//Entrance for executor
int main()
{
    //Declaration
    int n , factorial;

    cout<<"WELCOME TO FACTORIAL GENERATOR\n\n";
    cout<<"Enter the Number you want factorial of : \n";
    cin>>n;

    //Using pointer to get updated value from the function
    int * ptrn = &n;

    //Storing the value and calling the function
    factorial = fact(ptrn);


    cout<<"Factorial of "<<n<<" is : "<<factorial<<"\n\n\n" ;

    

    //Essential
    return 0;
}



//Used pointer to get the input to be updated after reasking user which will be printed in solutio