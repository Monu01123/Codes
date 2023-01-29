//print sum of negative number
//print sum of positive number
//print sum of positive even number
//print sum of positive odd number

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sn=0,sp=0,sen=0,son=0;
do{
    cin>>n;
    if(n<0){
        sn+=n;
    }else{
        sp+=n;
        if(n%2==0){
            sen+=n;
        }
        else{
            son+=n;
        }
    }
}while(n!=0);

cout<<"Sum of negative number is "<<sn<<endl;
cout<<"Sum of positive number is "<<sp<<endl;
cout<<"Sum of even positive number is "<<sen<<endl;
cout<<"Sum of odd positive number is "<<son<<endl;
return 0;
}