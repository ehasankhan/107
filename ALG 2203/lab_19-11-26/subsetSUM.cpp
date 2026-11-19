#include <bits/stdc++.h>
using namespace std;

int subsetSum(int arr[], int n, int target) {
    bool dp[n + 1][target + 1];
    memset(dp,0,sizeof(dp));

    for (int i = 0; i < n; i++){
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= target; j++){
            if (j< arr[i - 1]){
                dp[i][j] = dp[i - 1][j];
            }
            else{
                dp[i][j] = dp[i - 1][j - arr[i-1]] ;
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < target; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[n] [target];
}

int main() {
    int n, target;
    cout<<"Array Size"<<endl;
    cin>>n;
    cout<<"Array Elements"<<endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Terget Value"<<endl;
    cin>>target;

    int total = subsetSum(arr,n,target);

    if (total)
    {
        cout<<"1";
    }else
    {
        cout<<"-1";
    }
    
    

    return 0;
}

