// catch2 macro
#define CATCH_CONFIG_MAIN

#include <iostream>
#include "../src/Auctioneer.h"
#include "Catch.h"

TEST_CASE("Should get highest bid of the auction in increasing order")
{
	/*
	* ARRANGE ACT ASSERT (Triple A)
	* 
	* 1. Arrange all necessary preconditions and inputs.
	* 2. Act on the object or method under test.
	* 3. Assert that the expected results have occurred.
	*/

	// Arrange - Given
	Bid firstBid(User("Andrew"), 1000.0f);
	Bid secondBid(User("Lorena"), 1200.0f);
	Auction auction("Predator Helios 300");
	auction.SetBids(firstBid);
	auction.SetBids(secondBid);

	// Act - When
	Auctioneer auctioneer;
	auctioneer.Evaluate(auction);

	// Assert - Then
	REQUIRE(1200.0f == auctioneer.GetHighestValue());

	/*
	* The above macro will do something like this code:
	* 
	* float expectedValue = 1200.0f;
	*
	* if (expectedValue == auctioneer.GetHighestValue())
	* {
	*	 std::cout << "TEST OK" << std::endl;
	* }
	* else
	* {
	* 	 std::cout << "TEST FAILED" << std::endl;
	* }
	*/

}

TEST_CASE("Should get highest bid of the auction in decreasing order")
{
	// Arrange - Given
	Bid firstBid(User("Andrew"), 1200.0f);
	Bid secondBid(User("Lorena"), 1000.0f);
	Auction auction("Predator Helios 300");
	auction.SetBids(firstBid);
	auction.SetBids(secondBid);

	// Act - When
	Auctioneer auctioneer;
	auctioneer.Evaluate(auction);

	// Assert - Then
	REQUIRE(1200.0f == auctioneer.GetHighestValue());
}

TEST_CASE("Should get lowest bid of the auction in increasing order")
{
	// Arrange - Given
	Bid firstBid(User("Andrew"), 1000.0f);
	Bid secondBid(User("Lorena"), 1200.0f);
	Auction auction("Predator Helios 300");
	auction.SetBids(firstBid);
	auction.SetBids(secondBid);

	// Act - When
	Auctioneer auctioneer;
	auctioneer.Evaluate(auction);

	// Assert - Then
	REQUIRE(1000.0f == auctioneer.GetLowestValue());
}

TEST_CASE("Should get lowest bid of the auction in decreasing order")
{
	// Arrange - Given
	Bid firstBid(User("Andrew"), 1200.0f);
	Bid secondBid(User("Lorena"), 1000.0f);
	Auction auction("Predator Helios 300");
	auction.SetBids(firstBid);
	auction.SetBids(secondBid);

	// Act - When
	Auctioneer auctioneer;
	auctioneer.Evaluate(auction);

	// Assert - Then
	REQUIRE(1000.0f == auctioneer.GetLowestValue());
}
