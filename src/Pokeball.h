#pragma once
#include <Pokemon.h>
#include <memory>

// A ball where a Pokemon sleeps.
class Pokeball
{
public:
    bool empty() const
    {
        return _empty_;
    }

    void store(PokemonPtr pokemon)
    {
        _pokemon_ = std::move(pokemon);
        _empty_ = false;
    }

    const Pokemon& pokemon() const
    {
        return *_pokemon_;
    }

private:        
    PokemonPtr _pokemon_;
    bool _empty_ = true;
};
