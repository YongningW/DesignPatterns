#include <iostream>

#include "concrete_strategy.h"
#include "context.h"
#include "strategy.h"

int main()
{
    auto *cxt = new Context();
    Strategy *strategy = new ConcreteStrategyA();
    cxt->SetAlgorithm(strategy);
    cxt->Algorithm();
    delete strategy;

    strategy = new ConcreteStrategyB();
    cxt->SetAlgorithm(strategy);
    cxt->Algorithm();
    delete strategy;

    return 0;
}
