#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    int m,n;
    s1 = {'A','B','C','B','D','A','B'};
    s2 = {'B','D','C','A','B','A'};

    m = s1.length();
    n = s2.length();

    int t [m+1][n+1];
    for (int i = 0; i <= m; i++){
        for (int j = 0; j <= n; j++){
            if (i==0 || j==0){
                t[i][j] = 0;
            }
            else if (s1[i] == s2[j]){
                t[i][j] = t[i-1][j-1] + 1;
            }
            else{
                t[i][j] = max(t[i - 1][j], t[i][j - 1]); 
            }
        }   
    }

    cout <<"Lergest common Subsequence : "<< t[m][n] << endl;
    
    return 0;
}
