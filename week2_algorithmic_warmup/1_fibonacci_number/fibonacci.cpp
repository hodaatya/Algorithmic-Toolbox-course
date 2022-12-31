#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <bits/stdc++.h>
# define ll long long
using namespace std;
int fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}
ll fib[1000000];
int fibonacci_fast(int n) {
    // write your code here
    fib[0]=0,fib[1]=1,fib[2]=1;
    if (n <= 1)
        return n;
    for (ll i=3;i<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }

    return fib[n];
}

void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_naive(n));
}
int main() {
    int n = 0;
    std::cin >> n;

    //std::cout << fibonacci_naive(n) << '\n';
   // test_solution();
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}

