//
// Created by WU on 2023/11/29.
//
#include "concrete_strategy.h"

#include <iostream>
ConcreteStrategyA::ConcreteStrategyA() = default;
ConcreteStrategyA::~ConcreteStrategyA() = default;
void ConcreteStrategyA::Algorithm()
{
    std::cout << "use algorithm A" << std::endl;
}

ConcreteStrategyB::ConcreteStrategyB() = default;
ConcreteStrategyB::~ConcreteStrategyB() = default;
void ConcreteStrategyB::Algorithm()
{
    std::cout << "use algorithm B" << std::endl;
}
