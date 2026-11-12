#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cout<<"Enter the text case"<< endl;
    cin >> t;
    while (t--) {
        int x,y;
        cin>> x >> y;

        if (x == y){
            cout<<"-1"<<endl;
        }
        else if (x == y+1){
            cout<<"-1"<<endl;
        }
        else if (y == 1){
            cout<<"-1"<<endl;
        }
        else if (x < y){
            cout<<"2"<<endl;
        }
        else{
            cout<<"3"<<endl;
        }
    }
    return 0;
}
