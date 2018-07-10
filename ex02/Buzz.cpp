#include "Buzz.h"

Buzz::Buzz(std::string const& name) : Toy(BUZZ, name, "buzz.txt")
{
}

Buzz::Buzz(std::string const& name, std::string const& file) : Toy(BUZZ, name, file)
{
}

Buzz::~Buzz()
{
}
