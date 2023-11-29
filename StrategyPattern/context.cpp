//
// Created by WU on 2023/11/29.
//
#include "context.h"

Context::Context() = default;
Context::~Context()
{
    delete m_strategy;
}
void Context::SetAlgorithm(Strategy *strategy)
{
    if (strategy != nullptr) {
        m_strategy = strategy;
    }
}
void Context::Algorithm()
{
    m_strategy->Algorithm();
}
