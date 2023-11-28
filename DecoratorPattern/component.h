//
// Created by WU on 2023/11/24.
//

#ifndef DECORATORPATTERN_COMPONENT_H
#define DECORATORPATTERN_COMPONENT_H
namespace DecoratorPattern {
class Component {
public:
    Component();
    virtual ~Component();

    virtual void Operation();
};
} // namespace DecoratorPattern
#endif //DECORATORPATTERN_COMPONENT_H
