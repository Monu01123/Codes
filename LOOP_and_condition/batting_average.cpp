#include <bits/stdc++.h>
using namespace std;

float batting_avg(int run,int ining,int not_out){
    int dissacles  = ining - not_out;
    return run/dissacles;
}

int main()
{
int run = 3600;
int ining = 56;
int not_out = 29;
cout<<batting_avg(run,ining,not_out)<<endl;
return 0;
}