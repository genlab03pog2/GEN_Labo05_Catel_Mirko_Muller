//
// Created by arzur on 14.06.2019.
//

#ifndef GEN_LABO05_CATEL_MIRKO_MULLER_PRICENEWREALEASE_H
#define GEN_LABO05_CATEL_MIRKO_MULLER_PRICENEWREALEASE_H
#include "Price.h"

class PriceNewRelease : public Price {
public:
   // explicit PriceNewRelease();
  double getAmount(int _daysRented) const;
  std::string getPriceType() const ;
};

//PriceNewRelease::PriceNewRelease() =default;

inline double PriceNewRelease::getAmount(int _daysRented) const {
  return _daysRented * 3;
}

inline std::string PriceNewRelease::getPriceType() const {
  return "new release";
}

#endif //GEN_LABO05_CATEL_MIRKO_MULLER_PRICENEWREALEASE_H
