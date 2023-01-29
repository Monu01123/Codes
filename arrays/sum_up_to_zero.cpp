#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    // create n size vector
    vector<int> ans(n);

    // start and end index of vector
    int i = 0, j = n - 1;

    // mid of n
    int num = n / 2;

    // loop to fill the vector till mid index is reached
    while (i < j)
    {
        ans[i] = (num * (-1));
        ans[j] = num;
        num--, j--, i++;
    }
    cout << "ans is " << endl;
    for (auto a : ans)
    {
        cout << a << " ";
    }
    return 0;
}