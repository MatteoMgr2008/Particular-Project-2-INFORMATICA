#include <iostream>
#include <chrono>
#include <thread>

bool isPrime(int numero);

int main() {
    std::cout <<"Inserisci il numero che desideri verificare:"<< std::endl;    
    while (true) {
        int numero;

        std::cin>>numero;
        if (isPrime(numero)) {
            std::cout <<"Il numero "<< numero <<" e' un numero primo"<< std::endl;
        } 
        else {
            std::cout <<"Il numero "<< numero <<" non e' un numero primo"<< std::endl;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout <<"Inserisci il numero che desideri verificare:"<< std::endl;
    }
    return 0;
}

bool isPrime(int numero) {
    if (numero<=1) {
        return false;
    }
    for (int i=2; i<=numero/2; ++i) {
        if (numero%i == 0) {
            return false;
        }
    }  
    return true;
}