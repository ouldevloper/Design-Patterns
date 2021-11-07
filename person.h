#ifndef PERSON_H
#define PERSON_H
#include "connection.h"
#include <iostream>

class person
{
private:
    connection *cnx;
    int id;
    std::string name;
    std::string address;

public:
    person(connection *, int, std::string, std::string);
    void getAll(void);
    void add(person);
    int getid();
    std::string getname();
    std::string getaddress();
};
#endif