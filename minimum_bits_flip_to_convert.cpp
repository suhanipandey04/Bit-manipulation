#include <iostream>
using namespace std;

int countsetbits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n & (n - 1);  // fixed
    }
    return count;
}

int flips(int a, int b)
{
    return countsetbits(a ^ b);  //  XOR to find differing bits
}

int main()
{
    int a = 10, b = 20;  // example values
    cout << "Number of bit flips needed: " << flips(a, b) << endl;
    return 0;
}