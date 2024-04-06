#include <iostream> 

int main(){
    
    //declaraciones de variables

    int numero1 = 0; // primer entero a sumar ( se inicializa con 0)
    int numero2 = 0; // segundo entero a sumar ( se inicializa con 0 )
    int suma = 0;  // suma de numero1 y numero2 ( se inicializa con 0 )

    std::cout << "Escriba el primer entero:";// pide los datos al usuario
    std::cin >> numero1; // lee el primer entero del usuario y lo coloca en numero1

    std::cout << "Escriba el segundo entero:";
    std::cin >> numero2;

    suma = numero1 + numero2;

    std::cout << "La suma es: " << suma << std::endl; 

}