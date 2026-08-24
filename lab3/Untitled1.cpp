#include <iostream>
using namespace std;

void countingSort(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > maxVal) maxVal = arr[i];

    int count[maxVal+1] = {0};
    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    for (int i = 1; i <= maxVal; i++)
        count[i] += count[i-1];

 int output[n];
    for (int i = n-1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

 for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

int main() {
    int n,i;

   cout<<"The size of array: ";
   cin>>n;
   int A[n];
   cout<<endl<<"Enter the array elements please: "<<endl;
   for(i=0;i<n;i++)
   {
       cin>>A[i];
       cout<<" ";
   }
   cout<<endl<<"The array before applying counting sort: ";
   for(i=0;i<n;i++)
   {
       cout<<A[i]<<" ";
   }
    countingSort(A, n);

    cout<<endl<<"The array after applying counting sort: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    return 0;
}
