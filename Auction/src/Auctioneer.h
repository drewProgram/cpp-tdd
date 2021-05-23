#pragma once

#include "Auction.h"

class Auctioneer
{
private:
	// this is needed cuz sometimes the memory address of the var could be filled with trash
	float highestValue = INT_MIN;
	float lowestValue = INT_MAX;

public:
	void Evaluate(Auction);

	float GetHighestValue() const;
	float GetLowestValue() const;
};
