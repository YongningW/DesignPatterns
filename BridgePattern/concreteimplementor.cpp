//
// Created by WU on 2023/11/23.
//
#include "concreteimplementor.h"

#include <iostream>
namespace BridgePattern {
ConcreteImplementorA::ConcreteImplementorA() = default;
ConcreteImplementorA::~ConcreteImplementorA() = default;
void BridgePattern::ConcreteImplementorA::operationImp()
{
    std::cout << "operation ConcreteImplementorA style\n";
}

ConcreteImplementorB::ConcreteImplementorB() = default;
ConcreteImplementorB::~ConcreteImplementorB() = default;
void ConcreteImplementorB::operationImp()
{
    std::cout << "operation ConcreteImplementorB style\n";
}
} // namespace BridgePattern