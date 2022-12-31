#include <iostream>
int get_change(int m) {
    //write your code here
    if(m<5)
        return m;
    else if (m>=10)
        return ((m/10) +get_change(m%10));
    else if (m>=5)
        return ((m/5)+get_change(m%5));
}

int main() {
    int m;
    std::cin >> m;
    std::cout << get_change(m) << '\n';
}
