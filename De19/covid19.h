#ifndef COVID19_H
#define COVID19_H

#include "virus.h"
using namespace std;

class Covid19 : public Virus {
public:
	Covid19(string khanangmiendich, bool vaccin);
};

#endif