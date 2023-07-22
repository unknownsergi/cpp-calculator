#include <iostream>
#include "Functions.h"
#include "Calculator.h"


int menu()
{
    char option;

    std::cout << "Menu: \n\n";
    std::cout << "1. Standard Calculator\n";
    std::cout << "2. Cientific Calcualtor\n";
    std::cout << "3. Programmer\n";
    std::cout << "4. Temperature\n";
    std::cout << "5. Time\n";
    std::cout << "6. Data\n";
    std::cout << "7. Angle\n";
    std::cout << "8. Speed\n";
    std::cout << "E. Salir\n";

    std::cout << "Option: ";
    std::cin >> option;
    return option;
}

void StandardCalculator(double num1, double num2, int temp, char char1, double resultado)
{
    char exit;
    do
    {
        std::cout << "Enter the first number: " << std::endl;
        std::cin >> num1;
        while (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(100, '\n');
        }

        std::cout << "Enter the second number: ";
        std::cin >> num2;
        while (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(100, '\n');
        }

        if (num2 == 0)
        {
            std::cout << "Enter +, -, *: ";
            temp = 1;
        }
        else
        {
            std::cout << "Enter +, -, *, /: ";
            temp = 2;
        }

        std::cin >> char1;

        if (temp == 2)
        {
            while (char1 != '+' && char1 != '-' && char1 != '*' && char1 != '/')
            {
                std::cin >> char1;
            }
        }
        else
        {
            while (char1 != '+' && char1 != '-' && char1 != '*')
            {
                std::cin >> char1;
            }
        }

        Calculator calc(num1, num2);

        if (char1 == '+')
        {
            resultado = calc.add();
        }

        if (char1 == '-')
        {
            resultado = calc.substract();
        }

        if (char1 == '*')
        {
            resultado = calc.multiply();
        }

        if (char1 == '/')
        {
            resultado = calc.divide();
        }

        std::cout << "\nResultado: " << resultado << std::endl;
        std::cout << "Escriba 'E' para salir, 'S' para seguir: ";
        std::cin >> exit;
        system("cls");
    } while (exit != 69 && exit != 101);
}