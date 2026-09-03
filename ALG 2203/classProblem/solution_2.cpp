#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter The Array Size :- " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter"<< n <<" Elements :- ";

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int terget;
    cout << "Enter The Target Element :- " << endl;
    cin >> terget;

    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        int  l = i + 1;
        int r = n - 1;
        int required_sum = terget - arr[i];
        while (l < r){
            if (arr[l] + arr[r] == required_sum){
                cout << "true";
                return 0;
            }
            else if (arr[l] + arr[r] < required_sum){
                l++;
            }
            else{
                r--;
            }
        }
    }
    cout << "false";
    return 0;
}
