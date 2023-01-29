// finding sum and product of all element of n 
// than substract sum from product 
#include <bits/stdc++.h>
using namespace std;
int find_product(int n){
    int sum = 0;
    int product = 1;
    while(n>0){
        //by n%10 we get last element of n
        sum += n%10;
        product *= n%10;
        //by this we can remove the last element of n
        n = n/10;
}
return product-sum;
}

//main program
int main()
{
int n;
cin>>n;
cout<<find_product(n);
return 0;
}