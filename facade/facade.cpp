
#include "facade.h"
#include "person.h"
person * facade::p =  new person;
int facade::getAge(){ return facade::p->getAge(); }
void facade::setAge(int age){ facade::p->setAge(age); }
string facade::getName(){ return facade::p->getName(); }
void facade::setName(string name){ facade::p->setName(name); }
string facade::getAddress(){ return facade::p->getAddress(); }
void facade::setAddress(string address){ facade::p->setAddress(address); }