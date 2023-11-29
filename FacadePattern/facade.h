//
// Created by WU on 2023/11/29.
//

#ifndef FACADEPATTERN_FACADE_H
#define FACADEPATTERN_FACADE_H
#include "system.h"
class Facade {
public:
    Facade();
    ~Facade();
    void Operation();

private:
    SystemA *m_systemA;
    SystemB *m_systemB;
    SystemC *m_systemC;
};
#endif //FACADEPATTERN_FACADE_H
