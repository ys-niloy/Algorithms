#include<iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    // base case
    if(size == 0  || size == 1)
    {
        return true;
    }
    
    if (arr[0]>arr[1])
    {
        return false;
    }

    // processsing part
    bool remainingPart = isSorted(arr + 1, size -1);

    return remainingPart;
    
}

int main()
{
    int arr1[] = {1, 2, 9, 5, 7};

    int ans = isSorted(arr1, 5);
    if(ans)
    {
        cout<< "Sorted"<< endl;
    }
    else
        cout<< "Not sorted" << endl;

    return 0;
}