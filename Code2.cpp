//Implement a program to check if a given number is prime or not.

#include <iostream>
using namespace std;

int main(){
    int n;
    int a=0;
    cout<<"Enter a Number:"<<endl;
    cin >> n;
    for (int i=1; i<=n; i++){
        if (n%i==0){
            a+=1;
        }
    }
    if (a>2){
        cout<<n<<" Not prime"<<endl;
    }
    else{
        cout<<n<<" is Prime"<<endl;
    }
    return 0;
}