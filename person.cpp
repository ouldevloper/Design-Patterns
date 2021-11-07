#include "person.h"

person::person(connection *cnx,
               int a,
               std::string b,
               std::string c)
{
    person::cnx = cnx;
    person::id = a;
    person::name = b;
    person::address = c;
}
void person::getAll(void)
{
    person::cnx->getAll();
}
void person::add(person per)
{
    person::cnx->add(per);
}
int person::getid()
{
    return person::id;
}
std::string person::getname()
{
    return person::name;
}
std::string person::getaddress()
{
    return person::address;
}