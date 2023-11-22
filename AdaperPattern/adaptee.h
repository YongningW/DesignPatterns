//
// Created by WU on 2023/11/22.
//

#ifndef ADAPERPATTERN_ADAPTEE_H
#define ADAPERPATTERN_ADAPTEE_H

namespace AdapterPattern {
class Adaptee {
public:
    Adaptee()=default;
    virtual ~Adaptee();
    void specificRequest();
};

} // namespace AdapterPattern

#endif //ADAPERPATTERN_ADAPTEE_H
