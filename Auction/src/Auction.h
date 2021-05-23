#ifndef Auction_h
#define Auction_h
#include <vector>
#include <string>
#include "Bid.h"

class Auction
{
private:
    std::vector<Bid> bids;
    std::string description;
public:
    Auction(std::string description);
    const std::vector<Bid>& GetBids() const;
    void ReceiveBid(const Bid& bid);
};

#endif /* Leilao_hpp */
