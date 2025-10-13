#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findsortPair(vector<int>& arr , int target)
{
    sort(arr.begin(), arr.end());
    int left = 0, right = arr.size() - 1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            cout << "Pair Oiut:" << arr[left] << "+" << arr[right] << "=" << target << endl;
            left++;
            right--;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
}
int main()
{
    vector<int> arr = {8, 7, 2, 5, 3, 1};
    int target = 10;
    findsortPair(arr, target);
    return 0;
}