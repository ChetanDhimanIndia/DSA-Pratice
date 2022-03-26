#include <iostream>

using namespace std;

void sortArray(int arr[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        for (int j = i + 1; j < sizeOfArray; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{

    int arr[] = {5, 5, 2, 6, 6, 9};
    sortArray(arr, 6);
    printArray(arr, 6);
}