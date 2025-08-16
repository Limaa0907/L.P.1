#include <iostream>
#include <cstdlib>

/*Verificação de Número Primo: Desenvolva um programa que leia um número inteiro e determine se ele é um número primo ou não.*/

int main (){
    int num;
    int count = 0;
    std::cout << "Digite um numero para descobrir se eh primo: ";
    std::cin >> num;

    if (num < 0){
        std::cout << "Nao existe numero primo negativo" << std::endl;
        exit(1);
    }

    for (int i = 1; i <= num; i++){
        if (num % i == 0){
            count++;
        }
    }
    
    if (count == 2){
        std::cout << "O numero " << num << " eh primo" << std::endl;
    }
    else {
        std::cout << " O numero " << num << " nao eh primo" << std::endl;
    }

    return 0;
}