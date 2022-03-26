// Date : 21/03/2022
// Pair Sum of Array Leet Code #1

/*
Input : nums = [2,7,11,15]
target : 9;
Output : [0,1]

Explanation : Because nums[0]+nms[1] == 9, so we return [0,1]

*/

#include <iostream>
using namespace std;

int *pairSum(int arr[], int sizeOfArray, int targetElement)
{
    static int newArr[2];
    for (int i = 0; i < sizeOfArray; i++)
    {
        for (int j = i + 1; j < sizeOfArray; j++)
        {
            if (arr[i] + arr[j] == targetElement)
            {
                newArr[0] = i;
                newArr[1] = j;
                return newArr;
            }
        }
    }
    return newArr;
}

int main()
{
    int arr[] = {2, 7, 11, 15};
    cout << pairSum(arr, 4, 9);
}
