#include <iostream>
#include <bits/stdc++.h>
#include <climits>
#include <vector>
#include <string>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

void swapAlternate(int *arr, int size)
{
  // Write your code here

  for (int i = 0; i < size;)
  {

    if (i + 1 < size)
    {
      swap(arr[i], arr[i + 1]);
    }
    i = i + 2;
  }
}

int main()
{

  int arr[5] = {1, 2, 3, 4, 5};
  swapAlternate(arr, 5);
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
}
