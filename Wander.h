#ifndef WANDER_H_INCLUDED
#define WANDER_H_INCLUDED

#include <string>

class Wander
{
  public:
    Wander();
    Wander(int);
  private:
    int encyp_offset;
    string plaintext;
};

#endif /* WANDER_H_INCLUDED*/