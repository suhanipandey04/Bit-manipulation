#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 3, 7, 9, 2, 3};  // Example input
    int x = 0;
    int n=arr.size();

    // Step 1: XOR all elements
    for (int i=0;i<n;i++) {
        x ^= arr[i];
    }

    // Step 2: Find rightmost set bit
    int k = x & (~(x - 1));

    // Step 3: Divide into two groups and XOR separately
    int res1 = 0, res2 = 0;
    for (int i=0;i<n;i++) {
        if (arr[i]& k)
            res1 ^= arr[i];
        else
            res2 ^= arr[i];
    }

    // Step 4: Print results in descending order
    if (res1 > res2)
        cout << res1 << " " << res2 << endl;
    else
        cout << res2 << " " << res1 << endl;

    return 0;
}