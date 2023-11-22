//
// Created by WU on 2023/11/22.
//
#include "adapter.h"

namespace AdapterPattern {

AdapterPattern::Adapter::Adapter(Adaptee *adaptee) : m_adaptee(adaptee)
{
}

Adapter::~Adapter()
{
    delete m_adaptee;
    m_adaptee = nullptr;
}

void Adapter::request()
{
    m_adaptee->specificRequest();
}

} // namespace AdapterPattern