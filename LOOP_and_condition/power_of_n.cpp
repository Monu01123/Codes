// power of n to r 
#include <bits/stdc++.h>
using namespace std;

int power_of(int n,int r){
    int product = 1;
    while(r>=1){
    product *=n;
    r--;
    }
    return product;
}

int main()
{
int n=3;
int r=3;
cout<<"\nPower of n to r is "<<power_of(n,r)<<endl<<endl;
return 0;
}