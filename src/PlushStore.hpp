#pragma once
#include <string>

class PlushStore
{

public:
    PlushStore(std::string storeName)
    {
        name = storeName;
    }
    std::string get_name(){
        return name
    }

private:
    std::string name;
};