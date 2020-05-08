#ifndef __APPLIANCE_COMMODITY_HEADER__
#define __APPLIANCE_COMMODITY_HEADER__
#include "basicGoods.h"

// Note : place enum outside the class


class Appliance // INHERTIT !
{
protected:
	double weight; // which is netWeight
	//ENERGY_COST energyGrade;
	
	//double getEndPrice(void) const override;
	
public:
	
	//Appliance(const std::string& name, double price, double Wei);
	//~Appliance();


	constexpr static double APPLIANCE_EXTRA_TAX_HIGH = 17;
	constexpr static double APPLIANCE_EXTRA_TAX_MEDIUM = 7;

	
	
    // getter and setters
	//double getWeight(void) const ;
    //double getTaxPrice(void) const;
	//void setWeight(double w);
	//void setEnergyGrade(ENERGY_COST ec);

};


#endif // __APPLIANCE_COMMODITY_HEADER__
