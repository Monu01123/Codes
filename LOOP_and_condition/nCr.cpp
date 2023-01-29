#include <bits/stdc++.h>
using namespace std;

int factorial(int n,int r){
    int product3 = 1;
    int p = n-r;
    while(p>1){
    // product multiply by n-1  till 1
     product3 *= p--;
    }

    int product = 1;
    while(n>1){
    // product multiply by n-1  till 1
     product *= n--;
    }

    int product2 = 1;
    while(r>1){
    // product multiply by n-1  till 1
     product *= r--;
    }

    return product /( product2 * product3);
    
}

int main()
{
int n=5;
int r = 2;
cout<<"\nvalue of nCr is "<<factorial(n,r)<<endl<<endl;
return 0;
}