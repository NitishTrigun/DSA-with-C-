#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intersectionArray(vector<int>& arr1, vector<int>& arr2) {
    vector<int> result;
    int i = 0, j = 0;
    int n = arr1.size(), m = arr2.size();

    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            result.push_back(arr1[i]);
            i++;
            j++;
        } 
        else if (arr1[i] < arr2[j]) {
            i++;
        } 
        else {
            j++;
        }
    }

    return result;
}

int main() {
    vector<int> a = {1, 2, 4, 5, 6};
    vector<int> b = {2, 3, 5, 7};

    vector<int> ans = intersectionArray(a, b);

    cout << "Intersection: ";
    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
