#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <algorithm>
#include <queue>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    ifstream fin ("cowqueue.in");
    ofstream fout ("cowqueue.out");
    int n;
    fin >> n;
    pair<int, int> p[n];
    for (int i{0}; i < n; i++){
        int x, y;
        fin >> x >> y;
        p[i]  = make_pair(x, y);
    }
    sort(p, p+n);
    int time = 0;
    for (int i{0}; i < n; i++){
        time = max(time, p[i].first);
        time+=p[i].second;
    }
    fout << time << endl;
}
