#include <iostream>
#include <cstdlib>

/*Cálculo de Fatorial: Crie um programa que calcule e imprima o fatorial de um número inteiro fornecido pelo usuário.*/

int main (){    
    int n;
    std::cout << "Digite o numero que deseja calcular o fatorial: "; 
    std::cin >> n;
    int res = 1;

    if (n < 0){
        std::cout << "Nao existe fatorial de numeros negativo" << std::endl;
        exit(1);
    }
    else if (n == 0){
        std::cout << n << "! = " << 1 << std::endl;
    }

    for (int i = n; i > 1; i--){
        res *= i;
    }
    if (n > 0){
        std::cout << n << "! = " << res << std::endl;
    }

    return 0;
}