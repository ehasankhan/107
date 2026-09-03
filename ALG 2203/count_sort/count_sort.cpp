#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter The Array Size :- " << endl;
    cin >> n;

    int arr[n];

    cout << "Array Element :- " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Counting Sort Before :- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int mainValue = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mainValue)
        {
            mainValue = arr[i];
        }
    }

    int c[mainValue + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        c[arr[i]]++;
    }

    for (int i = 1; i <= mainValue; i++)
    {
        c[i] = c[i - 1] + c[i];
    }

    int output[n];

    for (int i = n - 1; i >= 0; i--)
    {
        output[c[arr[i]] - 1] = arr[i];
        c[arr[i]]--;
    }

    cout << "Counting Sort After :- " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << output[i] << " ";
    }

    cout << endl;

    return 0;
}
