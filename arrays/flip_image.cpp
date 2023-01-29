#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void flipAndInvertImage(vector<vector<int>> &image, int i = 0)
{
    if (i >= image.size())
    {
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
                cout << ans[i][j] << " ";
            cout << endl;
        }
    }

    for (int j = image[i].size() - 1; j >= 0; j--)
    {
        ans[i].push_back(image[i][j]);
    }
    return flipAndInvertImage(image, ++i);
}
int main()
{
    vector<vector<int>> ans = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    flipAndInvertImage(ans);
    // vec[0][1] = 23;
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     for (int j = 0; j < vec[i].size(); j++)
    //         cout << vec[i][j] << " ";
    //     cout << endl;
    // }

    return 0;
}