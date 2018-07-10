#ifndef BUZZ_
#define BUZZ_

#include "Toy.h"

class Buzz : public Toy
{
public:
  Buzz(std::string const& name);
  Buzz(std::string const& name, std::string const& file);
  ~Buzz();

  virtual void speak(std::string const& statement);
};

#endif
