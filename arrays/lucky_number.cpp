#include <bits/stdc++.h>
using namespace std;

vector<int> luckyNumbers(vector<vector<int>> &matrix, int row = 0, vector<int> ans = {})
{
    if (row >= matrix.size())
    {
        return ans;
    }
    int max = INT_MAX, s = 0, e = 0;
    for (int i = 0; i < matrix[row].size(); i++)
    {
        if (matrix[row][i] < max)
        {
            max = matrix[row][i];
            s = row;
            e = i;
        }
    }

    int min = INT_MIN;
    for (int k = 0; k < matrix.size(); k++)
    {
        if (matrix[k][e] > min)
        {
            min = matrix[k][e];
        }
    }
    if (matrix[s][e] == min)
    {
        ans.push_back(min);
    }
    return luckyNumbers(matrix, ++row, ans);
}

int main()
{
    vector<vector<int>> ans = {{7, 8}, {1, 2}};
    vector<int> df = luckyNumbers(ans);
    cout << "the answer is " << endl;
    for (auto a : df)
    {
        cout << a << " ";
    }
    return 0;
}