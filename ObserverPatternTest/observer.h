#pragma once
#ifndef OBSERVER_H
#define OBSERVER_H

namespace ObserverPattern {
class Subject;

class Observer {
public:
    Observer() = default;
    virtual ~Observer() = default;
    virtual void update(Subject *sub) = 0;

private:
};
} // namespace ObserverPattern

#endif // !OBSERVER_H
