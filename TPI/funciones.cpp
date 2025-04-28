#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
#include "funciones.h"

#include <windows.h>

using namespace std;

///Opciones de menú
void elegirOpcionesDelJuego(string &player1, string &player2, char &opcion, string nombrePuntajeMaximo[], int TAM_P, int puntajeMaximo[], int TAM_M)
{
    ///Solo para pruebas
    string playerPrueba1 = "Tomás";
    string playerPrueba2 = "Germán";

    mostrarMenuEmbaucado(opcion);

    switch (opcion)
    {
    case '1':
        ///Registrar Nombres
        registarNombresJugadores(player1, player2, nombrePuntajeMaximo, TAM_P, puntajeMaximo, TAM_M);
        break;

    case '2':
        ///Estadisticas
        mostrarEstadisticas(nombrePuntajeMaximo, TAM_P, puntajeMaximo, TAM_M);
        break;

    case '3':
        ///Creditos
        mostrarCreditos();
        break;

    case '4':
        ///~Extra~ Reglas del juego
        mostrarReglasDeJuego();
        break;
    case '5':
        ///~Extra~ Easter egg desempate

        desempatarPlayers(playerPrueba1, playerPrueba2, 999, 888, nombrePuntajeMaximo, TAM_P, puntajeMaximo, TAM_M);
        break;

    case '0':
        ///Fin del juego
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
        cout << "  !                      |     GRACIAS POR JUGAR!!!    |                         !" << endl;
        cout << "  !                      +-----------------------------+                         !" << endl;
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
        break;

    default:
        system("cls");
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
        cout << "  !                      +-----------------------------+                         !" << endl;
        cout << "  !                      |   ERROR, PRUEBE DE NUEVO!   |                         !" << endl;
        cout << "  !                      +-----------------------------+                         !" << endl;
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
        system("pause");
        break;
    }
}

void mostrarMenuEmbaucado(char &opcion)
{

    ///Guardo la opcion para ingresar en cada opcion o tira mensaje de error

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
    cout << "  !                       +-----------------------------+                        !" << endl;
    cout << "  !                       |                             |                        !" << endl;
    cout << "  !                       |            MENÚ:            |                        !" << endl;
    cout << "  !                       |                             |                        !" << endl;
    cout << "  !                       +-----------------------------+                        !" << endl;
    cout << "  !                       | |1|:       JUGAR            |                        !" << endl;
    cout << "  !                       +-----------------------------+                        !" << endl;
    cout << "  !                       | |2|:    ESTADÍSTICAS        |                        !" << endl;
    cout << "  !                       +-----------------------------+                        !" << endl;
    cout << "  !                       | |3|:      CRÉDITOS          |                        !" << endl;
    cout << "  !                       +-----------------------------+                        !" << endl;
    cout << "  !                       | |4|:   REGLAS DE JUEGO      |                        !" << endl;
    cout << "  !                       +-----------------------------+                        !" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  !                       +-----------------------------+                        !" << endl;
    cout << "  !                       | |0|:       SALIR            |                        !" << endl;
    cout << "  !                       +-----------------------------+                        !" << endl;
    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
    cout << endl;
    cout << "                                    SU SELECCIÓN: ";
    cin >> opcion;

}


void registarNombresJugadores(string &player1, string &player2, string nombrePuntajeMaximo[], int TAM_P, int puntajeMaximo[], int TAM_M)
{

    char confirmar;

    ///Guardo los nombres de los dos jugadores

    do
    {
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
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
        cout << "  !                                                                              !" << endl;
        cout << "  !                 Antes de comenzar deben registrar sus nombres                !" << endl;
        cout << "  !                                                                              !" << endl;
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
        cout << endl;
        cout << "                             ¿Nombre del Jugador 1?: ";
        cin >> player1;
        cout << endl;
        cout << "                             ¿Nombre del Jugador 2?: ";
        cin >> player2;
        cout << endl;
        cout << endl;
        cout << "                             ¿Confirmar nombres? (S/N): ";
        cin >> confirmar;
        cout << endl;

        while(confirmar != 'S' && confirmar != 's' && confirmar != 'N' && confirmar != 'n')
        {
            cout << "                       **Error de tipeo, pruebe nuevamente.**" << endl;
            cout << endl;
            cout << "                             ¿Confirmar nombres? (S/N): ";
            cin >> confirmar;
            cout << endl;
        }

    }
    while (confirmar != 'S' && confirmar != 's');

    comenzarJuego(player1, player2, nombrePuntajeMaximo, TAM_P, puntajeMaximo, TAM_M);

}

