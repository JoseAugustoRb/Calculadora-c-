#include <iostream>
#include <cmath>

int main()
{
   
    char op;
    int num1;
    int num2;
    double result;

    std::cout << "******* calculator *******" <<std::endl;

    std::cout << "Digite o operador (+ - * /)";
    std:: cin >> op;

    std::cout << "Digite um numero: ";
    std::cin >> num1;

    
    std::cout << "Digite um numero: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "Resultado: " << result;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Resultado: " << result;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Resultado: " << result;
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Resultado: " << result;
            break;
        default:
            std::cout << "Por favor digite um numero vailido";
    }

    std::cout << "***************************" << std::endl;
    return 0;
}
