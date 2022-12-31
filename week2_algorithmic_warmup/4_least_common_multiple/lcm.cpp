#include <iostream>

long long lcm_naive(int a, int b) {
    for (long l = 1; l <= (long long) a * b; ++l)
        if (l % a == 0 && l % b == 0)
            return l;

    return (long long) a * b;
}
long long GCD(long long a,long long b)
{
    if (b==0)
    {
        return a;
    }
    return GCD(b,a%b);
}
long long  LCM(long long a,long long b)
{
    return ((a*b)/GCD(a,b));
}
int main() {
    long long a, b;
    std::cin >> a >> b;
 //   std::cout << lcm_naive(a, b) << std::endl;
    std::cout<<LCM(a,b);
    return 0;
}
