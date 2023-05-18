#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "enter the no of rows and column";
    cin >> n1;
    int nsp = n1;
    int a = 1;
    for (int i = 1; i <= n1; i++)
    {
        for (int k = 0; k < nsp - 1; k++)
        {
            cout << " ";
        }
        nsp--;
        for (int j = 1; j <= i; j++)
        {
            cout << (a);
            a++;
        }
        a = i + 1;
        int x = 2 * i - 2;

        for (int d = 1; d < i; d++)
        {

            cout << x;
            x--;
        }

        cout << endl;
    }
    return 0;
}