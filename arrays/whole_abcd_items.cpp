#include <bits/stdc++.h>
using namespace std;

bool checkIfPangram(string sentence)
{
    int i = 0;
    map<char, int> mp;
    for (int i = 0; i < sentence.length(); i++)
    {
        mp[sentence[i]] = 1;
    }

    if (mp.size() == 26)
        return true;

    return false;
}

int main()
{
    string ans = "thequickbrownfoxjumpsoverthelazydog";
    cout << checkIfPangram(ans);
    return 0;
}