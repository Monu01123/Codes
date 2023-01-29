#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    int product = 1;
    while(n>1){
    // product multiply by n-1  till 1
     product *= n--;
    }
    return product;
}

int main()
{
int n=5;
cout<<"\nfactorial of "<<n <<" is "<<factorial(n)<<endl<<endl;
return 0;
}