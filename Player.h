#include "Person.h"
#include <iostream>
using namespace std;
#ifndef PLAYER_H
#define PLAYER_H

class Player : public Person {
public:
  Player();
  Player(string n, int a, string na, int rank) : Person(n, a, na, rank){};

  void elimination() {
    cout << "✫Sadly, you've been eliminated from the competition, would you "
            "like to try again? ✫";
  }

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
    std::cout << "⟡ " << getInitialRank() << endl;
    std::cout << "★・・・・・・・・・・★\n";
    cout << "\n";
  }

  // Virtual Destuctor for every Derived class
  virtual ~Player() {}

  // int getinitialRank() const;
  // void setinitialRank(int);

private:
};

#endif