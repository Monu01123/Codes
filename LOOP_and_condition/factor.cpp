//find the factors of n 

#include <bits/stdc++.h>
using namespace std;

void factors_of(int n){
    cout<<"Factors of n are ";
    // loop is continue till n/2 because 
    // after n/2 no value is able to divide n
    for(int i=1;i<n/2;i++)
        {
          if(n%i == 0){
            cout<<i<<" ";
        }}}

int main()
{
int n;
cin>>n;
//calling  function
factors_of(n);
return 0;
}