#include <iostream>
#include <utility>

void bubble_sort(int* arr, const int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) std::swap(arr[j], arr[j + 1]);
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i) std::cin >> arr[i];
    for (int i = 0; i < n; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;
    bubble_sort(arr, n);
    std::cout << "Sorted:  ";
    for (int i = 0; i < arr_size; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;
    return 0;
}
