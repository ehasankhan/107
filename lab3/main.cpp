#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int maxValue = 0;
    vector <int> arrVec = {5,9,4,5,9,7,3,4,5,8,3,8,4};

    for(int i = 0; i < arrVec.size(); i++ ){
        cout<<arrVec[i]<< " ";
    }

    for (int i = 0; i < arrVec.size(); i++)
    {
        if (arrVec[i] > maxValue)
        {
            maxValue = arrVec[i];
        }
    }
    maxValue = arrVec.size() + 1;
    for (int i = 0; i < arrVec.size(); i++)
    {

    }
    
    



    return 0;
}
