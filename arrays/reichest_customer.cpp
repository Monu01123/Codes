#include <bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>> &nums, int i = 0, int j = 0, int sum = 0, int max = 0)
{
    if (i >= nums.size())
    {
        return max;
    }
    else if (j >= nums[0].size())
    {
        if (sum > max)
        {
            max = sum;
        }
        return maximumWealth(nums, ++i, 0, 0, max);
    }
    sum += nums[i][j];
    return maximumWealth(nums, i, ++j, sum, max);
}

int main()
{
    vector<vector<int>> nums = {{1, 5},
                                {7, 3},
                                {3, 5}};
    cout << maximumWealth(nums);
    return 0;
}
