#ifndef __PRODUCTID_HEADER__
#define __PRODUCTID_HEADER__
#include <string>
#include <memory>

class productID
{
protected:
	std::string standardSerial;
	std::shared_ptr< std::string > confirmStatement;
	std::string countryName;

	
public:
	//productID(std::shared_ptr< std::string >& in , const std::string& ss);
	
	//void printStatement(void) const;
};

#endif // __PRODUCTID_HEADER__
