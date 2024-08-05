#include <bits/stdc++>
using namespace std;

int number = 120;
int primeNum[121];

void primeNumberSieve()
{
    for (int i = 2; i <= number; i++)
    {
        primeNum[i] = i;
    }

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (primeNum[i] == 0)
            continue;
        for (int j = i * i; j <= number; j += i)
            primeNum[j] = 0;
    }

    for (int i = 2; i <= number; i++)
    {
        if (primeNum[i] != 0)
            cout << primeNum[i] << "\n";
    }
}

int main() {
    
}