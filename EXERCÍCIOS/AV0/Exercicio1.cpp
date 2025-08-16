#include <iostream>
#include <cstdlib>

/*Impressão de Números de 1 a N: Escreva um programa que leia um número inteiro positivo N e imprima todos os números de 1 até N.*/

int main (){
    int n;
    std::cout << "Digite o numero que deseja verificar a sequencia: ";
    std::cin >> n;
    
    if (n < 1){
        std::cout << "O numero deve ser positivo" << std::endl;
        exit(1);
    }

    for (int i = 1; i <= n; i++){
        std::cout << i << " ";
    }

    return 0;
}