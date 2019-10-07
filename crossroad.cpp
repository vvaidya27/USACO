#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ifstream fin ("crossroad.in");
    ofstream fout ("crossroad.out");
    int n;
    fin >> n;
    int cows[11];
    bool vis[11];
    for (int i{0}; i < 11; i++){
        cows[i] = 0;
        vis[i] = false;
    }
    int counter = 0;
    for (int i{0}; i < n; i++){
        int id;
        int side;
        fin >> id >> side;
        if (cows[id] != side) {
            if (vis[id] == true) counter++;
        }
        cows[id] = side;
        vis[id] = true;
    }
    fout << counter << endl;
}
