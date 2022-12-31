#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int64_t W, n;
    cin >> W >> n;
    vector<int64_t> w(n + 1);
    w[0] = 0;
    for (int64_t i = 1; i <= n; i++)
    {
        cin >> w[i];
    }

    vector<vector<int64_t>> arr(n + 1, vector<int64_t>(W + 1));

    for (int64_t i = 0; i <= W; i++)
    {
        arr[0][i] = 0;
    }
    for (int64_t i = 0; i <= n; i++)
    {
        arr[i][0] = 0;
    }

    for (int64_t j = 1; j <= n; j++)
    {
        for (int64_t i = 1; i <= W; i++)
        {
            arr[j][i] = arr[j - 1][i];
            if (i >= w[j])
            {
                arr[j][i] = max(arr[j][i], (arr[j - 1][(i - w[j])]) + w[j]);
            }
        }
    }
    cout << arr[n][W];
}