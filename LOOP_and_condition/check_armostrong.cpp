// Check the number is armstrong or not
#include <bits/stdc++.h>
using namespace std;
bool check(int n){
    int sum = 0;
    int temp = n;
    while(n > 0){
        int digit = n%10;
        sum += (digit * digit * digit);
        n = n/10;
    }
    if(sum == temp){
        return true;
    }
    return false;
}
int main()
{
int n = 153;
bool hh = check(n);
if(hh = 0){
  cout<<"\n"<<n<<" is not a Armstrong number"<<endl<<endl;
}
else{
    cout<<"\n"<<n<<" is a Armstrong number"<<endl<<endl;
}
return 0;
}