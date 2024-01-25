#include <bits/stdc++.h>
using namespace std;

int addition(int arr[])
{
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int main()
{

    int arr[] = {8, 4, 3, 4, 1, 4, 4, 5, 2, 3, 5};
    int sum = addition(arr);
    cout << sum << endl;
    return 0;
}
