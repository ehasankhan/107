#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,capacity;
    cout<<"Knapsack Capacity:- "<<endl;
    cin>>capacity;
    cout<<"Number Of Products"<<endl;
    cin>>n;

    int product[n],value[n],weight[n],v_per_w[n];
    for (int i = 0; i < n; i++)
    {
        cin>>product[i]>>value[i]>>weight[i];
        v_per_w[i] = value[i]/weight[i]; //calculate ratio 
    }
    //sorting in descending order
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (v_per_w[i] < v_per_w[j])
            {
                swap(v_per_w[i],v_per_w[j]);
                swap(product[i],product[j]);
                swap(value[i],value[j]);
                swap(weight[i],weight[j]);
            }
        }
    }

    int current_weight = 0, total_value = 0;

    for (int i = 0; i < n; i++)
    {
        if (current_weight + weight[i] <= capacity)
        {
            total_value = total_value+ value[i];
            current_weight = current_weight+ weight[i];
        }
        else
        {
            int frac = (capacity-current_weight)*v_per_w[i];
            total_value = total_value+frac;
            break;
        }
        
    }
    
    
    cout<<total_value<<endl;
    cout<<current_weight<<endl;

    return 0;
}
