
#ifndef GEN_LABO05_CATEL_MIRKO_MULLER_PRICEREGULAR_H
#define GEN_LABO05_CATEL_MIRKO_MULLER_PRICEREGULAR_H

#include "Price.h"

class PriceRegular : public Price {
public:
    //explicit PriceRegular();
    double getAmount(int _daysRented) const;
  std::string getPriceType() const ;
  int getFrequentRenterPoints(int _daysRented) const;

};

//PriceRegular::PriceRegular() = default;

inline double PriceRegular::getAmount(int _daysRented) const {
  double thisAmount = 2;
  if ( _daysRented > 2 )
    thisAmount += (_daysRented - 2) * 1.5 ;
  return thisAmount;
}

inline std::string PriceRegular::getPriceType() const {
  return "regular";
}

inline int PriceRegular::getFrequentRenterPoints(int _daysRented) const{
  return MIN_RENTER_POINT;
}

#endif //GEN_LABO05_CATEL_MIRKO_MULLER_PRICEREGULAR_H
