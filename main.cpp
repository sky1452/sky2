// Программа для учебных целей

#include <iostream>

int main() {
    int a, b;
    std::cout << "Введите два целых числа: ";
    std::cin >> a >> b;
    std::cout << "Сумма: " << a + b << std::endl;

    // Добавляем вывод разности
    std::cout << "Разность: " << a - b << std::endl;
    return 0;
}