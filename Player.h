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
    std::cout << "⟡ " << name << endl;
    std::cout << "○ AGE ○\n ";
    std::cout << "⟡ " << age << endl;
    std::cout << "● NATIONALITY ●\n ";
    std::cout << "⟡ " << nationality << endl;
    std::cout << "○ INITIAL RANK ○\n ";
    std::cout << "⟡ " << initialRank << endl;
    std::cout << "★・・・・・・・・・・★\n";
    cout << "\n";
  }

  // int getinitialRank() const;
  // void setinitialRank(int);

private:
};

#endif