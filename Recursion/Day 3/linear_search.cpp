#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    // base case
    int flag = 0;
    if (key == arr[0])
    {
        return true;
        flag == 1;
    }
    else if(flag == 0 && size == 0)
        return false;

    // processing part
    bool remaining = linearSearch(arr + 1, size -1, key);

    return remaining;    
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};

    bool ans = linearSearch(arr, 5, 1);
    if(ans)
    {
        cout<< "True";
    }
    else
    {
        cout<< "False" << endl;
    }
}