void comenzarJuego(string &player1, string &player2, string nombrePuntajeMaximo[], int TAM_P, int puntajeMaximo[], int TAM_M)
{
    ///Declaro las variables para cada partida
    int const TAM_N = 5, TAM_R = 3;
    int puntosPlayer1 = 0, puntosPlayer2 = 0;
    int puntosPorRondaP1[TAM_R] = {}, puntosPorRondaP2[TAM_R] = {};
    char opcion;

    string figura_ActualP1[TAM_N] = {}, naipe_ActualP1[TAM_N] = {};
    string figura_ActualP2[TAM_N] = {}, naipe_ActualP2[TAM_N] = {};
    string embaucadora;

    for (int i = 0; i < 3; i++)
    {
        system("cls");
        cout << endl;
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
        cout << "  !                                   EMBAUCADO                                  !" << endl;
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
        cout << "  !                                    RONDA #" << (i + 1) << "                                  !" << endl;
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;

        cout << "                                     " << player1 << " vs " << player2 << endl;
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
        cout << endl;
        cout << "                                   " << player1 << " (" << puntosPlayer1 << " puntos)" << endl;
        cout << endl;

        ///Randomizo las 10 cartas
        randomizarCartasParaPlayers(figura_ActualP1, TAM_N, naipe_ActualP1, TAM_N, figura_ActualP2, TAM_N, naipe_ActualP2, TAM_N);

        /// Payer 1 divido 5 para cada uno y muestro
        for (int x = 0; x < 5; x++)
        {
            cout << "                                      " << naipe_ActualP1[x] << " de " << figura_ActualP1[x] << endl;
        }

        cout << endl;
        cout << "                                   " << player2 << " (" << puntosPlayer2 << " puntos)" << endl;
        cout << endl;

        /// Player 2 divido 5 para cada uno y muestro
        for (int y = 0; y < 5; y++)
        {
            cout << "                                      " << naipe_ActualP2[y] << " de " << figura_ActualP2[y] << endl;
        }
        cout << endl;

        ///Randomizo embaucadora
        embaucadora = randomizarCartaEmbaucadora();
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
        cout << "                                 Embaucadora: " << embaucadora << endl;
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;

        if(i == 1)
        {
            if (puntosPlayer1 >= 20)
            {
                cout << endl;
                cout << " " << player1 << ", ¿Deseas modificar la carta embaucadora actual "<< embaucadora <<"? (20 puntos)(S/N): ";
                cin >> opcion;
                cout << endl;

                while(opcion != 'S' && opcion != 's' && opcion != 'N' && opcion != 'n')
                {
                    cout << "                       **Error de tipeo, pruebe nuevamente.**" << endl;
                    cout << endl;
                    cout << " " << player1 << ", ¿Deseas modificar la carta embaucadora actual "<< embaucadora <<"? (20 puntos)(S/N): ";
                    cin >> opcion;
                    cout << endl;
                }

                if (opcion == 's' || opcion == 'S')
                {
                    ///Resto el sacrificio de randomizar la embaucadora
                    puntosPlayer1 -= 20;

                    ///Nueva embaucadora
                    embaucadora = randomizarCartaEmbaucadora();
                    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
                    cout << "  !                          Nueva Embaucadora: " << embaucadora << endl;
                    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;

                }
                else if (opcion == 'n' || opcion == 'N')
                {
                    if (puntosPlayer2 >= 20)
                    {
                        cout << " " << player2 << ", ¿Deseas modificar la carta embaucadora actual "<< embaucadora <<"? (20 puntos) (S/N): ";
                        cin >> opcion;
                        cout << endl;

                        while(opcion != 'S' && opcion != 's' && opcion != 'N' && opcion != 'n')
                        {
                            cout << "                       **Error de tipeo, pruebe nuevamente.**" << endl;
                            cout << endl;
                            cout << " " << player2 << ", ¿Deseas modificar la carta embaucadora actual "<< embaucadora <<"? (20 puntos) (S/N): ";
                            cin >> opcion;
                            cout << endl;
                        }

                        if (opcion == 's' || opcion == 'S')
                        {
                            ///Resto el sacrificio de randomizar la embaucadora
                            puntosPlayer2 -= 20;

                            ///Nueva embaucadora
                            embaucadora = randomizarCartaEmbaucadora();
                            cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
                            cout << "                             Nueva Embaucadora: " << embaucadora << endl;
                            cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
                        }
                    }
                }
            }

        }
        else if(i == 2)
        {
            if (puntosPlayer2 >= 20)
            {
                cout << endl;
                cout << " " << player2 << ", ¿Deseas modificar la carta embaucadora actual "<< embaucadora <<"? (20 puntos) (S/N): ";
                cin >> opcion;
                cout << endl;

                while(opcion != 'S' && opcion != 's' && opcion != 'N' && opcion != 'n')
                {
                    cout << "                       **Error de tipeo, pruebe nuevamente.**" << endl;
                    cout << endl;
                    cout << " " << player2 << ", ¿Deseas modificar la carta embaucadora actual "<< embaucadora <<"? (0 puntos) (S/N): ";
                    cin >> opcion;
                    cout << endl;
                }

                if (opcion == 's' || opcion == 'S')
                {
                    ///Resto el sacrificio de randomizar la embaucadora
                    puntosPlayer2 -= 20;

                    ///Nueva embaucadora
                    embaucadora = randomizarCartaEmbaucadora();
                    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
                    cout << "  !                          Nueva Embaucadora: " << embaucadora << endl;
                    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;

                }
                else if (opcion == 'n' || opcion == 'N')
                {
                    if (puntosPlayer1 >= 20)
                    {
                        cout << " " << player1 << ", ¿Deseas modificar la carta embaucadora actual "<< embaucadora <<"? (20 puntos)(S/N): ";
                        cin >> opcion;
                        cout << endl;

                        while(opcion != 'S' && opcion != 's' && opcion != 'N' && opcion != 'n')
                        {
                            cout << "                       **Error de tipeo, pruebe nuevamente.**" << endl;
                            cout << endl;
                            cout << " " << player1 << ", ¿Deseas modificar la carta embaucadora actual "<< embaucadora <<"? (20 puntos)(S/N): ";
                            cin >> opcion;
                            cout << endl;
                        }

                        if (opcion == 's' || opcion == 'S')
                        {
                            ///Resto el sacrificio de randomizar la embaucadora
                            puntosPlayer1 -= 20;

                            ///Nueva embaucadora
                            embaucadora = randomizarCartaEmbaucadora();
                            cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
                            cout << "                             Nueva Embaucadora: " << embaucadora << endl;
                            cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
                        }
                    }
                }
            }
        }

        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
        cout << "  !                              Puntajes obtenidos                              !" << endl;
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;

        ///Aca se muestra una preview de los puntajes optenidos por cada naipe, menos las embaucadas
        puntosPorRondaP1[i] = calcularPuntajesPlayers(player1, puntosPlayer1, naipe_ActualP1, TAM_N, figura_ActualP1, TAM_N, embaucadora);
        cout << endl;
        puntosPorRondaP2[i] = calcularPuntajesPlayers(player2, puntosPlayer2, naipe_ActualP2, TAM_N, figura_ActualP2, TAM_N, embaucadora);
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;

        cout << endl;
        system("pause");
    }

    finalizarJuegoYMostrarEstadisticas(player1, player2, puntosPorRondaP1, TAM_R, puntosPorRondaP2, TAM_R, puntosPlayer1, puntosPlayer2, nombrePuntajeMaximo, TAM_P, puntajeMaximo, TAM_M);
}

