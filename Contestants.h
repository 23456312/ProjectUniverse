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
      : Person(n, a, na, getInitialRank(RankList)) {
    RankList[initialRank] = 1;
  };

  void info() {
    std::cout << "\n";
    cout << "☾ Name: " << name << ",\n ☾ Age: " << age
         << ",\n ☾ Nationality: " << nationality
         << ",\n ☾ Rank: " << initialRank << endl;

    std::cout << "\n";
  }

  void elimination() {
    cout << "You've been disqualified due to your preformance";
  }

private:
  int getInitialRank(vector<int> &rankList) {
    initialRank = rand() % rankList.size() - 1;
    while (rankList[initialRank] == 1) {
      if (initialRank >= rankList.size()) {
        initialRank = 0;
      } else {
        initialRank += 1;
      }
    }
    return initialRank;
  }
  // int getinitialRank() const;
  // void setinitialRank(int);
};

#endif