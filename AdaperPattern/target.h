//
// Created by WU on 2023/11/22.
//

#ifndef ADAPERPATTERN_TARGET_H
#define ADAPERPATTERN_TARGET_H

namespace AdapterPattern {
class Target {
public:
    virtual void request() = 0;
    virtual ~Target() = default;
};
} // namespace AdapterPattern
#endif //ADAPERPATTERN_TARGET_H
