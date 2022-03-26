// Date : 21/03/2022
// Find the duplicate element from array

/*
Approch:-
  For Example int arr[]={1,2,5,9,5,6}

   STEP 1 :- Firstly sort the all array so that our duplicate element can be found easily
   STEP 2 :- After Sorting we will check the duplicate element from array

*/

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

void checkDuplicatesFromArray(int arr[], int sizeOfArray)
{
    int i = 0;
    while (i < sizeOfArray)
    {
        if (arr[i] == arr[i + 1])
        {
            cout << arr[i];
        }
        i = i + 2;
    }
}
int main()
{
    int arr[] = {1, 2, 5, 9, 5, 6};

    sortArray(arr, 6);
    checkDuplicatesFromArray(arr, 6);
}