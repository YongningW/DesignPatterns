//
// Created by WU on 2023/11/24.
//

#ifndef DECORATORPATTERN_DECORATOR_H
#define DECORATORPATTERN_DECORATOR_H
#include "component.h"
namespace DecoratorPattern {
class Decorator : public Component {
public:
    explicit Decorator(Component *component);
    ~Decorator() override;

    void Operation() override;

private:
    Component *m_component{};
};
} // namespace DecoratorPattern
#endif //DECORATORPATTERN_DECORATOR_H
