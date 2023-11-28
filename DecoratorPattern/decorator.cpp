//
// Created by WU on 2023/11/24.
//
#include "decorator.h"

namespace DecoratorPattern {
Decorator::Decorator(Component *component) : m_component(component)
{
}

Decorator::~Decorator()
{
    delete m_component;
    m_component = nullptr;
}

void Decorator::Operation()
{
    m_component->Operation();
}

} // namespace DecoratorPattern