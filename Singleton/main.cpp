#include <iostream>
#include <cstdio>
#include "person.h"

int main(void){
    auto *p = person::getPerson();
    p->set_id(1);
    p->set_fullname("Abdellah Oulahyane");
    p->set_address("st.petersburg");
    p->set_gender("male");
    p->ToTSring();
    return 0;
}