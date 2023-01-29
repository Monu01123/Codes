// Running Sum of 1d Array
// arr[i] = arr[i]+arr[i-1];
#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int> &nums, int i = 1)
{
    // base condition if i == nums.size()
    if (i >= nums.size())
    {
        return nums;
    }
    // updating original vector
    nums[i] += nums[i - 1];
    // callback function
    return runningSum(nums, ++i);
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = runningSum(nums);
    for (auto a : ans)
    {
        cout << a << " ";
    }
    return 0;
}