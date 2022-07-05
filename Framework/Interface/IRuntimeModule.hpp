#pragma once

#include "Interface.hpp"

namespace My {
    Interface IRunTimeModule {
public:
    virtual ~IRunTimeModule() {};

    virtual int Initialize() = 0;
    virtual void Finalize() = 0;

    virtual void Tick() = 0;        
    };
}