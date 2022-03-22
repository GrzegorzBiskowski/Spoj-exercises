#include <iostream>
#include <cmath>

using namespace std;

int Digit(int a, int b);

int main()
{
    int nD, nNum, nBmod, nAmod;
    cin >> nD;
    int aNumbersA[nD], aNumbersB[nD];
    for (int i = 0; i < nD; i++)
    {
        cin >> aNumbersA[i] >> aNumbersB[i];
    }
    for (int i = 0; i < nD; i++)
    {
        cout << Digit(aNumbersA[i], aNumbersB[i]) << endl;
    }
    return 0;
}

int Digit(int a, int b)
{
    int nModA = a%10;
    if (nModA == 1)
    {
        return 1;
    } else if (nModA == 2)
    {
        if (b % 4 == 0)
        {
            return 6;
        } else if (b%4 == 1)
        {
            return 2;
        } else if (b% 4 == 2)
        {
            return 4;
        } else return 8;
    } else if (nModA == 3)
    {
        if (b%4 == 0)
        {
            return 1;
        } else if (b%4 == 1)
        {
            return 3;
        } else if (b%4 == 2)
        {
            return 9;
        } else return 7;
    } else if (nModA == 4)
    {
        if (b%2 == 0)
        {
            return 6;
        } else return 4;
    } else if (nModA == 5)
    {return 5;}
    else if (nModA == 6)
    {
        return 6;
    } else if (nModA == 7)
    {
        if (b%4 == 0)
        {
            return 1;
        } else if (b%4 == 1)
        {
            return 7;
        } else if (b%4 == 2)
        {
            return 9;
        } else return 3;
    } else if (nModA == 8)
    {
        if (b%4==0)
        {
            return 6;
        } else if (b%4==1)
        {
            return 8;
        }else if (b%4 == 2)
        {
            return 4;
        } else return 2;
    } else if (nModA == 9)
    {
        if (b%2 == 0)
        {
            return 1;
        } else return 9;
    } else return 0;
}
