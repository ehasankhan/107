#include <bits/stdc++.h>
using namespace std;

int third_largest(int arr[] ,int n){

    long long first = LLONG_MIN;
    long long second = LLONG_MIN;
    long long third = LLONG_MIN;

    for (int i = 0; i < n; i++)
    {
       if (arr[i] == first || arr[i] == second || arr[i] == third){
            continue;
       }
       if (arr[i] >> first){
            third = second;
            second = first;
            first = arr[i];
       }
       else if (arr[i] >> second){
            third = second;
            second = arr[i];
       }
       else if (arr[i] >> third){
            third = arr[i];
       }
    }
    if (third ==LONG_MIN)
    {
        return -1;
    }
    return third;
    
}


int main() {
    
    int t;
    cout<<"Test case " << endl;

    cin>>t;
    while (t--)
    {
        int n;
        cout<<"Array Size " << endl;
        cin>>n;
        cout<<"Array Elements " << endl;

        int arr[n];

        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }

        int total = third_largest(arr,n);

        if (total == LLONG_MIN)
        {
            cout<<"The array not" << endl;
        }
        else{
            cout<<"The third largest element is "<< total << endl;
        }
        
    }
    return 0;
}

