//Finding the CGPA according to given number
#include <bits/stdc++.h>
using namespace std;
float find_cgpa(int total,int a,int b,int c){
    float sum = a+b+c;
    cout<<"sum is "<<sum<<endl;
    float percentage = (sum/total)*100l;
    cout<<"Your percentage is "<<percentage<<endl;
    return percentage/9.5;
}
int main()
{
int total = 300;
int a = 75, b= 65 , c = 90;
cout<<"\nyour CGPA is "<<find_cgpa(total,a,b,c)<<endl<<endl;
return 0;
}