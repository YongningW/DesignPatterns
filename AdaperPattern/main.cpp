#include <iostream>

#include "adaptee.h"
#include "adapter.h"
#include "target.h"
using namespace AdapterPattern;
int main()
{
    auto *adaptee = new Adaptee();
    Target *target = new Adapter(adaptee);
    target->request();

    delete target;
    return 0;
}
