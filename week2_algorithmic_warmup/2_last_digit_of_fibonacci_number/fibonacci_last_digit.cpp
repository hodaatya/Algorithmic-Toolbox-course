#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <bits/stdc++.h>
# define ll long long
using namespace std;
ll fib[1000000];
int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}
int get_fibonacci_last(int n)
{
    if (n<=1)
        return n;
    fib[0]=0,fib[1]=1;
    for (int i=2;i<=n;i++)
    {
        fib[i]=(fib[i-1]%10) +(fib[i-2]%10);

    }
    return (fib[n]%10);
}

int main() {
    int n;
    std::cin >> n;
    // int c = get_fibonacci_last_digit_naive(n);
    // std::cout << c << '\n';
    cout<<get_fibonacci_last(n);
}


