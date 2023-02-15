#pragma once

#include <string>
#include <memory>

// A creature that is cute and can fight other ones.
class Pokemon
{
public:
    Pokemon(std::string name)
    :_name_ {name},
    _id_ {_counter_++}
    {

    }

    Pokemon(const Pokemon& other)
    :_name_ {other._name_},
    _id_ {_counter_++}
    {

    }

    Pokemon& operator=(const Pokemon& other){
        if (this != &other){
            _name_ = other._name_;
        }
        return *this;
    }

    std::string name() const 
    { 
        return _name_;
    }

    int id() const 
    { 
        return _id_;
    }

private:
    std::string _name_;
    static int _counter_;
    int _id_;
};

using PokemonPtr = std::unique_ptr<Pokemon>;