void finalizarJuegoYMostrarEstadisticas(string player1, string player2, int puntosPorRondaP1[], int TAM_R1, int puntosPorRondaP2[], int TAM_R, int puntosPlayer1, int puntosPlayer2, string nombrePuntajeMaximo[], int TAM_P, int puntajeMaximo[], int TAM_M)
{
    bool bandera = true;

    system("cls");
    cout << endl;
    ///Resumen en final de las 3 partdias, muestra los resultados de cada ronda y un total
    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
    cout << "  !                             RESUMEN DE PARTIDA:                              !" << endl;
    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
    cout << " \t \t RONDA:  \t \t " << player1 << "   \t \t    " << player2 << endl;
    cout << endl;
    cout << " \t \t  1  :   \t \t   " << puntosPorRondaP1[0] << "   \t \t    " << puntosPorRondaP2[0] << endl;
    cout << " \t \t  2  :   \t \t   " << puntosPorRondaP1[1] << "   \t \t    " << puntosPorRondaP2[1] << endl;
    cout << " \t \t  3  :   \t \t   " << puntosPorRondaP1[2] << "   \t \t    " << puntosPorRondaP2[2] << endl;
    cout << endl;
    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
    cout << " \t \t TOTAL:   \t \t   " << puntosPlayer1 << "   \t \t    " << puntosPlayer2 << endl;


    if(puntosPlayer1 > puntosPlayer2)
    {
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
        cout << "   \t\t GANADOR: " << player1 << " con " << puntosPlayer1 << " puntos de victoria!!!" << endl;
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;

        ///Calcular valoresa maximo pero por partida (v2) ponele... (hay que mejorarlo tira fallas)
        for(int x = 0; x < 3; x++)
        {
            if(puntosPlayer1 > puntajeMaximo[x])
            {
                ///Mueve los puntajes mas bajos en la posición correspondiente
                for (int j = 2; j > x; j--)
                {
                    puntajeMaximo[j] = puntajeMaximo[j-1];
                    nombrePuntajeMaximo[j] = nombrePuntajeMaximo[j-1];
                }
                ///Nuevo puntaje en la posicion correcta
                puntajeMaximo[x] = puntosPlayer1;
                nombrePuntajeMaximo[x] = player1;
                break;
            }
        }


    }
    else if(puntosPlayer2 > puntosPlayer1)
    {
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
        cout << "   \t\t GANADOR: " << player2 << " con " << puntosPlayer2 << " de victoria!!!" << endl;
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;

        ///Calcular valoresa maximo pero por partida (v2) mas o menos....

        for(int y = 0; y < 3; y++)
        {
            if(puntosPlayer2 > puntajeMaximo[y])
            {
                ///Mueve los puntajes mas bajos en la posición correspondiente
                for (int z = 2; z > y; z--)
                {
                    puntajeMaximo[z] = puntajeMaximo[z-1];
                    nombrePuntajeMaximo[z] = nombrePuntajeMaximo[z-1];
                }
                ///Nuevo puntaje en la posicion correcta
                puntajeMaximo[y] = puntosPlayer2;
                nombrePuntajeMaximo[y] = player2;
                break;
            }
        }

    }
    else
    {
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
        cout << "  ! EMPATE ENTRE: " << player1 << " y " << player2 << " PROCEDEMOS A DESEMPATAR  !" << endl;
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;

        desempatarPlayers(player1, player2, puntosPlayer1, puntosPlayer2, nombrePuntajeMaximo, TAM_P, puntajeMaximo, TAM_M);
        system("pause");
    }
    cout << endl;

    system("pause");
}

