#include<iostream>
using namespace std;

string checkbit(int n, int k) {
    int x = (1 << (k - 1));
    if ((n & x) != 0) {
        return "yes";
    } else {
        return "no";
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << checkbit(n, k) << endl;
    return 0;
}