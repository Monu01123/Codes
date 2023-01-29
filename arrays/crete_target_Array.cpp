#include <bits/stdc++.h>
using namespace std;

// void swaptillwrite(vector<int> &target, vector<int> &nums, int i)
// {
//     int n = nums.size() - 1;
//     int j = n;
//     while (j - 1 <= i)
//     {
//         swap(target[j], target[j - 1]);
//         j--;
//     }
// }

vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
{
    vector<int> result;
    for (int i = 0; i < index.size(); ++i)
        result.insert(result.begin() + index[i], nums[i]);
    return result;
}

int main()
{
    vector<int> nums = {0, 1, 2, 3, 4};
    vector<int> index = {0, 1, 2, 2, 1};
    vector<int> ans = createTargetArray(nums, index);
    for (auto a : ans)
    {
        cout << a << " ";
    }
    return 0;
}