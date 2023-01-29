#include <bits/stdc++.h>
using namespace std;

int numIdenticalPairs(vector<int> &nums, int count = 0, int i = 0, int j = 0)
{
    if (i >= nums.size())
    {
        return count;
    }
    if (j >= nums.size())
    {
        return numIdenticalPairs(nums, count, ++i, 0);
    }
    if (nums[i] == nums[j] && i < j)
    {
        count++;
    }
    return numIdenticalPairs(nums, count, i, ++j);
}
int main()
{
    vector<int> arr = {1, 2, 3, 1, 1, 3};
    cout << numIdenticalPairs(arr);
    return 0;
}