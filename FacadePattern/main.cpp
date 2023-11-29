#include <iostream>

#include "facade.h"

int main()
{
    auto *facade = new Facade();
    facade->Operation();
    delete facade;
    return 0;
}
