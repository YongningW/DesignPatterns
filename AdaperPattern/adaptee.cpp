//
// Created by WU on 2023/11/22.
//
#include "adaptee.h"

#include <iostream>

void AdapterPattern::Adaptee::specificRequest()
{
    std::cout << "Function \n";
}

AdapterPattern::Adaptee::~Adaptee() = default;
