/*
 * Project Universe
 * Sebastián Pérez García
 * A01707346
 * 13/06/2024
 *
 * Esta clase defina objeto de tipo NonPlayableCharacter que hereda de la clase
 * Contestant.
 *
 */
// Inclusión de la clase Contestant y librerías necesarias
#include "Contestant.h"
#include <iostream>
#include <vector>
#ifndef NONPLAYABLECHARACTER_H
#define NONPLAYABLECHARACTER_H
using namespace std;

// Declaración de la clase NonPlayableCharacter que hereda de Contestant

class NonPlayableCharacter : public Contestant {
  // Metodos publicos del objeto
public:
  // Constructores de NonPlayableCharacter
  NonPlayableCharacter(); // Constructor por defecto
  NonPlayableCharacter(string n, int a, string na)
      : Contestant(n, a, na, "Contestant"){}; // Constructor con parametros

  /**
   * info imprime el mensaje de info del NonPlayableCharacter.
   * Método de informacion de NonPlayableCharacter.
   * Muestra un mensaje los stats del NonPlayableCharacter en la competencia.
   *
   * @param no necesita
   * @return no regresa nada.
   */
  void info() {
    std::cout << "\n";
    cout << "☾ Name: " << getName() << ",\n ☾ Age: " << getAge()
         << ",\n ☾ Nationality: " << getNationality()
         << ",\n ☾ Rank: " << getRank() << endl;

    std::cout << "\n";
  }

  /**
   * elimination imprime el mensaje para NonPlayableCharacter.
   * Método de eliminación de NonPlayableCharacter.
   * Muestra un mensaje indicando que el NonPlayableCharacter ha sido eliminado
   * de la competencia.
   *
   * @param no necesita
   * @return no regresa nada.
   */

  void elimination() {
    if (isEliminated == true) {
      return;
    }
    cout << "You've been disqualified due to your performance " << getName()
         << "\n";
  }

  // Destructor virtual para evitar problemas de liberación de memoria
  virtual ~NonPlayableCharacter() {}

  // Método para obtener el rango inicial de NonPlayableCharacter
  /**
   * Método para obtener el rango inicial de NonPlayableCharacter.
   *
   * @param rankList Lista de rangos disponibles.
   * @return Rango inicial de NonPlayableCharacter.
   */

  int getInitialRank(vector<int> &rankList) {
    int initialRank = rand() % rankList.size();
    while (rankList[initialRank] == 1) {
      if (initialRank >= rankList.size()) {
        initialRank = 0;
      } else {
        initialRank += 1;
      }
    }
    return initialRank;
  }
};

#endif