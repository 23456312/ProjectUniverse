#include <iostream>
using namespace std;
#ifndef PERSON_H
#define PERSON_H

class Person {
public:
  string getname() const;
  int getage() const;
  string getnationality() const;

  void setname(string);
  void setage(int);
  void setnationality(string);

  string name{};
  int age{};
  string nationality{};
  int initialRank{};
  Person();
  Person(string n, int a, string na, int rank) {
    name = n;
    age = a;
    nationality = na;
    initialRank = rank;
  }
  void elimination() { cout << "You've been eliminated"; }

  void info() { cout << name << age << nationality << initialRank << endl; }

private:
};

#endif