#include <iomanip>
#include <iostream>

int main() {
  double a, b;
  // Проверка первой стороны на отрицательность
  std::cout << "Введите первое число: ";
  std::cin >> a;
  if (a < 0) {
    std::cout << "Ошибка число должно быть положительным.";
    return 1;
  }
  std::cout << "Введите второе число: ";
  std::cin >> b;
  // Проверка второй стороны на отрицательность
  if (b < 0) {
    std::cout << "Ошибка число должно быть положительным.";
    return 1;
  }
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "Площадь: " << a * b << "\n";
  std::cout << "Периметр: " << a + b + a + b << "\n";

  return 0;
}