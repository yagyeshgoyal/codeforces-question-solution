#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class MedianFinder {
private:
    priority_queue<int> maxHeap; // Max-heap for the smaller half
    priority_queue<int, vector<int>, greater<int>> minHeap; // Min-heap for the larger half

public:
    void insertNum(int num) {
        // Insert into maxHeap first
        if (maxHeap.empty() || num <= maxHeap.top()) {
            maxHeap.push(num);
        } else {
            minHeap.push(num);
        }

        // Balance the heaps
        if (maxHeap.size() > minHeap.size() + 1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        } else if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    double findMedian() {
        if (maxHeap.size() == minHeap.size()) {
            return (maxHeap.top() + minHeap.top()) / 2.0;
        }
        return maxHeap.top();
    }
};

int main() {
    MedianFinder medianFinder;
    vector<int> nums = {5, 15, 1, 3, 8, 7, 9};
    for (int num : nums) {
        medianFinder.insertNum(num);
        cout << "Inserted: " << num << ", Median: " << medianFinder.findMedian() << endl;
    }
    return 0;
}
