#ifndef COVID19_H
#define COVID19_H

#include "virus.h"

class Covid19 : public Virus {
public:
	Covid19(string ImmuneAbility, bool vaccin);
};

#endif