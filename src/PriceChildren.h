#ifndef GEN_LABO05_CATEL_MIRKO_MULLER_PRICECHILDREN_H
#define GEN_LABO05_CATEL_MIRKO_MULLER_PRICECHILDREN_H

#include "Price.h"

class PriceChildren : public Price {
public:
    //explicit PriceChildren();
    double getAmount(int _daysRented) const;
    std::string getPriceType() const;
    int getFrequentRenterPoints(int _daysRented) const;

};

//PriceChildren::PriceChildren() = default;

inline double PriceChildren::getAmount(int _daysRented) const {
  double thisAmount = 1.5;
  if (_daysRented > 3 )
    thisAmount += (_daysRented - 3 ) * 1.5;
  return thisAmount;
}

inline std::string PriceChildren::getPriceType() const {
  return "children";
}

inline int PriceChildren::getFrequentRenterPoints(int _daysRented) const {
  return MIN_RENTER_POINT;
}


#endif //GEN_LABO05_CATEL_MIRKO_MULLER_PRICECHILDREN_H
