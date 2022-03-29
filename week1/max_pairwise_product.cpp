#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i=0;i<n;i++)
    {cin>>arr[i];
    }
    sort(arr,arr+n);
    ll result=(ll)arr[n-1]*arr[n-2];
    cout<<result;
}
