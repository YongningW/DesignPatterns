//
// Created by WU on 2023/11/24.
//

#ifndef DECORATORPATTERN_CONCRETE_COMPONENT_H
#define DECORATORPATTERN_CONCRETE_COMPONENT_H
#include "component.h"
namespace DecoratorPattern {
class ConcreteComponent : public Component {
public:
    ConcreteComponent();
    ~ConcreteComponent();

    void Operation() override;
};
} // namespace DecoratorPattern
#endif //DECORATORPATTERN_CONCRETE_COMPONENT_H
