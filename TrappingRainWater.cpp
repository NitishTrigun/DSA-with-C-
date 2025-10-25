#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 🔹 Function to calculate trapped water
int trapRainWater(vector<int> &height) {
    int n = height.size();
    if (n == 0) return 0;

    vector<int> leftMax(n), rightMax(n);
    int water = 0;

    // Step 1: Fill leftMax array
    leftMax[0] = height[0];
    for (int i = 1; i < n; i++)
        leftMax[i] = max(leftMax[i - 1], height[i]);

    // Step 2: Fill rightMax array
    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
        rightMax[i] = max(rightMax[i + 1], height[i]);

    // Step 3: Calculate trapped water
    for (int i = 0; i < n; i++) {
        int waterLevel = min(leftMax[i], rightMax[i]);
        water += (waterLevel - height[i]);
    }

    return water;
}

// 🔹 Main function
int main() {
    vector<int> height = {3, 0, 2, 0, 4};

    cout << "Trapped Rain Water: " << trapRainWater(height) << " units" << endl;

    return 0;
}
