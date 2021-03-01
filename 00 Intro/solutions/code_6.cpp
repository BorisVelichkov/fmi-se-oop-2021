#include <bits/stdc++.h>
using namespace std;
 
int getMin(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = min(res, arr[i]);
    return res;
}
 
int main()
{
    int arr[] = { 3, 2, 5, 4, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum element of array: " << getMin(arr, n) << endl;
    return 0;
}