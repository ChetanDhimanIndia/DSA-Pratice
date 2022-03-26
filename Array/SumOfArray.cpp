// Date : 21/03/2022

#include <iostream>
using namespace std;
int sumOfArray(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    cout << sumOfArray(arr);

    return 0;
}