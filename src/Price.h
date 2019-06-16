#ifndef GEN_LABO05_CATEL_MIRKO_MULLER_PRICE_H
#define GEN_LABO05_CATEL_MIRKO_MULLER_PRICE_H

#include <iostream>

#define MIN_RENTER_POINT 1
#define BONUS_RENTER_POINT 1
#define BONUS_MIN_DAYS 1


class Price {
public:

  virtual double getAmount(int _daysRented) const = 0;

  virtual std::string getPriceType() const = 0;

  virtual int getFrequentRenterPoints(int _daysRented) const = 0;

};

#endif //GEN_LABO05_CATEL_MIRKO_MULLER_PRICE_H
