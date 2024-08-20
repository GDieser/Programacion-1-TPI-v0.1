#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

using namespace std;

void elegirOpcionesDelJuego(std::string &player1, std::string &player2, char &opcion, std::string nombrePuntajeMaximo[], int TAM_P, int puntajeMaximo[], int TAM_M);

void mostrarMenuEmbaucado(char &opcion);

void mostrarEstadisticas(string nombrePuntajeMaximo[], int TAM_P, int puntajeMaximo[], int TAM_M);

void mostrarCreditos();

void mostrarReglasDeJuego();

void registarNombresJugadores(std::string &player1, std::string &player2, std::string nombrePuntajeMaximo[], int TAM_P, int puntajeMaximo[], int TAM_M);

void comenzarJuego(std::string &player1, std::string &player2, std::string nombrePuntajeMaximo[], int TAM_P, int puntajeMaximo[], int TAM_M);

void finalizarJuegoYMostrarEstadisticas(string player1, string player2, int puntosPorRondaP1[], int TAM_R1, int puntosPorRondaP2[], int TAM_R, int puntosPlayer1, int puntosPlayer2, string nombrePuntajeMaximo[], int TAM_P, int puntajeMaximo[], int TAM_M);

void randomizarCartasParaPlayers(std::string figura_ActualP1[], int TAM_P1, std::string naipe_ActualP1[], int TAM_N1, std::string figura_ActualP2[], int TAM_P2, std::string naipe_ActualP2[], int TAM_N2);

string randomizarCartaEmbaucadora();

int calcularPuntajesPlayers(string player, int &puntosPlayer, string naipe_ActualP[], int TAM_N, string figura_ActualP[], int TAM_A, string embaucadora);

void desempatarPlayers(string player1, string player2, int puntosPlayer1, int puntosPlayer2, string nombrePuntajeMaximo[], int TAM_P, int puntajeMaximo[], int TAM_M);


#endif // FUNCIONES_H_INCLUDED
