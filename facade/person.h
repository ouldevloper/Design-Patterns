#include <iostream>
#ifndef PERSON_H
#define PERSON_H
using namespace std;
class person{
    private:
        string name;
        string address;
        int age;
    public:
        int getAge();
        void setAge(int age);
        string getName();
        void setName(string name);
        string getAddress();
        void setAddress(string address);
};
#endif