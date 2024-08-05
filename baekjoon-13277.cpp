#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);

    char a[300000], b[300000];
    int i_a[300000], i_b[300000];
    int aCnt = 0, bCnt = 0;
    cin >> a >> b;

    if ((a==0)||(b==0)) {
        cout << 0;
    } else {
        for (int i = 0; a[i] != '\0'; i++)
            {
                aCnt++;
            }
            for (int i = 0; b[i] != '\0'; i++)
            {
                bCnt++;
            }

            for (int i = 0; i < aCnt; i++)
            {
                i_a[i] = a[i] - '0';
            }
            for (int i = 0; i < bCnt; i++)
            {
                i_b[i] = b[i] - '0';
            }
    }

    if (aCnt>bCnt) {
        for (int i=0; i<aCnt; i++) {
            swap(aCnt, bCnt);
        }
        swap(aCnt, bCnt);
    }

    int result=0;
    for (int i=aCnt, j=bCnt; i>=0; i--, j--) {

        result += i_a[i]*i_b[i]>10 ? i_a[i]*i_b[i]-10*i : i_a[i]*i_b[i];
        if (i==0||j==0) {break;}
        else {result*=10;}
    }

    cout << result;
 


}