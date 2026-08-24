#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the element ";
    cin>>n;

    int a;
    vector <int> num;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the element vector ";
        cin>>a;
        num.push_back(a);
    }
    
    //vector<int> num = {2, 3, -4, 5, 6, 10, 20, 129};

    int terget;
    cout<<"Enter the element Terget vector ";
    cin >> terget;

    int check = 0;

    for (int i = 0; i < num.size(); i++)
    {
        for (int j = i + 1; j < num.size(); j++)
        {
            if (num[i] + num[j] == terget)
            {
                cout << i << " " << j << endl;
                check = 1;
            }
        }
    }
    if (check == 0)
    {
        cout << "Invalid";
    }
}
