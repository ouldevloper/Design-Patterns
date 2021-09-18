#include <iostream>
#include <string.h>
#include "person.h"

person * person::person_val = nullptr;
person * person::getPerson(){
    if(person_val==NULL){
        person_val = new person();
    }
        return person_val;
}
int person::get_id(){
    return id;
}
void person::set_id(int id_){
    this->id=id_;
}
std::string person::get_fullname(){
    return this->fullname;
}
void person::set_fullname(std::string name){
    this->fullname = name;
}

std::string person::get_address(){
    return this->address;
}
void person::set_address(std::string addr){
    this->address = addr;
}


std::string person::get_gender(){
    return this->gender;
}
void person::set_gender(const char gen[10]){
    strncpy(this->gender,gen,10);
}

void person::ToTSring(){
    printf("%d\t%s\t%s\t%s\n",this->id,this->fullname.c_str(),this->address.c_str(),this->gender);
}



