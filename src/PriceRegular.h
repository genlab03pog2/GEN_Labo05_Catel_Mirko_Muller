
#ifndef GEN_LABO05_CATEL_MIRKO_MULLER_PRICEREGULAR_H
#define GEN_LABO05_CATEL_MIRKO_MULLER_PRICEREGULAR_H

#include "Price.h"

class PriceRegular : public Price {
private:
  const double PRICE_PER_DAY = 1.5;
  const double DAYS_STEP = 2;
  const double MIN_AMOUNT = 2;

public:
  double getAmount(int _daysRented) const;
  std::string getPriceType() const ;
  int getFrequentRenterPoints(int _daysRented) const;

};

inline double PriceRegular::getAmount(int _daysRented) const {
  double thisAmount = MIN_AMOUNT;
  if ( _daysRented > DAYS_STEP )
    thisAmount += (_daysRented - DAYS_STEP) * PRICE_PER_DAY ;
  return thisAmount;
}

inline std::string PriceRegular::getPriceType() const {
  return "regular";
}

inline int PriceRegular::getFrequentRenterPoints(int _daysRented) const{
  return MIN_RENTER_POINT;
}

#endif //GEN_LABO05_CATEL_MIRKO_MULLER_PRICEREGULAR_H
