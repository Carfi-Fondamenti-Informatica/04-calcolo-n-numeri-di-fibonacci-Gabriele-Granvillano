#include <iostream>
using namespace std;

int main()
{
    int n = 0, i = 0, primo_num = 1, secondo_num = 0, terzo_num = 0;
    cin >> n;
    if (n>=2)
    {
        for (i; i < n; i++)
        {
            terzo_num = primo_num + secondo_num;
            primo_num = secondo_num;
            secondo_num = terzo_num;
            cout << terzo_num << endl;
        }
    } else
    {
        cout << "errore" << endl;
    }
    return 0;
}
