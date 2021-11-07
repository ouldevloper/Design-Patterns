#ifndef CONNECTION_H
#define CONNECTION_H
#include <iostream>
#include <vector>
#include "person.h"
class connection
{
private:
    static std::vector<person> lst;

public:
    void add(person);
    void getAll();
};

#endif