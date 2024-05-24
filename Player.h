#include <iostream>
#include "Person.h"
using namespace std;
#ifndef PLAYER_H
#define PLAYER_H

class Player: public Person{
public:
  Player();
  Player(string n, int a, string na, int rank): Person(n, a, na), initialRank(rank) {}
  int initialRank{};

void elimination(){
  cout << "✫Sadly, you've been eliminated from the competition, would you like to try again? ✫";
}

private:
  int getinitialRank() const;

  void setinitialRank(int);

};

#endif