//
// Created by WU on 2023/11/23.
//

#ifndef BRIDGEPATTERN_REFINEDABSTRACTION_H
#define BRIDGEPATTERN_REFINEDABSTRACTION_H
#include "abstraction.h"
namespace BridgePattern {
class RefinedAbstraction : public Abstraction {
public:
RefinedAbstraction();
~RefinedAbstraction();
explicit RefinedAbstraction(Implementor *impl);

void operation() override;
};
} // namespace BridgePattern
#endif //BRIDGEPATTERN_REFINEDABSTRACTION_H
