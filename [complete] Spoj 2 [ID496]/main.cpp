#include <iostream>

using namespace std;

int main()
{
    int nD, nFac = 1;
    cin >> nD;
    int aNumbers[nD];
    for (int i = 0; i < nD; i++)
    {
        cin >> aNumbers[i];
    }
    for (int j = 0; j < nD; j++)
    {
        if (aNumbers[j] > 10)
        {
            cout << "0 0" << endl;
            continue;
        }
        for (int i = 1; i < aNumbers[j]+1; i++)
        {
            nFac = (nFac*i) % 100;
        }
        if (nFac > 9)
        {
            cout << (nFac - (nFac % 10))/10 << " " << nFac % 10 << endl;
        } else {cout << "0 " << nFac << endl;}
        nFac = 1;
    }
    return 0;
}
