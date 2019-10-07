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
    ifstream fin ("circlecross.in");
    ofstream fout ("circlecross.out");
    string s;
    fin >> s;
    string z = s;
    int indexf[26];
    int indexe[26];
    int counter = 0;
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i{0}; i < 26; i++){
        int x = z.find(alpha[i]);
        indexf[i] = x;
        z[x] = '.';
        int y = z.find(alpha[i]);
        indexe[i] = y;
    }
    for (int i{0}; i < 26; i++){
        for (int j{0}; j < 26; j++){
            if (indexf[j] < indexe[i] and indexf[j] > indexf[i] and indexe[j] > indexe[i]) counter++;
            if (indexf[i] < indexe[j] and indexf[i] > indexf[j] and indexe[i] > indexe[j]) counter++;
        }
    }
    fout << counter / 2 << endl;
}
