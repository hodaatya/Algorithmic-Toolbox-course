#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool isKPartitionPossibleRec(int arr[], int subsetSum[], bool taken[],
                             int subset, int K, int N, int curIdx, int limitIdx)
{
    if (subsetSum[curIdx] == subset)
    {

        if (curIdx == K - 2)
            return true;


        return isKPartitionPossibleRec(arr, subsetSum, taken, subset,
                                       K, N, curIdx + 1, N - 1);
    }

    for (int i = limitIdx; i >= 0; i--) {
        if (taken[i])
            continue;
    
        int tmp = subsetSum[curIdx] + arr[i];


        if (tmp <= subset)
        {
       
            taken[i] = true;
            subsetSum[curIdx] += arr[i];
            bool nxt = isKPartitionPossibleRec(arr, subsetSum, taken,
                                               subset, K, N, curIdx, i - 1);

           
            taken[i] = false;
            subsetSum[curIdx] -= arr[i];
            if (nxt)
                return true;
        }
    }
    return false;
}


bool isKPartitionPossible(int arr[], int N, int K)
{

    if (N < K)
        return false;

    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += arr[i];
    if (sum % K != 0)
        return false;

    int subset = sum / K;
    int subsetSum[K];
    bool taken[N];

    for (int i = 0; i < K; i++)
        subsetSum[i] = 0;

    for (int i = 0; i < N; i++)
        taken[i] = false;

    subsetSum[0] = arr[N - 1];
    taken[N - 1] = true;

    return isKPartitionPossibleRec(arr, subsetSum, taken,
                                   subset, K, N, 0, N - 1);
}


int main()
{

    int lenght;
    cin>>lenght;
    int arr[lenght];
    for (int i=0;i<lenght;i++)
    {
        cin>>arr[i];
    }

    int K = 3;

    if (isKPartitionPossible(arr,lenght, K))
        cout << "1";
    else
        cout << "0";
}