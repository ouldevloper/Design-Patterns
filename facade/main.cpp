#include <stdio.h>
#include "facade.h"

int main(void){

    facade::setAge(22);
    facade::setName("Abdellah");
    facade::setAddress("Morocco");
    std::cout << "Your Info :" <<"\n\tYour Name is : "<<facade::getName()<< "\n\tAge :"<<facade::getAge()<<"\n\tYour Address is : ";
    std::cout << facade::getAddress()<<std::endl;

    return 0;
}