#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <bits/stdc++.h>
# define ll long long
using namespace std;
ll fib[1000000];
int gcd_naive(int a, int b) {
    int current_gcd = 1;
    for (int d = 2; d <= a && d <= b; d++) {
        if (a % d == 0 && b % d == 0) {
            if (d > current_gcd) {
                current_gcd = d;
            }
        }
    }
    return current_gcd;
}
int GCD(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    return GCD(b,a%b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
  //  std::cout << gcd_naive(a, b) << std::endl;
    cout<<GCD(a,b);
    return 0;
}


