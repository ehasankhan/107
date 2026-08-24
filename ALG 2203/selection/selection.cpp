#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,capacity;
    cout<<"Number of Activity:- "<<endl;
    cin>>n;

    int activity[n],start[n],finish[n];
    for (int i = 0; i < n; i++)
    {
        cin>>activity[i]>>start[i]>>finish[i];
    }
    //sorting in descending order
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (finish[i] < finish[j])
            {
                swap(activity[i],activity[j]);
                swap(start[i],start[j]);
                swap(finish[i],finish[j]);
            }
        }
    }

    int last_selected = 0;

    for (int i = 0; i < n; i++)
    {
        if (start[i] >= finish[last_selected])
        {
            cout<<activity[i]<<" ";
            last_selected=i;
        }
        
    }
    return 0;
}
