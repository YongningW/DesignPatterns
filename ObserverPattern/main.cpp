#include <iostream>

//int main() {
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
//}

#include <iostream>

#include "concreteobserver.h"
#include "concretesubject.h"
#include "observer.h"
#include "subject.h"

using namespace ObserverPattern;

int main()
{
    Subject *sub = new ConcreteSubject();
    Observer *obsA = new ConcreteObserver("A");
    Observer *obsB = new ConcreteObserver("B");

    sub->attach(obsA);
    sub->attach(obsB);

    sub->setState(1);
    sub->notify();

    sub->detach(obsB);
    sub->setState(2);
    sub->notify();

    delete sub;
    delete obsA;
    delete obsB;

    return 0;
}
