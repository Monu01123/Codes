#include <bits/stdc++.h>
using namespace std;
float Discount_value(int product,int discount){
    return product * 30/100;
}

int main()
{
int product = 550;
int discount = 10;
cout<<"\nBy paying Rs "<<product<<" and got Discount of "<<discount<<"% of "<<"You saved "<<
Discount_value(product,discount)<<" Rs"<<endl<<endl;
return 0;
}