#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    int binNumber[32];
    while (n != 0)
    {
        binNumber[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binNumber[j];
    }
    cout << endl;
}