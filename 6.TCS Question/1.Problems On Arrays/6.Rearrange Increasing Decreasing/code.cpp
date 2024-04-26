#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    // simple intuition of sortitng and then reversing the second half

    vector<int> arr = {8, 7, 1, 6, 5, 9};
    int n = arr.size();
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n / 2; i++)
    {

        cout << arr[i] << " ";
    }

    for (int j = n - 1; j >= n / 2; j--)
    {

        cout << arr[j] << " ";
    }
}
