#ifndef GEN_LABO05_CATEL_MIRKO_MULLER_PRICE_H
#define GEN_LABO05_CATEL_MIRKO_MULLER_PRICE_H

#include <iostream>
class Price {
public:
   // explicit Price();
  virtual double getAmount(int _daysRented) const = 0;

  virtual std::string getPriceType() const = 0;

};

#endif //GEN_LABO05_CATEL_MIRKO_MULLER_PRICE_H
