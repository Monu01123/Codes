//Finding average of n numbers
#include <bits/stdc++.h>
using namespace std;

void average(int n){
    float sum = 0;
    int number;
    //in this input the number and add number 
    // to sum till i is less than n
    for(int i=0;i<n;i++){
        cin>>number;
        sum+=number;
    }
    float ans = sum/n;
    cout<<"Average of n number is "<<ans;
}

int main()
{
int n = 6;
average(n);
return 0;
}