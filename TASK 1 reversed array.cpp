// Task 1 Reversing an array.cpp

#include <iostream>

using namespace std;

// Fill array with size integers read from the user input 
void fill_array(int arr[], int size)
{
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

// Reverse the array
void reverse_array(int arr[], int size)
{
    for (int i = 0, j = size - 1; i < j; ++i, --j)
    {
        int tmp = arr[i];  // store the first value
        arr[i] = arr[j];   // move the last value to front
        arr[j] = tmp;      // put stored value at the end
    }
}

// Print the contents of the array
void print_array(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i + 1 < size) cout << " ";
    }
    cout << endl;
}

int main()
{
    // QN 1: Create an array of 12 integers
    cout << "QN 1 Create an array of 12 integers" << endl;
    int myNum[12] = { 5,8,11,22,14,10,1,2,5,7,13,9 };

    print_array(myNum, 12);

    // QN 2: Initialize from the user input
    cout << endl << "QN 2 Initialize from the user input" << endl;
    fill_array(myNum, 12);

    print_array(myNum, 12);

    // QN 3: Reverse the array
    cout << endl << "QN 3 Reversed array" << endl;
    reverse_array(myNum, 12);

    print_array(myNum, 12);

    // QN 4: Print the reversed array
    cout << endl << "QN 4 Print the reversed array" << endl;
    print_array(myNum, 12);

    return 0;
}