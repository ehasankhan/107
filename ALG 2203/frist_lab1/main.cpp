#include <iostream>
using namespace std;
int main()
{
    int n,m=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]== -1 && a[j]== -1)
            {
                m;
            }
            else if (a[i]==0 && a[j]==0 )
            {
                m++;
            }
            else if (a[i]==-1 )
            {
                m=m+2;
            }
        }
    }
    cout <<m<<endl;
}
