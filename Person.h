#include <iostream>
using namespace std;
#ifndef PERSON_H
#define PERSON_H

class Person{
public:
  string name{};
  int age{};
  string nationality{};
  Person();
  Person(string n, int a, string na);
  void elimination(){
    cout << "You've been disqualified due to your preformance";
  }
  
private:

  string getname() const;
  int getage() const;
  string getnationality() const;

  void setname(string);
  void setage(int);
  void setnationality(string);
 
};

#endif