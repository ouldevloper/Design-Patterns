#include <iostream>
class person{
    private:
        static person * person_val;
        int id;
        std::string fullname;
        std::string address;
        char gender[5];
        person(){}
    public:
        static person * getPerson();
        void operator = (const person &)=delete;
        person(person& p)=delete;
        int get_id();
        void set_id(int id);
        std::string get_fullname();
        void set_fullname(std::string name);
        std::string get_address();
        void set_address(std::string addr);
        std::string get_gender();
        void set_gender(const char gen[10]);
        void ToTSring();     
};  