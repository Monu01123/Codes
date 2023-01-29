#include <bits/stdc++.h>
using namespace std;

// int removeDuplicates(vector<int>& a) {
//     int j=0,c=1;
//     for(int i=0;i<a.size();i++){
//         if(a[j]!=a[i]){
//             j++;
//             a[j]=a[i];
//             c++;
//         }
//     }
//    return c;
// }

int removeDuplicates(vector<int> &nums)
{
    int count = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if ((nums[i] ^ nums[i + 1]) != 0)
        {
            nums[count] = nums[i];
            count++;
        }
    }
    nums[count] = nums[nums.size() - 1];
    count++;
    return count;
}

int main()
{
    vector<int> arr = {1, 1, 2};
    cout << endl
         << removeDuplicates(arr);
    return 0;
}