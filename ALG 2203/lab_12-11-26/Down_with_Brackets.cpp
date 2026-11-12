#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cout<<"Enter the text case"<< endl;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;

        bool check = false;

        int sum = 0;

        for (int i = 0; i <= s.length() -1; i++){
            if (s[i] == '(' && s[i+1] == ')' ){
                sum++;
            }
            else{
                sum--;
            }            
        }
        if (sum == 0 ){
            cout<<"Yes"<<endl;
        }else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}

