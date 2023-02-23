#pragma once
#include "InstanceCounter.hpp"
#include "string"

class Node : public InstanceCounter
{
    public:
     virtual std::string print() const = 0;
};