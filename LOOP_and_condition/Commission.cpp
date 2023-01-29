#include <bits/stdc++.h>
using namespace std;
float commission(int overall,int received){
    return (received * 100 )/overall;
}
int main()
{
int overall = 50;
int received = 50;
cout<<"\nYou received "<<commission(overall,received)<<"% commission"<<endl<<endl;
return 0;
}