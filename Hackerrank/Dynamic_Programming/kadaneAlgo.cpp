#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = 8;
    int maxtillnow = INT_MIN, maxendinghere = 0;
    for (int i = 0; i < n; i++)
    {
        maxendinghere += arr[i];
        if (maxtillnow < maxendinghere)
            maxtillnow = maxendinghere;
        if (maxendinghere < 0)
            maxendinghere = 0;
    }
    cout << maxtillnow << "\n";
    return 0;
}