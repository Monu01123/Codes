#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int globalMaxSum = nums[0], currMaxSum = nums[0];
    for (int ind = 1; ind < nums.size(); ind++)
    {
        currMaxSum = max(currMaxSum + nums[ind], nums[ind]);
        globalMaxSum = max(globalMaxSum, currMaxSum);
    }
    return globalMaxSum;
}

int main()
{
    vector<int> ans = {-5, 4, 3, 2, -1};
    cout << maxSubArray(ans);
    return 0;
}