/*
 * Project Universe
 * Sebastián Pérez García
 * A01707346
 * 13/06/2024
 *
 * Esta clase defina objeto de tipo person que contiene las clases heredadas. Contestant 
 * 
 */

#include <iostream>
using namespace std;
#ifndef PERSON_H
#define PERSON_H
#include <vector>

// Declaración de clase Person que es abstracta
class Person {
//metodos protegidos del objeto
protected:
// Variables miembro
  string name{};
  int age{};
  string nationality{};
  int rank{};
  string type{};
  bool isEliminated{};

//Metodos publicos del objeto
public:
// Constructor por defecto
  Person();
// Constructor con parámetros
  Person(string n, int a, string na, int r, string t) {
    name = n;
    age = a;
    nationality = na;
    rank = r;
    type = t;
    isEliminated = false;
  }
// Métodos virtuales puros que deben ser implementados en clases derivadas
  virtual void elimination() = 0; //método abstracto será sobreescrito

  virtual void info() = 0; //método abstracto será sobreescrito

  virtual int getInitialRank(vector<int> &rankList) = 0; //método abstracto será sobreescrito

  // Destructor virtual para evitar problemas de liberación de memoria
  virtual ~Person() {}


};

#endif