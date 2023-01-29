#include <bits/stdc++.h>
using namespace std;

void primes(int a, int n)
{
    while (a <= n)
    {
        int i = 2;
        while (i < a)
        {
            if (a % i == 0)
            {
                i++;
                break;
            }
            i++;
        }
        if (i == a)
        {
            cout << a << " ";
        }
        ++a;
    }
}

int main()
{
    int a = 12, n = 40;
    primes(a, n);
    return 0;
}