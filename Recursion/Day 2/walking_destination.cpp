#include <iostream>
using namespace std;

void reachHome(int str, int des)
{
    cout << str << " ";
    // cout<< endl;

    // base case
    if (str == des)
    {
        cout << "Reached home" << endl;
        return;
    }

    str++;
    // recursive call
    reachHome(str, des);
}

int main()
{
    reachHome(1, 10);
}