#include <iostream>
#include <memory>

#include "abstraction.h"
#include "concreteimplementor.h"
#include "implementor.h"
#include "refinedabstraction.h"
using namespace BridgePattern;
int main()
{
    auto pa = std::make_shared<RefinedAbstraction>(new ConcreteImplementorA());
    pa->operation();

    auto pb = std::make_shared<RefinedAbstraction>(new ConcreteImplementorB());
    pb->operation();
    return 0;
}
