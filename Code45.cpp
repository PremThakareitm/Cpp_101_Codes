//Define an array of integers and display its elements.

#include <iostream>
using namespace std;

// int main() {
//     int myArray[5];

//     myArray[0] = 10;
//     myArray[1] = 20;
//     myArray[2] = 30;
//     myArray[3] = 40;
//     myArray[4] = 50;

//     cout << "Elements of the array:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << "Element " << i << ": " << myArray[i] << endl;
//     }
//     return 0;
// }

int main() {
    int n;
    cout<<"Number of elements:";
    cin>>n;
    int myArray[n];

    for (int i = 0; i <= n; i++) {
        cout<<"Element :"<<endl;
        cin>>myArray[i];
    }
    for (int i = 0; i <= n; i++) {
    cout << "Element " << i << ": " << myArray[i] << endl;
    }
    return 0;
}