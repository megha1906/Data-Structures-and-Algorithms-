
/* Rectangle Pattern  

1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1 
1 2 3 * * * * 3 2 1 
1 2 * * * * * * 2 1 
1 * * * * * * * * 1

*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int lvar = n - i + 1;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        for (int k = 1; k <= (i - 1) * 2; k++)
        {
            cout << "*"
                 << " ";
        }
        for (int l = 1; l <= n - i + 1; l++)
        {
            cout << lvar << " ";
            lvar--;
        }
        cout << endl;
    }
}