#include <iostream>
#include <vector>

using namespace std;

bool IsPrime(int p);
bool Factors();

vector<int> vFactors;
int nFactorsSize;

int main()
{
    Factors();
    int nCheck;
    for (int i = 0; i < 100000; i++)
    {
        cin >> nCheck;
        if(IsPrime(nCheck)== true)
        {
            cout << "TAK" << endl;
        } else cout << "NIE" << endl;
    }
    return 0;
}

bool Factors()
{
    vFactors.push_back(2);
    for (int i = 3; i < 100001; i++)
    {
        nFactorsSize = vFactors.size();
        for (int j = 0; j < nFactorsSize; j++)
        {
            if (i % vFactors[j] == 0)
            {
                i++;
            } else if (i % vFactors[j] != 0)
            {
                continue;
            }
            if (j == nFactorsSize - 1)
            {
                vFactors.push_back(i);
            }
        }
        continue;
    }
    return true;
}

bool IsPrime(int p)
{
    if (p == 1) return false;
    if (p == 2 || p == 5) return true;
    for (int i = 0; i < nFactorsSize; i++)
    {
        if (p % vFactors[i] == 0)
        {
            return false;
        }
    }
    return true;
}
