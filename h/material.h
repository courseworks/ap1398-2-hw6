#ifndef __MATERIAL_HEADER__
#define __MATERIAL_HEADER__

#include "basicGoods.h"

// Note : place enum outside the class


class Material // INHERIT !
{
protected:
	double weigth;
	//MAT_TYPE matType;

public:
	//Material(const std::string& name, double price , double weight, MAT_TYPE mt);
	//~Material();

	constexpr static double MATERIAL_TAX = 1.5;

	
    // getters
	//double getWeight(void) const;
	//double getTaxPrice(void) const;
    //double getEndPrice(void) const;
};

#endif // __MATERIAL_HEADER__
