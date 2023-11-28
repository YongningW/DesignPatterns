#include <iostream>

#include "concrete_component.h"
#include "concrete_decorator.h"
using namespace DecoratorPattern;
int main()
{
    auto *concreteComponent = new ConcreteComponent();
    auto *pa = new ConcreteDecoratorA(concreteComponent); //动态增加行为
    pa->Operation();
    auto *pb = new ConcreteDecoratorB(pa); //进一步增加行为
    pb->Operation();

    delete pb;
    return 0;
}
