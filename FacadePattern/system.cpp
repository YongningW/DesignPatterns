//
// Created by WU on 2023/11/29.
//
#include "system.h"

#include <iostream>

SystemA::SystemA() = default;
SystemA::~SystemA() = default;
void SystemA::OperationA()
{
    std::cout << "OperationA\n";
}

SystemB::SystemB() = default;
SystemB::~SystemB() = default;
void SystemB::OperationB()
{
    std::cout << "OperationB\n";
}

SystemC::SystemC() = default;
SystemC::~SystemC() = default;
void SystemC::OperationC()
{
    std::cout << "OperationC\n";
}