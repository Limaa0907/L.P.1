#include <iostream>
#include <string>
#include <cstring>

/*Contagem de Caracteres em uma String: Crie um programa que leia uma string e conte quantos caracteres (incluindo espaços) ela possui.*/

int main (){
    int count = 0;
    int i = 0;
    std::cout << "Digite o texto que deseja contar os caracteres: ";
    std::string texto;
    std::getline(std::cin, texto);

    while (texto[i] != '\0'){
        if (texto[i] != ' '){
            count++; 
        }
        i++;
    }

    std::cout << "O seu texto possui " << count << " caracteres" << std::endl;

    return 0;
}