//
// Created by WU on 2023/11/23.
//

#ifndef BRIDGEPATTERN_CONCRETEIMPLEMENTOR_H
#define BRIDGEPATTERN_CONCRETEIMPLEMENTOR_H
#include "implementor.h"
namespace BridgePattern {
class ConcreteImplementorA : public Implementor {
public:
    ConcreteImplementorA();
    ~ConcreteImplementorA() override;

    void operationImp() override;
};

class ConcreteImplementorB : public Implementor {
public:
    ConcreteImplementorB();
    ~ConcreteImplementorB() override;

    void operationImp() override;
};
} // namespace BridgePattern
#endif //BRIDGEPATTERN_CONCRETEIMPLEMENTOR_H
