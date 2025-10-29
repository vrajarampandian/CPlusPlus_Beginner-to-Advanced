#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kthLargestSum(vector<int>& arr, int k) {
    int n = arr.size();

    // Step 1: Generate prefix sums
    vector<int> prefix(n + 1, 0);
    for (int i = 1; i <= n; ++i)
        prefix[i] = prefix[i - 1] + arr[i - 1];

    // Step 2: Min-heap to store the top K largest sums
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Step 3: Generate all subarray sums
    for (int start = 0; start < n; ++start) {
        for (int end = start + 1; end <= n; ++end) {
            int sum = prefix[end] - prefix[start];

            if (minHeap.size() < k) {
                minHeap.push(sum);
            } else if (sum > minHeap.top()) {
                minHeap.pop();
                minHeap.push(sum);
            }
        }
    }

    // Step 4: The root of min-heap is the K-th largest sum
    return minHeap.top();
}

int main() {
    vector<int> arr = {3, 2, 1};
    int k = 2;

    int result = kthLargestSum(arr, k);
    cout << "The " << k << "-th largest sum is: " << result << endl;

    return 0;
}
