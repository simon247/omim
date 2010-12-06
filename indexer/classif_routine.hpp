#pragma once

#include "../std/string.hpp"

namespace classificator
{
  void Read(string const & rules, string const & classificator, string const & visibility);
  void GenerateAndWrite(string const & dir);
  void PrepareForFeatureGeneration();
}
