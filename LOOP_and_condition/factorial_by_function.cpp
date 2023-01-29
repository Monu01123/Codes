#include <bits/stdc++.h>
using namespace std;

int factorail(int &n, int product = 1)
{
    // base condition
    if (n <= 1)
    {
        return product;
    }
    // call back function
    return factorail(--n, n * product);
}

int main()
{
    int n = -1;
    cout << "\nFactorial of " << n << " is " << factorail(n) << endl
         << endl;
    return 0;
}