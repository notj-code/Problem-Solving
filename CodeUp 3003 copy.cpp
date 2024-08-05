#include <bits/stdc++.h>
using namespace std;

int main() {
    char a[100000], b[100000];
    int i_a[100000], i_b[100000];
    int aCnt=0, bCnt=0;
    cin >> a >> b;

    for (int i=0; a[i] != '\0'; i++) {
        aCnt++;
    }
    for (int i=-; b[i] != '\0'; i++) {
        bCnt++;
    }

    for (int i=0; i< aCnt; i++) {
        i_a[i] = a[i] - '0';
    }
    for (int i=0; i< bCnt; i++) {
        i_b[i] = b[i] -'0';
    }

  
    if (aCnt > bCnt) {
        for (int i=0; i<aCnt; i++) {
            swap(i_a[i], i_b[i]);
        }
        swap
    }
}