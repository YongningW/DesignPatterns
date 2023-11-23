//
// Created by WU on 2023/11/23.
//

#include "refinedabstraction.h"

namespace BridgePattern {

RefinedAbstraction::RefinedAbstraction() = default;

RefinedAbstraction::~RefinedAbstraction() = default;

RefinedAbstraction::RefinedAbstraction(Implementor *impl) : Abstraction(impl)
{
}

void BridgePattern::RefinedAbstraction::operation()
{
    m_impl->operationImp();
}
} // namespace BridgePattern
