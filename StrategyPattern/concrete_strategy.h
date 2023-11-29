//
// Created by WU on 2023/11/29.
//

#ifndef STRATEGYPATTERN_CONCRETE_STRATEGY_H
#define STRATEGYPATTERN_CONCRETE_STRATEGY_H
#include "strategy.h"

class ConcreteStrategyA : public Strategy {
public:
    ConcreteStrategyA();
    ~ConcreteStrategyA() override;

    void Algorithm() override;
};

class ConcreteStrategyB : public Strategy {
public:
    ConcreteStrategyB();
    ~ConcreteStrategyB() override;

    void Algorithm() override;
};
#endif //STRATEGYPATTERN_CONCRETE_STRATEGY_H
