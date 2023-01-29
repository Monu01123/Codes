// How Many Numbers Are Smaller Than the Current Number
// by map
// also possible by binary search
#include <bits/stdc++.h>
using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{

    map<int, int> mp;
    int n = nums.size();
    vector<int> snum = nums;

    sort(snum.begin(), snum.end());
    for (int i = n - 1; i >= 0; i--)
        mp[snum[i]] = i;

    for (int i = 0; i < n; i++)
        nums[i] = mp[nums[i]];

    return nums;
}
int main()
{
    vector<int> ans = {8, 3, 1, 2, 2};
    vector<int> ana = smallerNumbersThanCurrent(ans);
    for (auto a : ana)
    {
        cout << a << " ";
    }
    return 0;
}