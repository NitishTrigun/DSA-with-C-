#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findTripleSum(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    bool found = false;

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == target) {
                cout << "Triplet found: "
                     << arr[i] << " + " << arr[left] << " + " << arr[right]
                     << " = " << target << endl;
                found = true;
                left++;
                right--;
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    if (!found) {
        cout << "No triplet found with sum = " << target << endl;
    }
}

int main() {
    vector<int> arr = {1, 4, 45, 6, 12, 10, 8};
    int target = 22;

    findTripleSum(arr, target);

    return 0;
}
