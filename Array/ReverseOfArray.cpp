// Date : 21/03/2022

#include <iostream>
using namespace std;

// Reverse Of Array
void reverseOfArray(int arr[], int n)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        /* code */
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Printing the Array after reverse

void printArray(int arr[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    reverseOfArray(arr, 5);
    printArray(arr, 5);
}