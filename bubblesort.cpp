#include <iostream>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    bubbleSort(arr, n);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
