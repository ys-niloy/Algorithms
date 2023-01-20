#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key)
{
    // base case
    if(s>e)
    {
        return false;
    }
    
    int mid = (s+e) / 2;

    if (arr[mid] == key)
    {
        return true;
    }

    // processing part
    bool ans = false;
    if(mid > key)
    {
        ans = binarySearch(arr, s, mid-1, key);
    } 
    else if(mid < key)
    {
        ans = binarySearch(arr, mid + 1, e, key);
    }    

    return ans;
}

int main()
{
    int arr[] = {1, 3, 5, 6, 8};

    int ans = binarySearch(arr, 0, 4, 15);

    if (ans)
    {
        cout<< "Found" << endl;
    }
    else
    {
        cout<< "Not found" << endl;
    }

}