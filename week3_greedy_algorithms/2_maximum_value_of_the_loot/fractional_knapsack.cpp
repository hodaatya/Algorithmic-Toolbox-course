#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <bits/stdc++.h>
using namespace std;
bool compare (pair<int ,int >p1,pair<int ,int >p2)
{
    double value1=(double ) p1.first/p1.second;
    double value2=(double )p2.first/p2.second;
    return value1>value2;
}

double get_optimal_value(vector<pair<int ,int >>Vec, int capacity) {
    double value = 0.0;

    for (int i=0;i<Vec.size();i++)
    {
        if (capacity>=Vec[i].second)
        {
            value+=Vec[i].first;
            capacity-=Vec[i].second;

        }
        else
        {
            double ValueByWeight=(double)Vec[i].first/Vec[i].second;
            value+= (double)capacity*ValueByWeight;

            return value;

        }
    }
    // write your code here

    return value;
}

int main() {
    int n;
    int capacity;
    std::cin >> n >> capacity;
    //  vector<int> values(n);
    // vector<int> weights(n);
    vector<pair<int ,int>> things(n);
    for (int i = 0; i < n; i++) {
        std::cin >> things[i].first>> things[i].second;
    }
    sort(things.begin(),things.end(),compare);
    double optimal_value = get_optimal_value(things ,capacity);

    // std::cout.precision(4);
    std::cout << fixed<<setprecision(4)<<optimal_value << std::endl;
    return 0;
}
