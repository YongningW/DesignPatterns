#include "concreteobserver.h"

#include <iostream>
#include <utility>

#include "subject.h"

namespace ObserverPattern {
ConcreteObserver::ConcreteObserver(std::string name) : m_name(std::move(name))
{
    m_observerState = 0;
}

ConcreteObserver::~ConcreteObserver() = default;

void ConcreteObserver::update(Subject *sub)
{
    m_observerState = sub->getState();
    std::cout << m_name << " state = " << m_observerState << std::endl;
}
} // namespace ObserverPattern