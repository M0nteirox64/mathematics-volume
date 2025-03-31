#include <iostream>
#include <Windows.h>
# define M_PI           3.14159265358979323846


int main() {

    int chc;

    std::cout << "1. calcular area\n";
    std::cout << "> ";
    std::cin >> chc;

    if (chc) {
        std::cout << "(piramide quadrangular)\n";
        int L;
        int H;
    
        std::cout << "lado: ";
        std::cin >> L;
        std::cout << "altura: ";
        std::cin >> H;
 
        int Ab = L * L;
        int V = Ab * H / 3;
        int A = Ab * H / 2

        system("cls");
        std::cout << "Area da base: " << Ab << "\n";
        std::cout << "Volume: " << V << "\n"; 
        std::cout << "Area: " << A << "\n";
        Sleep(3333);
    }
}



