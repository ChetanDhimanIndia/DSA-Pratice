// Date : 21/03/2022
// Find the unique element from array
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

/*
This find unique method is takinng two parms arr and second one is size of array
we use while loop because we have to do it end of size of array
and if arr[i != arr[i+1]]
then we print the arr[i] and if not then we do i=i+2 because like we have array
int arr[]={1,1,2,2,4,8,8} if(arr[0]!=arr[1]) like here i value is 0 so we add 2 in this
so here value of i kis now 2 so loop will start from if (arr[i] != arr[i+1])
thats all about how we can find unique eelement from array
*/
void findUniqueElement(int arr[], int sizeOfArray)
{
    int i = 0;
    while (i < sizeOfArray)
    {
        if (arr[i] != arr[i + 1])
        {
            cout << arr[i];
        }
        i = i + 2;
    }
}

int main()
{

    int arr[] = {1, 1, 5, 5, 98, 2, 2};
    sortArray(arr, 7);
    findUniqueElement(arr, 7);
}