void randomizarCartasParaPlayers(string figura_ActualP1[], int TAM_P1, string naipe_ActualP1[], int TAM_N1, string figura_ActualP2[], int TAM_P2, string naipe_ActualP2[], int TAM_N2)
{
    ///Declaro las figuras y los naipes
    int const TAM_F = 4, TAM_N = 5, TAM_T = 10;
    int RAN_F, RAN_N, contCartas = 0;

    string figura[TAM_F] = {"Picas", "Corazon", "Trebol", "Diamantes"};
    string naipe[TAM_N] = {"10", "J", "Q", "K", "A"};

    string figura_Actual[TAM_T];
    string naipe_Actual[TAM_T];

    /// Genero 10 cartas randoms todas distintas (al fin...)
    while (contCartas < TAM_T)
    {
        /// Numeros randoms
        RAN_F = rand() % TAM_F;
        RAN_N = rand() % TAM_N;

        /// Bandera repetidos
        bool noRepetida = true;

        /// Comparo en cada carta con las ya randomizadas anteriormente
        for (int i = 0; i < contCartas; i++)
        {
            if (figura_Actual[i] == figura[RAN_F] && naipe_Actual[i] == naipe[RAN_N])
            {
                noRepetida = false;
            }
        }

        /// Guardo la carta con figura y naipe random
        if (noRepetida)
        {
            figura_Actual[contCartas] = figura[RAN_F];
            naipe_Actual[contCartas] = naipe[RAN_N];

            /// Cuento cuantas cartas se van randomizando
            contCartas++;
        }
    }

    /// Divido en los 2 players
    for (int x = 0; x < 10; x++)
    {
        if (x < 5)
        {
            figura_ActualP1[x] = figura_Actual[x];
            naipe_ActualP1[x] = naipe_Actual[x];
        }
        else
        {
            figura_ActualP2[x - 5] = figura_Actual[x];
            naipe_ActualP2[x - 5] = naipe_Actual[x];
        }
    }
}

