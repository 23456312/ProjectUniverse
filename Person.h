#include <iostream>
using namespace std;
#ifndef PERSON_H
#define PERSON_H

class Person {
public:
  string getName() { return name; };
  int getAge() { return age; };
  string getNationality() { return nationality; };
  int getInitialRank() { return initialRank; }

  void setName(string n) { name = n; }
  void setAge(int a) { age = a; }
  void setNationality(string n) { nationality = n; }
  void setInitialRank(int rank) { initialRank = rank; }

  Person();
  Person(string n, int a, string na, int rank) {
    name = n;
    age = a;
    nationality = na;
    initialRank = rank;
  }

  virtual void elimination() = 0;

  virtual void info() = 0;

  // usage of virtual Destuctor to avoid memory leak
  virtual ~Person() {}

private:
  string name{};
  int age{};
  string nationality{};
  int initialRank{};
};

#endif