#include <iostream> 
#include <vector>


using namespace std;
	



int getMaxProfit(const vector<int> &stockPricesYesterday)
{
	if(stockPricesYesterday.size() <  2)
	{
		throw invalid_argument("Getting a profit requires at least 2 prices");
	}
	// We set the first 2 variable being the first min and max prices and the we check the rest of the answers against these
	int minPrice = stockPricesYesterday[0];
	int maxProfit = stockPricesYesterday[1]; //this is the fundamental answer as max Profit which is the thing we try to return

	//we start looping from the second price which is the current maxPrice so we dont  see the minimum price unnecessarily again
	// for vector looping always do ++i
	for(size_t i = 1; i < stockPricesYesterday.size(); ++i)
	{
		int currentPrice  = stockPricesYesterday[i];
		int potentialProfit = currentPrice - minPrice;
		maxProfit = max(maxProfit, potentialProfit); //get the maximum value of the between max Profit
		minPrice = min(minPrice, currentPrice);
	}
	return maxProfit;
}









	


int main()
{	
	vector<int> stockPricesYesterday;
	stockPricesYesterday.push_back(10);
	stockPricesYesterday.push_back(7);
	stockPricesYesterday.push_back(5);
	stockPricesYesterday.push_back(8);
	stockPricesYesterday.push_back(11);
	stockPricesYesterday.push_back(9);


	int maxProfit = getMaxProfit(stockPricesYesterday);

	cout << "Maximum profit from yesterday stock is " << maxProfit << endl;


	return 0;
}