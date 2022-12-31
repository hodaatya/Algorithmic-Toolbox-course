#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int>num={1,3,4};
int get_change(int value) {
    //write your code here

   vector<int> dp(value+1, value+1);
    dp[0] = 0;

    for(int i = 1; i < dp.size(); i++)
    {
        for(int j = 0; j < num.size(); j++)
        {
            if(num[j] <= i)
            {
                dp[i] = std::min(dp[i], dp[i-num[j]] + 1);
            }
        }
    }
    return dp[value] == (value + 1) ? - 1 : dp[value];
}

int main()
{
    int m;
    std::cin >> m;
    std::cout << get_change(m) << '\n';
}
