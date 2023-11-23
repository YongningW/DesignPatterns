//
// Created by WU on 2023/11/23.
//
#include "abstraction.h"

BridgePattern::Abstraction::Abstraction() = default;

BridgePattern::Abstraction::~Abstraction()
{
    delete m_impl;
}

BridgePattern::Abstraction::Abstraction(BridgePattern::Implementor *impl) : m_impl(impl)
{
}

void BridgePattern::Abstraction::operation()
{
}
