#include <bits/stdc++.h>
using namespace std;

// vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
// {
//     vector<vector<int>> vec(r, vector<int>(c));
//     if (mat.size() * mat[0].size() != r * c)
//         return mat;
//     for (int i = 0; i < (mat.size() * mat[0].size()); i++)
//     {
//         vec[i / c][i % c] = mat[i / mat[0].size()][i % mat[0].size()];
//     }
//     return vec;
// }

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{

    if (mat.size() * mat[0].size() != r * c)
        return mat;

    vector<vector<int>> ans(r, vector<int>(c));

    int row = 0, col = 0;

    for (int i = 0; i < mat.size(); i++)
    {

        for (int j = 0; j < mat[0].size(); j++)
        {

            if (col == c)
            {
                row++;
                col = 0;
            }
            ans[row][col] = mat[i][j];
            col++;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> ans = {{1, 2}, {3, 4}};
    vector<vector<int>> getfrom = matrixReshape(ans, 1, 4);
    for (int i = 0; i < getfrom.size(); i++)
    {
        for (int j = 0; j < getfrom[0].size(); j++)
        {
            cout << getfrom[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}