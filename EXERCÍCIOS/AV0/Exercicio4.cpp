#include <iostream>
#include <cstdlib>

/*Conversão de Temperatura: Escreva um programa que converta uma temperatura fornecida em graus Celsius para Fahrenheit e vice-versa.*/

int main (){
    char conversion;
    float temp;
    std::cout << "Escolha qual conversao deseja realizar: " << std::endl;
    std::cout << "Celsius->Farenheit (C) / Farenheit->Celsius (F)" << std::endl;
    std::cin >> conversion;

    if (conversion != 'C' && conversion != 'F'){
        std::cout << "Caractere invalido" << std::endl;
        exit(1);
    }

    std::cout << "Digite o valor que deseja converter: ";
    std::cin >> temp;

    if (conversion == 'C'){
        temp = (temp*1.8)+32.0;
        std::cout << "O valor convertido de Celsius para Farenheit eh: " << temp << std::endl;
    }
    else {
        temp = (temp-32.0)/1.8;
        std::cout << "O valor convertido de Farenheit para Celsius eh: " << temp << std::endl;
    }



    return 0;
}