string randomizarCartaEmbaucadora()
{

    ///Randopmizador de las figuras de para la embaucadora, devuelve uno al "azar"
    int const TAM_F = 4;
    int RAN_F;

    string figura[TAM_F] = {"Picas", "Corazon", "Trebol", "Diamantes"};

    RAN_F = (rand() % TAM_F);

    return figura[RAN_F];

}

int calcularPuntajesPlayers(string player, int &puntosPlayer, string naipe_ActualP[], int TAM_N, string figura_ActualP[], int TAM_A, string embaucadora)
{
    /// Contador de puntos para retornar al final, guardar en un vector mostrar en el resumen
    int contadorDePuntos = 0;

    cout << "                          " << player << ": ";

    /// Ciclo de 5 vueltas para comparar con la embaucadora y solo sumar las que no coinciden
    for (int i = 0; i < 5; i++)
    {
        if (figura_ActualP[i] != embaucadora)
        {
            if (naipe_ActualP[i] == "10")
            {
                cout << " 10 ";
                puntosPlayer += 10;
                contadorDePuntos += 10;
            }
            else if (naipe_ActualP[i] == "J")
            {
                cout << " 11 ";
                puntosPlayer += 11;
                contadorDePuntos += 11;
            }
            else if (naipe_ActualP[i] == "Q")
            {
                cout << " 12 ";
                puntosPlayer += 12;
                contadorDePuntos += 12;
            }
            else if (naipe_ActualP[i] == "K")
            {
                cout << " 15 ";
                puntosPlayer += 15;
                contadorDePuntos += 15;
            }
            else if (naipe_ActualP[i] == "A")
            {
                cout << " 20 ";
                puntosPlayer += 20;
                contadorDePuntos += 20;
            }
        }
    }
    cout << " = " << puntosPlayer << " puntos." << endl;


    ///Calcularo puntaje mayores (v1)
    ///for(int x = 0; x < 3; x++)
    ///{
    ///    if(puntosPlayer > puntajeMaximo[x] && bandera == true)
    ///    {
    ///        if(puntajeMaximo[x] > puntajeMaximo[x+1])
    ///        {
    ///            puntajeMaximo[x+1] = puntajeMaximo[x];
    ///            nombrePuntajeMaximo[x+1] = nombrePuntajeMaximo[x];
    ///        }

    ///        puntajeMaximo[x] = puntosPlayer;
    ///        nombrePuntajeMaximo[x] = player;
    ///        bandera = false;
    ///    }
    ///}

    /// Retona el punta individual de cada player por cada una de las 3 rondas para que se muestre en el resumen
    return contadorDePuntos;
}

