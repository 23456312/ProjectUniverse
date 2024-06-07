#include "Person.h"
#include <iostream>
#include <vector>
using namespace std;
#ifndef CONTESTANTS_H
#define CONTESTANTS_H

class Contestants : public Person {
public:
  bool isEliminated; // similar to isAlive

  Contestants();
  Contestants(string n, int a, string na, vector<int> &RankList)
      : Person(n, a, na, calculateInitialRank(RankList)) {
    RankList[getInitialRank()] = 1;
  };

  void info() {
    std::cout << "\n";
    cout << "☾ Name: " << getName() << ",\n ☾ Age: " << getAge()
         << ",\n ☾ Nationality: " << getNationality()
         << ",\n ☾ Rank: " << getInitialRank() << endl;

    std::cout << "\n";
  }

  void elimination() {
    cout << "You've been disqualified due to your preformance " << getName()
         << "\n";
  }

  // Virtual Destuctor for every Derived class
  virtual ~Contestants() {}

private:
  int calculateInitialRank(vector<int> &rankList) {
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