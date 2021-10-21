#include "person.h"
using namespace std;
class facade {
    protected: static person  *p;
    public:
        int static getAge();
        void static setAge(int age);
        string static getName();
        void static setName(string name);
        string static getAddress();
        void static setAddress(string address);
};