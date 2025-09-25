#include<iostream>
using namespace std;

int countsetbits(int n)
{
    int res = 0;
    while (n > 0)
    {
        res = res + (n & 1);  // Add 1 if the last bit is set
        n = n >> 1;           // Right shift to check next bit
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << countsetbits(n) << endl;
    return 0;
}