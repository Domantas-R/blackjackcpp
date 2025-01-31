#include "Strategy.h"

bool Strategy::ConservativeStrategy(int score)
{
	return score < 17;
}

bool Strategy::AggressiveStrategy(int score)
{
	return score < 20;
}
