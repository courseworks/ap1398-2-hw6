#ifndef __CUSTOMER_HEADER__
#define __CUSTOMER_HEADER__
#include <string>
#include <vector>
#include <memory>
#include "basicGoods.h"
#include  <queue>
#include "SharedComps.hpp"
#include <algorithm>

class Customer
{
protected:
	std::string name;
	double totalChargedTax;
	std::deque< std::shared_ptr<BasicGoods> > assets;
	double assetValue;

public:
	//explicit Customer(const std::string& name);
	//virtual ~Customer();

    
    // simple functions 
    using sharedBG = std::shared_ptr<BasicGoods>;
    //std::string printBasicInfo(void) const;
    
    // getter
    //double getTotalAsset(void) const;
    //double getTotalChargedTax(void) const;

    
    // importers
	//virtual void importNewGoods(std::shared_ptr<BasicGoods>);

    
    //template <class T>
	//	void findGoods( std::deque< sharedBG >& list, T comp);
        
        
    //template <typename T>
	//bool queueGoods(
	//	std::priority_queue< sharedBG, std::deque<sharedBG> , Shared_less<BasicGoods> >& Q);

	
    
    // operators
    //virtual bool operator==(const Customer& in) const = 0;
};


#endif // __CUSTOMER_HEADER__
