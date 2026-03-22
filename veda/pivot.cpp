#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void nextPermutation(vector<int>& A) {
    int n = A.size();
    int pivot = -1;

    // Step 1: find pivot
    for(int i = n - 2; i >= 0; i--){
        if(A[i] < A[i + 1]){
            pivot = i;
            break;
        }
    }

    // Step 2: if no pivot → reverse whole array
    if(pivot == -1){
        reverse(A.begin(), A.end());
        return;
    }

    // Step 3: find next greater element
    for(int i = n - 1; i > pivot; i--){
        if(A[i] > A[pivot]){
            swap(A[i], A[pivot]);
            break;
        }
    }

    // Step 4: reverse from pivot+1 to end
    int i = pivot + 1, j = n - 1;
    while(i <= j){
        swap(A[i], A[j]);
        i++;
        j--;
    }
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> A(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    nextPermutation(A);

    cout << "Next Permutation: ";
    for(int x : A){
        cout << x << " ";
    }

    return 0;
}