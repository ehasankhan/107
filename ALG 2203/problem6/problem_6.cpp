#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter The Array Size :- " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter The Array Elements :- " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int terget;
    cout << "Enter The Target Element :- " << endl;
    cin >> terget;

    for (int i = 0; i < n - 2; i++){
        for (int j = i + 1; j < n - 1; j++){
            for (int k = j + 1; k < n; k++){
                if (arr[i] + arr[j] + arr[k] == terget){
                    cout << "true";
                    return 0;
                }
            }  
        }
    }
    cout << "false";
    return 0;
}
