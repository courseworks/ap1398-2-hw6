#ifndef __BASIC_GOODS_HEADER__
#define __BASIC_GOODS_HEADER__

#include <string>
#include <array>
#include <memory>

// Note: place enums outside the class


class BasicGoods
{
private:
	char* brandName;
	//GOODS_TYPE goodsType;
	char* originCountry;
	
protected:
	//PACK_TYPE packing;
	double weight; // approx weight of packing! not the commodity
	std::shared_ptr< std::array<double,3> > approxDim;
	double basePrice; // value in euro or dollar :)
	double taxRate; // in percent

	//void setNewPrice(double price);
	
public:
	//BasicGoods(const std::string& bName, GOODS_TYPE gTyp, double price);
	//virtual ~BasicGoods();

	constexpr static double INITIAL_TAX_RATE = 5;
	

	// functions
	//virtual double getEndPrice(void) const;
	//virtual double getTaxPrice(void) const;
	
    // getters
	//std::string getBrandName(void) ;
	//virtual double getWeight(void) const;
	//virtual double getVolume(void) const;
	std::string getOriginCountry(void) const;
		
	// setters
	//void setOriginCountry(const std::string& cnt);
	//void setAppearance(PACK_TYPE pck, std::shared_ptr< std::array<double,3> > dimen);

	// operators
	//virtual bool operator== (const BasicGoods& in) const;
	//virtual bool operator< (const BasicGoods& in) const;
};



#endif // __GOODS_HEADER__
