/*
 * Project Universe
 * Sebastián Pérez García
 * A01707346
 * 13/06/2024
 *
 * Esta clase defina objeto de tipo Player que hereda de la clase Contestant 
 * 
 */

// Inclusión de la clase Contestant y librerías necesarias
#include "Contestant.h"
#include <iostream>
using namespace std;
#ifndef PLAYER_H
#define PLAYER_H
#include <vector>

// Declaración de la clase Player que hereda de Contestant
class Player : public Contestant {
//Metodos publicos del objeto
public:
// Constructores de Player
  Player();// Constructor por defecto
  Player(string n, int a, string na) : Contestant(n, a, na, "Player"){}; // Constructor con parámetros

/**
 * elimination imprime el mensaje para Player.
 * Método de eliminación de Player.
 * Muestra un mensaje indicando que el jugador ha sido eliminado de la competencia.
 *
 * @param no necesita
 * @return no regresa nada.
 */
  void elimination() {
    cout << "✫Sadly, you've been eliminated from the competition, would you "
            "like to try again? ✫";
  }


/**
 * info imprime el mensaje de info del Player.
 * Método de informacion de Player.
 * Muestra un mensaje los stats del jugador en la competencia.
 *
 * @param no necesita
 * @return no regresa nada.
 */

  void info() {
    std::cout << "\n";
    std::cout << "★・・・STATS・・・★\n";
    std::cout << "● NAME ●\n ";
    std::cout << "⟡ " << getName() << endl;
    std::cout << "○ AGE ○\n ";
    std::cout << "⟡ " << getAge() << endl;
    std::cout << "● NATIONALITY ●\n ";
    std::cout << "⟡ " << getNationality() << endl;
    std::cout << "○ INITIAL RANK ○\n ";
    std::cout << "⟡ " << getRank() << endl;
    std::cout << "★・・・・・・・・・・★\n";
    cout << "\n";
  }

// Destructor virtual para evitar problemas de liberación de memoria
  virtual ~Player() {}


/**
 * getInitialRank trata de conseguir el rank incial del jugador.
 * 
 * Método para obtener el rango inicial de Player.
 *
 * @param RankList Lista de rangos disponibles.
 * @return Rango inicial del jugador.
 */

  int getInitialRank(vector<int> &rankList) { return rand() % rankList.size(); }


};

#endif