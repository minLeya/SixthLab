#include "arbitrary.h"

float rng::getFloat(int min, int max)
{
	std::uniform_int_distribution value(min, max);
	return static_cast<float>(value(mt));
}