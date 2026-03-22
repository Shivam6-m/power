#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    int l = 0, r = n - 1;
    int leftmax = 0, rightmax = 0;
    int water = 0;

    cout << "\n--- Dry Run Start ---\n";

    while (l < r) {
        leftmax = max(leftmax, height[l]);
        rightmax = max(rightmax, height[r]);

        cout << "L=" << l << " (" << height[l] << "), "
             << "R=" << r << " (" << height[r] << "), "
             << "leftMax=" << leftmax << ", rightMax=" << rightmax;

        if (leftmax < rightmax) {
            int trapped = leftmax - height[l];//
            water += trapped;

            cout << " -> Add " << trapped << " water (LEFT)\n";
            l++;
        } else {
            int trapped = rightmax - height[r];
            water += trapped;

            cout << " -> Add " << trapped << " water (RIGHT)\n";
            r--;
        }
    }

    cout << "--- Total Water = " << water << " ---\n";
    return water;
}

int main() {
    vector<int> height = {3, 0, 0, 2, 0, 4};

    trap(height);

    return 0;
}