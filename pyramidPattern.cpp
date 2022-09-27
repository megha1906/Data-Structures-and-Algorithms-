
/* Pattern pyramid 
   1   
  121   
 12321   
1234321
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
        int kvar = 1;
        int lvar = i - 1;
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << kvar;
            kvar++;
        }
        for (int l = 1; l <= i - 1; l++)
        {
            cout << lvar;
            lvar--;
        }
        for (int m = 1; m <= n - 1; m++)
        {
            cout << " ";
        }
        cout << endl;
    }
}