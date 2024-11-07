#include <iostream>

int main() {
    int M;
    std::cout << "розмір масиву A ";
    std::cin >> M;

    int* A = new int[M];
    int* result = new int[M];
    int index = 0;

    std::cout << "елементи масиву A ";
    for (int i = 0; i < M; i++) {
        std::cin >> A[i];
    }

    int choice;
    std::cout << "введіть 1 для парних чисел або 2 для непарних чисел ";
    std::cin >> choice;

    for (int i = 0; i < M; i++) {
        if ((choice == 1 && A[i] % 2 != 0) || (choice == 2 && A[i] % 2 == 0)) {
            result[index++] = A[i];
        }
    }

    std::cout << "масив після видалення ";
    for (int i = 0; i < index; i++) {
        std::cout << result[i] << " ";
    }

    delete[] A;
    delete[] result;

    return 0;
}
