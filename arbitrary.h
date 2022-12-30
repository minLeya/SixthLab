#ifndef ARBITRARY_H
#define ARBITRARY_H

#include <random>

namespace sizes
{
	inline constexpr int windowLength{ 1300 };
	inline constexpr int windowWidth{ 700 };
	inline constexpr int min{ 20 };
	inline constexpr int max{ 100 };
	inline constexpr float lineWidth{ 2.f };
	inline constexpr float lineLength{ 48.f };
	inline constexpr float semiminorAxisMin{ 0.2f };
	inline constexpr float semiminorAxisMax{ 0.9f };

}

namespace rng //random number generator
{
	inline std::mt19937 mt{ std::random_device{}() };
	float getFloat(int min, int max);
}

#endif