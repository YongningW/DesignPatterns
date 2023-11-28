//
// Created by WU on 2023/11/24.
//

#ifndef DECORATORPATTERN_CONCRETE_DECORATOR_H
#define DECORATORPATTERN_CONCRETE_DECORATOR_H
#include "component.h"
#include "decorator.h"
namespace DecoratorPattern {
class ConcreteDecoratorA : public Decorator {
public:
    explicit ConcreteDecoratorA(Component *component);
    ~ConcreteDecoratorA() override;

    void Operation() override;
    void AddBehavior();
};

class ConcreteDecoratorB : public Decorator {
public:
    explicit ConcreteDecoratorB(Component *component);
    ~ConcreteDecoratorB() override;

    void Operation() override;
    void AddBehavior();
};
} // namespace DecoratorPattern
#endif //DECORATORPATTERN_CONCRETE_DECORATOR_H
