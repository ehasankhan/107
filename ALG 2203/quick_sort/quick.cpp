#include <bits/stdc++.h>

using namespace std;

int part (int arr[],int l,int h){
    int pivot = arr[h];
    int i = l-1;
    for (int j = l; j < h; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[h]);
    return (i+1);
}

void quickSort (int arr[],int l,int h){
    if (l<h){
        int pivot_index = part(arr,l,h);
        quickSort(arr, l, pivot_index - 1);
        quickSort(arr, pivot_index + 1, h);
    }
}

int main()
{
    int n;
    cout<<"Enter The Array Size :- "<< endl;
    cin>>n;
    int arr[n];
    cout<<"Array Element :- "<< endl;
    for (int i = 0; i < n; i++) 
    {
        cin>>arr[i];
    }

    cout<<"Quick Sort Before"<< endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    quickSort(arr, 0, n-1);

    cout<<"\nQuick Sort After"<< endl;
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
