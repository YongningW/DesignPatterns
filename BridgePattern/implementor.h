//
// Created by WU on 2023/11/23.
//

#ifndef BRIDGEPATTERN_IMPLEMENTOR_H
#define BRIDGEPATTERN_IMPLEMENTOR_H
namespace BridgePattern {
class Implementor {
public:
    Implementor();
    virtual ~Implementor();
    virtual void operationImp();
};
} // namespace BridgePattern
#endif //BRIDGEPATTERN_IMPLEMENTOR_H
