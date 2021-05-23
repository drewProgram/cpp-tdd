#include "Auctioneer.h"

void Auctioneer::Evaluate(Auction auction)
{
	std::vector<Bid> bids = auction.GetBids();
	
	for (Bid bid : bids)
	{
		if (bid.GetValue() > highestValue)
		{
			highestValue = bid.GetValue();
		}
		
		if (bid.GetValue() < lowestValue)
		{
			lowestValue = bid.GetValue();
		}
	}
}

float Auctioneer::GetHighestValue() const
{
	return highestValue;
}

float Auctioneer::GetLowestValue() const
{
	return lowestValue;
}