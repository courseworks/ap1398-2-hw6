#ifndef __PRODUCT_HEADER__
#define __PRODUCT_HEADER__

#include "material.h"
#include "appliance.h"
#include "productID.h"
#include <string>


using shared_str = std::shared_ptr<std::string>;


class Product // INHERIT !
{
private:
	double taxRate;
	
	
public:
	//Product(const std::string& brandName, double price, double matWei, shared_str confirmation);
	//~Product();

	constexpr static double TYPICAL_TAX_RATE = 23;
	
    
	
	//double getWeight(void) const;
	//void setTaxRate(double newTax);
};

#endif // __PRODUCT_HEADER__
