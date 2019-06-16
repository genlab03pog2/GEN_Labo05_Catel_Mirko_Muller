#ifndef GEN_LABO05_CATEL_MIRKO_MULLER_PRICECHILDREN_H
#define GEN_LABO05_CATEL_MIRKO_MULLER_PRICECHILDREN_H

#include "Price.h"

class PriceChildren : public Price {
public:
    //explicit PriceChildren();
    double getAmount(int _daysRented) const;
  std::string getPriceType() const ;

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

#endif //GEN_LABO05_CATEL_MIRKO_MULLER_PRICECHILDREN_H
