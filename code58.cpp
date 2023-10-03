// Implement a program to rotate an array to the left by N positions.
#include <iostream>
using namespace std;

void rotateArray(int arr[],int size, int pos)
{
    //reducing positions to a value less than size to reduce extra position shifts
    pos %= size;                           

    //initialising a temporary array to store 'position' values
    int temp[pos];                               

    //copying first 'position' elements into temp array
    for(int i = 0; i < pos; i++)
    {                
        temp[i] = arr[i];
    }

    //copying latter values of original array into first 'pos' positions
    for(int i = pos; i < size; i++)
    {             
        arr[i-pos]=arr[i];
    }

    //copying values from temp array to the indexes after 'positions' indexes
    for(int i = 0; i < pos; i++)
    {                
        arr[size - pos + i ] =temp[i];
    }
}

int main(){
    int size,positions;

    cout << "Enter how many numbers are in the array : ";
    cin >> size;

    //initialising array of size input by the user
    int arr[size]; 

    cout << "Enter numbers into the array :\n";
    //iterating through the array and inputting values at each index
    for(int i=0 ;i<size;++i){
        cin >> arr[i];
    }

    cout << "Enter how many positions you want to rotate it by : ";
    cin >> positions;

    //function call passing in array,size of the array and  positions to shift by
    rotateArray(arr,size,positions);             

    //displaying rotated array
    cout << "Rotated array : \n{";
    for(int i = 0; i < size; i++){
        cout << arr[i] << ", ";
    }
    cout << "}" << endl;

    return 0;
}