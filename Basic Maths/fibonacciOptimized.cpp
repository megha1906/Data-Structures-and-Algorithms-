/*
Input: 5
Output:
0 1 1 2 3 5 
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if( n == 0 ){
        cout << 0 << endl;
    } else {
        int secondlast = 0;
        int last = 1;
        cout << secondlast << " " << last << " ";
        int current;
        for(int i = 2; i <= n; i++)
        {
            current = secondlast + last;
            secondlast = last;
            last = current;
            cout << current << " ";
        }
        cout << endl;
    }
}