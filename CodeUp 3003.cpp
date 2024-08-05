#include <stdio.h>
#include <stdlib.h>

int main()
{
    //'1' - '0' == 1
    char a[100000], b[100000];
    int i_a[100000], i_b[100000];
    int aCnt = 0, bCnt = 0;
    scanf("%s %s", &a, &b);
    for(int i = 0; a[i] != '\0'; i++)
        aCnt++;
    for(int i = 0; b[i] != '\0'; i++)
        bCnt++;
    for(int i = 0; i < aCnt ; i++)
    {
        i_a[i] = a[i] - '0';
    }
    for(int i = 0; i < bCnt ; i++)
    {
        i_b[i] = b[i] - '0';
    }

    int temp;
    if(aCnt > bCnt){
        for(int i =0 ;i < aCnt; i++){
        temp = i_a[i];
        i_a[i] = i_b[i];
        i_b[i] = temp;
        }
        temp = aCnt;
        aCnt = bCnt;
        bCnt = temp;
    }

    /*

    for(int i = 0; i < aCnt; i++)

    {

        printf("%d", i_a[i]);

    }

    printf("\n\n");

    for(int i = 0; i < bCnt; i++)

    {

        printf("%d", i_b[i]);

    }

    printf("\n\n");

    */

    int ten = 0;
    bCnt--;
    aCnt--;
    for(int i = bCnt, j = aCnt; i >= 0; i--, j--)
    {
        if(j < 0)
        {
            i_b[i] += ten;
            ten = i_b[i] / 10;
        }
        else
        {
            i_b[i] += i_a[j] + ten;
            ten = i_b[i] / 10;
        }

        //printf("[ten %d i_b[j] %d i_b[j]%10 %d i %d j %d]\n", ten, i_b[i], i_b[i] % 10, i, j);

        i_b[i] = i_b[i] % 10;
    }
    bCnt += ten == 1 ? 1:0;
    if(ten == 1)
    {
        printf("1");
        for(int i = 0; i < bCnt; i++)
        {
            printf("%d", i_b[i]);
        }
    }
    else
    {
        for(int i = 0; i <= bCnt; i++)
            printf("%d", i_b[i]);
    }
}