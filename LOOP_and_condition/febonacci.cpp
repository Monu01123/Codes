// find the nth fibonacci number
#include <bits/stdc++.h>
using namespace std;

int nth_number(int n){
    //count is 2 because 0 and 1 are predefied variables in form of a and b
    int count = 2;
    int a=0,b=1;

    //loop continue till count is less than n
    while(count <= n){
    //temp variable is temraily variable to store value of b for some time number
    int temp = b;
    b = a + b;
    a = temp;
    count++;
    }
    return a;
}

int main()
{
int n;
cin>>n;
cout<<"The "<<n<<"th fibonaci number is "<<nth_number(n)<<endl;
return 0;
}