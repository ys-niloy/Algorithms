#include <iostream>
using namespace std;

int countDistinctWaysToClimbStairs(int nStairs)
{
    // base case
    if (nStairs < 0)
        return 0;

    if (nStairs == 0)
        return 1;


    // recursive call
    int ans = countDistinctWaysToClimbStairs(nStairs - 1) + countDistinctWaysToClimbStairs(nStairs - 2);

    return ans;
}

int main()
{
    int res = countDistinctWaysToClimbStairs(5);
    cout<< res;
}