void mostrarEstadisticas(string nombrePuntajeMaximo[], int TAM_P, int puntajeMaximo[], int TAM_M)
{
    system("cls");

    /// Estadisticas por partida de los puntajes maximos de los ganadores nada más
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
    cout << "  !                      |        ESTADISTICAS         |                         !" << endl;
    cout << "  !                      +-----------------------------+                         !" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
    cout << "  !       LUGAR:                    PUNTOS:                    NOMBRE:           !" << endl;
    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
    cout << endl;
    cout << "        1: ORO    :                  " << puntajeMaximo[0] << "                       " << nombrePuntajeMaximo[0] << endl;
    cout << "        2: PLATA  :                  " << puntajeMaximo[1] << "                       " << nombrePuntajeMaximo[1] << endl;
    cout << "        3: BRONCE :                  " << puntajeMaximo[2] << "                       " << nombrePuntajeMaximo[2] << endl;
    cout << endl;
    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
    cout << "  !            Programar compulsivamente es perjudicial para la salud.           !" << endl;
    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
    cout << endl;
    system("pause");
}

void mostrarCreditos()
{
    system("cls");

    /// Creditos con los datos de los participantes
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
    cout << "  !                      |          CREDITOS           |                         !" << endl;
    cout << "  !                      +-----------------------------+                         !" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  !              +-----------------------------------------------+               !" << endl;
    cout << "  !              | LEGAJO:        NOMBRE:          APELLIDO:     |               !" << endl;
    cout << "  !              +-----------------------------------------------+               !" << endl;
    cout << "  !              |  30999          Tomás         Guzmán Camacho  |               !" << endl;
    cout << "  !              +-----------------------------------------------+               !" << endl;
    cout << "  !              |  30957       Germán J. E.        Dieser       |               !" << endl;
    cout << "  !              +-----------------------------------------------+               !" << endl;
    cout << "  !              |                  GRUPO: 32                    |               !" << endl;
    cout << "  !              +-----------------------------------------------+               !" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
    cout << endl;
    system("pause");

    /// Con lo que costo centrar todo ni se te ocurra cambiarte el nombre ¬¬
}

void mostrarReglasDeJuego()
{
    system("cls");
    /// Breve (ponele) descripción del juego
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
    cout << "  !                      +-----------------------------+                         !" << endl;
    cout << "  !                      |       REGLAS DE JUEGO       |                         !" << endl;
    cout << "  !                      +-----------------------------+                         !" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  !         Embaucado es un juego de naipes diseñado para dos jugadores,         !" << endl;
    cout << "  !         que se juega utilizando 20 naipes específicos de una baraja          !" << endl;
    cout << "  !              francesa con diferentes valores dentro del juego.               !" << endl;
    cout << "  !              Y, además, hay cuatro naipes (una de cada figura)               !" << endl;
    cout << "  !                          que sería la embaucadora.                           !" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  !                               Lo valores son:                                !" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  !                                10: 10 puntos                                 !" << endl;
    cout << "  !                                 J: 11 puntos                                 !" << endl;
    cout << "  !                                 Q: 12 puntos                                 !" << endl;
    cout << "  !                                 K: 15 puntos                                 !" << endl;
    cout << "  !                                 A: 20 puntos                                 !" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  !              Y la figura son: Corazón, Diamante, Pica y Trébol               !" << endl;
    cout << "  !             El objetivo del juego es ganar acumulando más puntos             !" << endl;
    cout << "  !              que el oponente a lo largo de tres rondas. En cada              !" << endl;
    cout << "  !             ronda, cada jugador recibe una mano de cinco cartas              !" << endl;
    cout << "  !            al azar. Simultáneamente, se revela una carta del mazo            !" << endl;
    cout << "  !                de figuras, conocida como la “EMBAUCADORA”, que               !" << endl;
    cout << "  !             determina cuáles cartas de la mano no sumarán puntos             !" << endl;
    cout << "  !                                en esa ronda.                                 !" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  !                     Cualquier carta del mismo palo que la                    !" << endl;
    cout << "  !               carta embaucadora no suma puntos, lo que añade un              !" << endl;
    cout << "  !            elemento estratégico al juego. A partir de la segunda             !" << endl;
    cout << "  !             ronda, los jugadores tienen la opción de sacrificar              !" << endl;
    cout << "  !            20 puntos acumulado para cambiar la carta embaucadora.            !" << endl;
    cout << "  !            Esto solo puede hacerse una vez por ronda y solo si el            !" << endl;
    cout << "  !              jugador tiene más de 20 PUNTOS. En la segunda ronda,            !" << endl;
    cout << "  !        el jugador 1 tiene la primera oportunidad para cambiar la carta       !" << endl;
    cout << "  !        embaucadora, y si decide no hacerlo, el jugador 2 puede hacerlo.      !" << endl;
    cout << "  !              En la tercera ronda, el turno para sacrificar puntos            !" << endl;
    cout << "  !            primero pasa al jugador 2, y si este decide no hacerlo,           !" << endl;
    cout << "  !        el jugador 1 puede tomar la acción. Al final de las tres rondas,      !" << endl;
    cout << "  !         el jugador que haya acumulado más puntos es declarado ganador        !" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;

    system("pause");
}

