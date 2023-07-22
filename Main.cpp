#include <iostream>
#include <sstream>
#include <string>
#include "Functions.h"
#include "Calculator.h"

int main()
{
    double num1 = 0;
    double num2 = 0;
    char char1 = 0;
    double resultado = 0;
    int menuOption;
    int temp = 0;

    std::cout << "TWO NUMBER CALCULATOR" << std::endl;
    std::cout << "======================" << std::endl;
    do {
        menuOption = menu();
        if (menuOption == 49)
        {
            system("cls");
            StandardCalculator(num1, num2, temp, char1, resultado);
        }
        if (menuOption == 50)
        {
            system("cls");
            std::cout << "\nPrueba Calculadora cientifica\n";
        }
        system("pause");
        system("cls");
    } while (menuOption != 69);


   

}