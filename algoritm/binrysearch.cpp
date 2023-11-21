#include <iostream>
using namespace std;

class BinarySearch {
private:
    int *sortedArray;
    int arraySize;

public:
    BinarySearch(int arr[], int size) {
        sortedArray = arr;
        arraySize = size;
    }
    bool search(int target) {
        int left = 0;
        int right = arraySize - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (sortedArray[mid] == target)
                return mid;
            if (sortedArray[mid] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return false;
    }
};

int main() {
    int arr[] = {12, 25, 34, 47, 58, 67, 79, 82, 95};
    int size = sizeof(arr) / sizeof(arr[0]);
    BinarySearch binarySearch(arr, size);
    int target = 58;
    if (binarySearch.search(target))
        cout << target << " find" << endl;
    else
        cout  << target << " not find." << endl;

    target = 100;
    if (binarySearch.search(target))
        cout << target << " find" << endl;
    else
        cout  << target << " not find." << endl;
    return 0;
}
