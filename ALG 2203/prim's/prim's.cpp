#include<bits/stdc++.h>
using namespace std;
int main()
{
    int vertex = 5;
    int total = 0;
    int g[5][5] = {
        {0, 9, 75, 0, 0},
        {9, 0, 95, 19, 42},
        {75, 95, 0, 51, 66},
        {0, 19, 51, 0, 31},
        {0, 42, 66, 31, 0}
    };
    int pick_edge = 0;
    int selected[5];
    memset(selected, false, sizeof(selected));
    selected[0] = true;
    while (pick_edge < vertex - 1){
        int starts = 0, last = 0;
        int mini = 9999;
        for (int i = 0; i < vertex; i++){
            if (selected[i] == true){
                for (int j = 0; j < vertex; j++){
                    if (!selected[j] && g[i][j] != 0){
                        if (g[i][j] < mini){
                            mini = g[i][j];
                            starts = i;
                            last = j;
                        }
                    }
                }
            }
        }
        cout<< starts << " - "<< last <<" - "<< mini <<endl;
        selected [last] = true;
        pick_edge ++;
        total = total + mini;
    }
    cout << total;
    return 0;
}
