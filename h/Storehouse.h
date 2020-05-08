#ifndef __STOREHOUSE_HEADER__
#define __STOREHOUSE_HEADER__
#include <vector>
#include "basicGoods.h"
#include <set>
#include "customer.h"
#include <string>



class Storehouse
{
private:
	std::string storeName;
	std::set< std::shared_ptr<Customer> > theCustomers;
	
public:
	explicit Storehouse(const std::string& name);
	Storehouse();

	//void newCustomer(std::shared_ptr<Customer> newC);
	//std::string printCustomers(void) const;
};

#endif // __STOREHOUSE_HEADER__
