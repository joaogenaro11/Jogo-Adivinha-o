#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int num_secreto = rand() % 100 + 1;
    int tentativa, tentativas = 0;

    std::cout << "Tente adivinhar o numero entre 1 e 100!" << std::endl;
    
    do {
        std::cout << "Digite sua tentativa: ";
        std::cin >> tentativa;
        tentativas++;

        if (tentativa > num_secreto)
            std::cout << "Muito alto!" << std::endl;
        else if (tentativa < num_secreto)
            std::cout << "Muito baixo!" << std::endl;
        else
            std::cout << "Parabens! Voce acertou em " << tentativas << " tentativas." << std::endl;
    } while (tentativa != num_secreto);
    
    return 0;
}