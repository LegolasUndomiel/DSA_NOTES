#include <iostream>
#include <vector>

template <typename T> void bubbleSort(std::vector<T> &arr) {
    // 冒泡排序
    unsigned int n = arr.size();
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (unsigned int i = 1; i < n; i++) {
            if (arr[i - 1] > arr[i]) {
                // 方法1：使用 std::swap
                std::swap(arr[i - 1], arr[i]);
                // 方法2：使用临时变量
                // T temp = arr[i - 1];
                // arr[i - 1] = arr[i];
                // arr[i] = temp;
                sorted = false;
            }
        }
    }
}

namespace bubbleSortTest {
void test() {
    std::vector<int> arr = {4, 2, 3, 5, 1};
    std::cout << "------------------------------------------------------------------" << std::endl;
    std::cout << "Bubble Sort" << std::endl;
    std::cout << "------------------------------------------------------------------" << std::endl;
    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    bubbleSort(arr);
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
} // namespace bubbleSortTest
