#include <iostream>
#include <vector>

// Шаблонна функція для сортування методом перестановок
template <typename T>
void permutationSort(std::vector<T>& arr) {
    size_t n = arr.size();
    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                std::swap(arr[i], arr[j]); // Перестановка елементів
            }
        }
    }
}

int main() {
    // Приклад використання з цілими числами
    std::vector<int> numbers = { 5, 2, 9, 1, 5, 6 };

    std::cout << "Before sorting: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Виклик шаблонної функції
    permutationSort(numbers);

    std::cout << "after sorting: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Приклад з рядками
    std::vector<std::string> words = { "apple", "orange", "banana", "pear" };

    std::cout << "Before sorting: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    permutationSort(words);

    std::cout << "after sorting: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
