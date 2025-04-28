#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
#include "funciones.h"

#include <windows.h>

HANDLE wHnd;

using namespace std;


int main()
{
    ///Incluidos en cstdlib:
    ///color + 'numero color de fondo' + 'numero color de letra'
    system("color 0E");

    ///Titulo de la ventana:
    system("title Embaucado Game");

    ///Incluido en Windows .h
    ///Para modificar el tamaño de la ventana por defecto
    wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    ///ancho y altura
    SMALL_RECT windowSize = { 0, 0, 83, 53 };
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    ///Pruebas


    /// Seed
    srand(time(0));
    setlocale(LC_ALL, "Spanish");

    ///Variables para calcular los puntajes
    int const TAM = 3;
    string nombrePuntajeMaximo[TAM] = {};
    int puntajeMaximo[TAM] = {};

    ///Variables para 2 players y para elegir las opciones del manú
    char opcion;
    string player1, player2;

    ///Pequeña presentanción
    system("cls");
    cout << endl;
    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  !    __    __  ________  __    __            ______  __    __   ______         !" << endl;
    cout << "  !   |  \\  |  \\|        \\|  \\  |  \\          |      \\|  \\  |  \\ /      \\ ®      !" << endl;
    cout << "  !   | $$  | $$ \\$$$$$$$$| $$\\ | $$           \\$$$$$$| $$\\ | $$|  $$$$$$\\       !" << endl;
    cout << "  !   | $$  | $$   | $$   | $$$\\| $$            | $$  | $$$\\| $$| $$   \\$$       !" << endl;
    cout << "  !   | $$  | $$   | $$   | $$$$\\ $$            | $$  | $$$$\\ $$| $$             !" << endl;
    cout << "  !   | $$  | $$   | $$   | $$\\$$ $$            | $$  | $$\\$$ $$| $$   __        !" << endl;
    cout << "  !   | $$__/ $$   | $$   | $$ \\$$$$ __        _| $$_ | $$ \\$$$$| $$__/  \\ __    !" << endl;
    cout << "  !    \\$$    $$   | $$   | $$  \\$$$|  \\      |   $$ \\| $$  \\$$$ \\$$    $$|  \\   !" << endl;
    cout << "  !     \\$$$$$$     \\$$    \\$$   \\$$ \\$$       \\$$$$$$ \\$$   \\$$  \\$$$$$$  \\$$   !" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
    cout << "  !            Programar compulsivamente es perjudicial para la salud.           !" << endl;
    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
    cout << endl;
    system("pause");


    system("cls");
    cout << endl;
    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  !  _______ _______ ______  _______ _     _ _______ _______ ______  _______ ®   !" << endl;
    cout << "  ! (_______|_______|____  \\(_______|_)   (_|_______|_______|______)(_______)    !" << endl;
    cout << "  !  _____   _  _  _ ____)  )_______ _     _ _       _______ _     _ _     _     !" << endl;
    cout << "  ! |  ___) | ||_|| |  __  (|  ___  | |   | | |     |  ___  | |   | | |   | |    !" << endl;
    cout << "  ! | |_____| |   | | |__)  ) |   | | |___| | |_____| |   | | |__/ /| |___| |    !" << endl;
    cout << "  ! |_______)_|   |_|______/|_|   |_|\\_____/ \\______)_|   |_|_____/  \\_____/     !" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  !                                                           By Angel Simón     !" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  !                      +-----------------------------+                         !" << endl;
    cout << "  !                      |        BIENVENIDOS!!!       |                         !" << endl;
    cout << "  !                      +-----------------------------+                         !" << endl;
    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
    cout << endl;
    system("pause");

    //Arranca el game
    do
    {
        system("cls");
        elegirOpcionesDelJuego(player1, player2, opcion, nombrePuntajeMaximo, TAM, puntajeMaximo, TAM);

    }
    while (opcion != '0');

    return 0;
}
