#include <iostream>
#include <vector>
#include <type_traits>

// Шаблонний клас для обчислення квадрату елементів масиву
template <typename T>
class ArrayTransformer {
    static_assert(std::is_arithmetic<T>::value, "The type must be numeric (int, float, long etc)");

private:
    std::vector<T> data;

public:
    // Конструктор для ініціалізації масиву
    explicit ArrayTransformer(const std::vector<T>& input) : data(input) {}

    // Метод для перетворення масиву
    void transformToSquares() {
        for (auto& element : data) {
            element *= element; // Квадрат елемента
        }
    }

    // Метод для виводу масиву
    void print() const {
        for (const auto& element : data) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Масив типу int
    std::vector<int> intArray = { 1, 2, 3, 4, 5 };
    ArrayTransformer<int> intTransformer(intArray);

    std::cout << "Array int before conversion: ";
    intTransformer.print();

    intTransformer.transformToSquares();

    std::cout << "Array int before conversion: ";
    intTransformer.print();

    // Масив типу float
    std::vector<float> floatArray = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    ArrayTransformer<float> floatTransformer(floatArray);

    std::cout << "Array float before conversion: ";
    floatTransformer.print();

    floatTransformer.transformToSquares();

    std::cout << "Array float after conversion:";
    floatTransformer.print();

    // Масив типу long
    std::vector<long> longArray = { 10, 20, 30, 40, 50 };
    ArrayTransformer<long> longTransformer(longArray);

    std::cout << "Array long before conversion: ";
    longTransformer.print();

    longTransformer.transformToSquares();

    std::cout << "Array long after conversion: ";
    longTransformer.print();

    return 0;
}