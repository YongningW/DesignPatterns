//
// Created by WU on 2023/11/24.
//
#include "concrete_decorator.h"

#include <iostream>
namespace DecoratorPattern {

DecoratorPattern::ConcreteDecoratorA::ConcreteDecoratorA(Component *component) : Decorator(component)
{
}
ConcreteDecoratorA::~ConcreteDecoratorA() = default;

void ConcreteDecoratorA::Operation()
{
    Decorator::Operation();
    AddBehavior();
}

void ConcreteDecoratorA::AddBehavior()
{
    std::cout << "ConcreteDecoratorA::AddBehavior\n";
}

ConcreteDecoratorB::ConcreteDecoratorB(Component *component) : Decorator(component)
{
}

ConcreteDecoratorB::~ConcreteDecoratorB() = default;

void ConcreteDecoratorB::AddBehavior()
{
    std::cout << "ConcreteDecoratorB::AddBehavior\n";
}

void ConcreteDecoratorB::Operation()
{
    Decorator::Operation();
    AddBehavior();
}

} // namespace DecoratorPattern