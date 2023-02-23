#pragma once
#include "Leaf.hpp"
#include "NodeKind.hpp"
#include "string"

class StringLeaf : public Leaf
{
    public:
    StringLeaf(std::string value): Leaf{}, _value { value } {};

    NodeKind kind(){
        return NodeKind::STRING;
    };

    std::string data(){
        return _value;
    };

    std::string print() const override {
        return '\"' +_value + '\"' ;
    };

    private:
    std::string  _value;
};