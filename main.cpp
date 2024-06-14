/*
 * Project Universe
 * Sebastián Pérez García
 * A01707346
 * 13/06/2024
 *
 * Este es el projecto presentado para la clase TC1030 Programación Orientado a Objetos. Dicho programa es una competencia similar a la de Universe Ticket. En la cual pasasas por diferentes etapas para poder llegar a debutar en el grupo llamado "Unis". 
 * 
 */

#include "Contest.h" // bibliotecas con objetos de mi proyecto.
#include <iostream> // para imprimir.

using namespace std;

int main() {
  srand(time(NULL));
  Contest contest = Contest();
  contest.intro();

  string name;
  int age;
  string nationality;

  std::cout << "❥Enter your name:\n";
  cin >> name;
  std::cout << "❥Enter your age:\n";
  cin >> age;
  std::cout << "❥Enter your nationality:\n";
  cin >> nationality;

  contest.start(name, age, nationality);

  
}
