//
// Created by WU on 2023/11/29.
//

#ifndef FACADEPATTERN_SYSTEM_H
#define FACADEPATTERN_SYSTEM_H
class SystemA {
public:
    SystemA();
    ~SystemA();
    void OperationA();
};

class SystemB {
public:
    SystemB();
    ~SystemB();
    void OperationB();
};

class SystemC {
public:
    SystemC();
    ~SystemC();
    void OperationC();
};
#endif //FACADEPATTERN_SYSTEM_H
