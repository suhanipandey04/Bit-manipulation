#include<iostream>
#include<vector>
using namespace std;

int odd(vector<int>& arr, int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}

int main()
{
    vector<int> arr = {4, 3, 4, 4, 4, 5, 5};
    int n = arr.size();
    cout << "Element with odd frequency: " << odd(arr, n) << endl;
    return 0;
}