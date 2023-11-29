//
// Created by WU on 2023/11/29.
//

#ifndef STRATEGYPATTERN_STRATEGY_H
#define STRATEGYPATTERN_STRATEGY_H
class Strategy {
public:
    virtual ~Strategy() = default;
    virtual void Algorithm() = 0;
};

#endif //STRATEGYPATTERN_STRATEGY_H
