/*
 * Project Universe
 * Sebastián Pérez García
 * A01707346
 * 13/06/2024
 *
 * Esta clase defina objeto de tipo Contestant que hereda de la clase Person.
 * 
 */

// Inclusión de la clase Person y librerías necesarias
#include "Person.h"
#include <iostream>
#include <vector>
using namespace std;
#ifndef CONTESTANT_H
#define CONTESTANT_H

// Declaración de la clase Contestant que hereda de Person

class Contestant : public Person {
//Metodos publicos del objeto
public:
//Getters
  string getName() { return name; };
  int getAge() { return age; };
  string getNationality() { return nationality; };
  int getRank() { return rank; }
  string getType() { return type; }
  bool getIsEliminated() { return isEliminated; };
//Setters
  void setRank(int r) { rank = r; }
  void setName(string n) { name = n; }
  void setAge(int a) { age = a; }
  void setNationality(string n) { nationality = n; }
  void setType(string t) { type = t; }
  void setIsEliminated(bool eliminated) { isEliminated = eliminated; }

// Constructores de Contestant
  Contestant();// Constructor por defecto
  Contestant(string n, int a, string na, string t) : Person(n, a, na, -1, t){};// Constructor con parámetros


/**
 * info imprime el mensaje de info del Contestant.
 * Método de informacion de Contestant.
 * Muestra un mensaje los stats del Contestant en la competencia.
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
 * elimination imprime el mensaje para Contestant.
 * Método de eliminación de Contestant.
 * Muestra un mensaje indicando que el contestant ha sido eliminado de la competencia.
 *
 * @param no necesita
 * @return no regresa nada.
 */

  void elimination() {
    cout << "You've been disqualified due to your performance "
         << "\n";
  }

// Destructor virtual para evitar problemas de liberación de memoria
  virtual ~Contestant() {}
/**
 * getInitialRank trata de conseguir el rank incial de los contestants.
 * 
 * Método para obtener el rango inicial de Contestant.
 *
 * @param RankList Lista de rangos disponibles.
 * @return Rango inicial del Contestant.
 */

  int getInitialRank(vector<int> &rankList) { return 0; }
  
};

#endif