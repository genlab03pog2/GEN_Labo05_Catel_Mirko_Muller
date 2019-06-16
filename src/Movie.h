// Movie.h
#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <memory>
#include "Price.h"

class Movie {
public:
    Movie(const std::string& title, std::shared_ptr<Price> price);
    std::string getPriceCode() const;
    void setPrice(std::shared_ptr<Price> price);
    std::string getTitle() const;
    double getAmount(int _daysRented) const;
    int getFrequentRenterPoints(int _daysRented) const;

private:
    std::string _title;
    std::shared_ptr<Price> price;
};

inline Movie::Movie(const std::string& title, std::shared_ptr<Price> price) : _title( title ), price( price ){}

inline std::string Movie::getTitle() const { return _title; }

inline double Movie::getAmount(int _daysRented) const { return (*(this->price)).getAmount(_daysRented); }

inline int Movie::getFrequentRenterPoints(int _daysRented) const { return (*(this->price)).getFrequentRenterPoints(_daysRented); }

#endif // MOVIE_H