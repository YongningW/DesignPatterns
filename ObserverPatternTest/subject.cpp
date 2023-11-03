#include "subject.h"

namespace ObserverPattern {
Subject::Subject() = default;
Subject::~Subject() = default;

void Subject::attach(Observer *obs)
{
    if (obs != nullptr) {
        m_observers.push_back(obs);
    }
}

void Subject::detach(Observer *obs)
{
    if (obs == nullptr) {
        return;
    }

    for (auto iter = m_observers.begin(); iter != m_observers.end(); ++iter) {
        if (*iter == obs) {
            iter = m_observers.erase(iter);
        }
    }
}

void Subject::notify()
{
    for (auto &m_observer : m_observers) {
        m_observer->update(this);
    }
}
} // namespace ObserverPattern
