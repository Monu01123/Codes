#include <bits/stdc++.h>
using namespace std;
vector<int> getConcatenation(vector<int> nums,vector<int> ans={},int i =0,int j=0){
if(j>= nums.size()){
    return ans;
}

if(i<nums.size()){
    ans.push_back(nums[i]);
    return getConcatenation(nums,ans,++i,j);
}
else{
        ans.push_back(nums[j]);
    return getConcatenation(nums,ans,i,++j);
}
}
int main()
{
vector<int> nums = {1,3,2,1};
vector<int> ans = getConcatenation(nums);
for(auto a : ans){
    cout<<a<<" ";
}
return 0;
}