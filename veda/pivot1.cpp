#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    int ans = 0;
    int l = 0, r = n - 1;
    int leftmax = 0, rightmax = 0;

    while (l < r) {
        leftmax = max(leftmax, height[l]);
        rightmax = max(rightmax, height[r]);

        if (leftmax < rightmax) {
            ans += (leftmax - height[l]);//
            l++;
        } else {
            ans += (rightmax - height[r]);
            r--;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> height(n);
        for (int i = 0; i < n; i++) {
            cin >> height[i];
        }

        cout << trap(height) << endl;
    }

    return 0;
}