void desempatarPlayers(string player1, string player2, int puntosPlayer1, int puntosPlayer2, string nombrePuntajeMaximo[], int TAM_P, int puntajeMaximo[], int TAM_M)
{
    int moneda;
    moneda = (rand() % 2);


    string caraCruz[2] = {"Cara", "Cruz"};

    system("cls");

    /// Estadisticas por partida de los puntajes maximos de los ganadores nada más
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
    cout << "  !                      |        DESEMPATE!!!         |                         !" << endl;
    cout << "  !                      +-----------------------------+                         !" << endl;
    cout << "  !                                                                              !" << endl;
    cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
    cout << endl;
    cout << "                                 " << player1 << " vs " << player2 << endl;
    cout << endl;
    cout << "                       Vamos a tirar una moneda al aire....." << endl;
    cout << endl;
    cout << "                             " << player1 << ": CARA " << player2 << ": CRUZ " << endl;
    cout << endl;
    system("pause");
    cout << endl;
    cout << "                                  3....2....1...." << endl;
    cout << endl;
    system("pause");
    cout << endl;
    cout << "                                  Monedad: " << caraCruz[moneda] << endl;
    cout << endl;
    system("pause");

    cout << endl;
    if(moneda == 0)
    {
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
        cout << "                                GANADOR: " << player1 << "!!! " << endl;
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;

        ///Calcular valoresa maximo pero por partida (v2) ponele...
        ///V3 Ahora si...
        for(int x = 0; x < 3; x++)
        {
            if(puntosPlayer1 > puntajeMaximo[x])
            {
                ///Mueve los puntajes mas bajos en la posición correspondiente
                for (int j = 2; j > x; j--)
                {
                    puntajeMaximo[j] = puntajeMaximo[j-1];
                    nombrePuntajeMaximo[j] = nombrePuntajeMaximo[j-1];
                }
                ///Nuevo puntaje en la posicion correcta
                puntajeMaximo[x] = puntosPlayer1;
                nombrePuntajeMaximo[x] = player1;
                break;
            }
        }
    }
    else
    {
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;
        cout << "                                GANADOR: " << player2 << "!!!" << endl;
        cout << "  +~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-+" << endl;

        ///Calcular valoresa maximo pero por partida (v2) mas o menos....
        ///V3 Ahora si...
        for(int y = 0; y < 3; y++)
        {
            if(puntosPlayer2 > puntajeMaximo[y])
            {
                ///Mueve los puntajes mas bajos en la posición correspondiente
                for (int z = 2; z > y; z--)
                {
                    puntajeMaximo[z] = puntajeMaximo[z-1];
                    nombrePuntajeMaximo[z] = nombrePuntajeMaximo[z-1];
                }
                ///Nuevo puntaje en la posicion correcta
                puntajeMaximo[y] = puntosPlayer2;
                nombrePuntajeMaximo[y] = player2;
                break;
            }
        }
    }
    system("pause");
}
