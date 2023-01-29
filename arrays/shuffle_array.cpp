#include <bits/stdc++.h>
using namespace std;

vector<int> helper(vector<int> &nums, int n, vector<int> arr, int i, int j)
{
    if (i >= n || j >= nums.size())
    {
        return arr;
    }
    arr.push_back(nums[i]);
    arr.push_back(nums[j]);
    return helper(nums, n, arr, ++i, ++j);
}
vector<int> shuffle(vector<int> &nums, int n)
{
    vector<int> arr;
    return helper(nums, n, arr, 0, n);
}

int main()
{
    vector<int> nums = {1, 3, 5, 2, 4, 6};
    int n = 3;
    vector<int> ans = shuffle(nums, n);
    for (auto d : ans)
    {
        cout << d << " ";
    }
    return 0;
}