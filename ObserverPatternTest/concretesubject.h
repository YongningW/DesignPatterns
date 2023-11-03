#pragma once
#ifndef CONCRETESUB_H
#define CONCRETESUB_H

#include "subject.h"

namespace ObserverPattern {
class ConcreteSubject : public Subject {
public:
    ConcreteSubject();
    ~ConcreteSubject();

    int getState() override;
    void setState(int val) override;

private:
    int m_state;
};
} // namespace ObserverPattern
#endif // !CONCRETESUB_H
