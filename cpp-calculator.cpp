#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int substract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b == 0)
    {
        return NULL;
    }
    else
    {
        return a / b;
    }
}

int main()
{
    std::cout << "TWO NUMBER CALCULATOR" << std::endl;
    std::cout << "======================" << std::endl;
    int num1 = 0;
    int num2 = 0;
    char char1 = 0;
    int resultado = 0;
    int temp = 0;

    std::cout << "Enter the first number: " << "\n";
    std::cin >> num1;

    std::cout << "Enter the second number: " << "\n";
    std::cin >> num2;

    if (num2 == 0)
    {
        std::cout << "Enter +, -, *: " << "\n";
        temp = 1;
    }
    else
    {
        std::cout << "Enter +, -, *, /: " << "\n";  
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


    if (char1 == '+')
    {
        resultado = add(num1, num2);
    }

    if (char1 == '-')
    {
        resultado = substract(num1, num2);
    }

    if (char1 == '*')
    {
        resultado = multiply(num1, num2);
    }

    if (char1 == '/')
    {
        resultado = divide(num1, num2);
    }
  
    std::cout << "\nResultado: " << resultado << std::endl;
    system("pause");
}
