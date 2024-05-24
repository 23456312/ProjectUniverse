#include <iostream>
#include "Person.h"
using namespace std;
#ifndef CONTESTANTS_H
#define CONTESTANTS_H

class Contestants:public Person{
public:
  int initialRank{};
  Contestants();
  Contestants(string n, int a, string na,int rank): Person(n,a,na), initialRank(rank){};

private:
  int getinitialRank() const;

  void setinitialRank(int);
};

#endif