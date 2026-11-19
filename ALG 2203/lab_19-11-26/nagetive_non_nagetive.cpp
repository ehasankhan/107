#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n, temp;
    cout<<"Array Size " << endl;
    cin>>n;
    cout<<"Array Elements " << endl;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            temp = arr[i];
            arr[i] = arr[j +1];
            arr[j] = temp;
        }
    }
    int total = -1;
    int count = 1;

    for (int i = 0; i < n; i++){
        if (arr[i] != arr[i-1]){
            count++;
        }
        if (count == 3)
        {
            total = arr[i];
            break;
        }
    }

    cout<<"The Thrid largest elemant is "<< total << endl;


    return 0;
}

