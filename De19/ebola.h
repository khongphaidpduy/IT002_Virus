#ifndef EBOLA_H
#define EBOLA_H

#include "virus.h"
class Ebola : public Virus {
public:
	Ebola(string ImmuneAbility, bool vaccin);
};

#endif