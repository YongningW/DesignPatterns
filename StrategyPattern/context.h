//
// Created by WU on 2023/11/29.
//

#ifndef STRATEGYPATTERN_CONTEXT_H
#define STRATEGYPATTERN_CONTEXT_H
#include "strategy.h"
class Context {
public:
    Context();
    ~Context();

    void SetAlgorithm(Strategy *strategy);
    void Algorithm();

private:
    Strategy *m_strategy{};
};
#endif //STRATEGYPATTERN_CONTEXT_H
