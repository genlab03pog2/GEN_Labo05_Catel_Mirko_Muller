//
// Created by arzur on 14.06.2019.
//

#ifndef GEN_LABO05_CATEL_MIRKO_MULLER_PRICENEWREALEASE_H
#define GEN_LABO05_CATEL_MIRKO_MULLER_PRICENEWREALEASE_H
#include "Price.h"

class PriceNewRelease : public Price {
protected:
  const double PRICE_PER_DAY = 3;
public:

  double getAmount(int _daysRented) const;
  std::string getPriceType() const;
  int getFrequentRenterPoints(int _daysRented) const;
};

inline double PriceNewRelease::getAmount(int _daysRented) const {
  return _daysRented * PRICE_PER_DAY;
}

inline std::string PriceNewRelease::getPriceType() const {
  return "new release";
}

inline int PriceNewRelease::getFrequentRenterPoints(int _daysRented) const{
  return (_daysRented > BONUS_MIN_DAYS) ? MIN_RENTER_POINT + BONUS_RENTER_POINT : MIN_RENTER_POINT;
}

#endif //GEN_LABO05_CATEL_MIRKO_MULLER_PRICENEWREALEASE_H
