#include "Auction.h"

Auction::Auction(std::string description) : description(description)
{
    
}

const std::vector<Bid>& Auction::GetBids() const
{
    return bids;
}

void Auction::ReceiveBid(const Bid& bid)
{
    bids.push_back(bid);
}
