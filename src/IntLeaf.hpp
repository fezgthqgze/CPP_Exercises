#pragma once
#include "Leaf.hpp"
#include "NodeKind.hpp"
#include "string"

class IntLeaf : public Leaf
{
    public:
    IntLeaf(int value): Leaf{}, _value { value } {};

    NodeKind kind(){
        return NodeKind::INT;
    };

    int data(){
        return _value;
    };

    std::string print() const override {
        return std::to_string(_value) ;
    };

    private:
    int _value;
};