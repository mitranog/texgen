#pragma once

#include <TexGen/Operations/Operation.h>

class NoiseOperation : public Operation
{
public:
    NoiseOperation( void ) : Operation( kOperationType_Noise )  {}
    ~NoiseOperation( void ) {}

    void Run( Texture* ioTexture, const std::vector<float> inArguments );
};
