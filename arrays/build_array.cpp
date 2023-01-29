// build array by permutation
#include <bits/stdc++.h>
using namespace std;

vector<int> build(vector<int>& arr,int i=0,vector<int> store={}){
if(i>=arr.size()){
    return store;
}
int value = arr[arr[i]];
store.push_back(value);
return build(arr,++i,store);
}

int main()
{
vector<int> arr = {0,2,1,5,3,4};
vector<int> ans  = build(arr);
for(auto a:ans){
    cout<<a<<" ";
}
return 0;
}