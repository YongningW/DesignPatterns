//
// Created by WU on 2023/11/24.
//
#include "concrete_component.h"

#include <iostream>
namespace DecoratorPattern {

DecoratorPattern::ConcreteComponent::ConcreteComponent() = default;

ConcreteComponent::~ConcreteComponent() = default;

void ConcreteComponent::Operation()
{
    std::cout << "ConcreteComponent's normal operation!" << std::endl;
}

} // namespace DecoratorPattern