//
// Created by WU on 2023/11/22.
//

#ifndef ADAPERPATTERN_ADAPTER_H
#define ADAPERPATTERN_ADAPTER_H
#include "adaptee.h"
#include "target.h"

namespace AdapterPattern {
class Adapter : public Target {
public:
    explicit Adapter(Adaptee *adaptee) ;
    ~Adapter();
    void request() override;
private:
    Adaptee *m_adaptee;

};

} // namespace AdapterPattern
#endif //ADAPERPATTERN_ADAPTER_H
