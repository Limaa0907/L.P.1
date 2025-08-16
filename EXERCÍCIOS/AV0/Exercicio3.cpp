#include <iostream>

/*Soma de Números em um Array: Faça um programa que leia 5 números inteiros, armazene-os em um array e calcule a soma total desses números.*/

int main(){
    int sum = 0;
    std::cout << "Digite 5 valores que deseja somar: ";
    int v[5];

    for (int i = 0; i < 5; i++){
        std::cin >> v[i];
    }

    for (int i = 0; i < 5; i++){
        sum += v[i];
    }

        std::cout << "A soma eh: " << sum << std::endl;
    return 0;
}