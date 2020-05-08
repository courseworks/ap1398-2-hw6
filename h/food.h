#ifndef __FOOD_COMMODITY_HEADER__
#define __FOOD_COMMODITY_HEADER__
#include "basicGoods.h"


// Note: define enum outside the class

class Food: public BasicGoods
{
private:
	//FOOD_MODE mode;
	double netWeight;
	//std::time_t expirationTime;
	
public:
	
    //Food(const std::string& name, double price, double Wei, FOOD_MODE md);
	//~Food();

    constexpr static double FOOD_TAX_SUBSIDE = 3; // subtract this!

    // getters
	//double getEndPrice(void) const;
	//double getTaxPrice(void) const override;
	//double getWeight(void) const;
	//std::time_t getRemainingExp(void) const;

	// setters
	//void setExpiration(std::time_t t);
	//void setFoodMode(FOOD_MODE md);

};

#endif // __FOOD_COMMODITY_HEADER__
