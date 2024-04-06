#include <iostream> // permite al programa realizar operaciones de entrada yu salida


  using std::cin;  // el program usa cin
    using std::cout; // el programa usa cout
    using std::endl; // el programa usa endl

    //la función main empieza la ejecución del programa 

int main(){

    int numero1 = 0;
    int numero2 = 0;

    cout << "Escriba dos enteros a comparar: "; // pide los datos al usuario
    cout << "Número 1: ";
    cin >> numero1;
    cout << "Número 2: ";
    cin >> numero2;

    if(numero1 == numero2)
        cout << numero1 << "==" << numero2 << endl;

    if(numero1 != numero2)
        cout << numero1 << "!=" << numero2 << endl;
    
    if(numero1 < numero2)
        cout << numero1 << "<" << numero2 << endl;

    if(numero1 > numero2 )
        cout << numero1 << ">" << numero2 << endl;

    if(numero1 <= numero2)
        cout << numero1 << "<=" << numero2 << endl;

    if(numero1 >= numero2)

        cout << numero1 << ">=" << numero2 << endl;

} //fin de la función main