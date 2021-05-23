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
    void SetBids(const Bid& bid);
};
