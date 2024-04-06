
//Define la clase LibroCalificaciones con una función miembtro llamada mostraMensaje
//crea un objeto LibroCalificaciones y llama a su función mostrarMensaje.


#include <iostream>

using namespace std;

//Definición de la clase LibroCalificaciones 


class LibroCalificaciones

{
public:
        // función que muestra un mensaje de bienvenido para el usuario de LibroCalificaciones

    void mostrarMensaje() const

    {
        cout << "Bienvenido al Libro de calificaciones!" << endl;

    }//fin de la función mostraMensaje

};//fin de la clase LibroCalificaciones


int main()

{
    LibroCalificaciones miLibroCalificaciones;// creo un objeto
    miLibroCalificaciones.mostrarMensaje();   // llama a la función mostrarMensaje del objeto

}//fin de main CONTINUAR PÁGINA 68 C++ PAGINA 100PDF