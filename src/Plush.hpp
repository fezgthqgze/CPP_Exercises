#pragma once

class Plush
{

public:
    Plush()
    {
        _cost = 10;
    }

    Plush(int price)
    {
        _cost = price;
    }

    int get_cost()
    {
        return _cost;
    }

    void set_cost(int price)
    {
        _cost = price;
    }

private:
    int _cost;
};
