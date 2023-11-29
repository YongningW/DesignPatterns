//
// Created by WU on 2023/11/29.
//
#include "facade.h"

Facade::Facade()
{
    m_systemA = new SystemA();
    m_systemB = new SystemB();
    m_systemC = new SystemC();
}
Facade::~Facade()
{
    delete m_systemA;
    delete m_systemB;
    delete m_systemC;
}
void Facade::Operation()
{
    m_systemA->OperationA();
    m_systemB->OperationB();
    m_systemC->OperationC();
}
