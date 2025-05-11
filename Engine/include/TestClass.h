#pragma once
#include "EngineAPI.h"

class ENGINE_API TestClass
{
public:
    TestClass();
    void SayHello() const;
    static int Add(int a, int b);
};
