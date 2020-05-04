//============================================================================
// Name        : CPlusPlus.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



// C++ Program to print
// an Array using Recursion

#include <bits/stdc++.h>
using namespace std;

// Recursive function to print the array
void print_array(int arr[], int size)
{

    // using the static variable
    static int i;

    // base case
    if (i == size) {
        //i = 0;
        cout << endl;
        return;
    }

    // print the ith element
    cout << arr[i] << " \n";
    i++;

    // recursive call
    print_array(arr, size);
}

// Driver code
int main()
{

    int arr[] = { 3, 5, 6, 8, 4  };
    int n = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, n);

    return 0;
}
