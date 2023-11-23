//
// Created by WU on 2023/11/23.
//

#ifndef BRIDGEPATTERN_ABSTRACTION_H
#define BRIDGEPATTERN_ABSTRACTION_H
#include "implementor.h"

namespace BridgePattern {
class Abstraction {
public:
    Abstraction();
    ~Abstraction();
    explicit Abstraction(Implementor *impl);
    virtual void operation();

protected:
    Implementor *m_impl{};
};

} // namespace BridgePattern
#endif //BRIDGEPATTERN_ABSTRACTION_H
