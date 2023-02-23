#pragma once
#include "Node.hpp"
#include "NodeKind.hpp"

class ArrayNode : public Node
{
    public:
    ArrayNode(): Node{} {};

    NodeKind kind(){
        return NodeKind::ARRAY;
    };

    std::string print() const override {
        return "[]";
    };
};