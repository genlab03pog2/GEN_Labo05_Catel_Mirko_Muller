// Movie.h
#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <memory>
#include "Price.h"

class Movie {
public:
  Movie();
  Movie(const std::string& title, std::shared_ptr<Price> price);
  virtual std::string getTitle() const;
  void setPriceType(std::shared_ptr<Price> price);
  virtual std::shared_ptr<Price> getPrice() const;

private:
  std::string _title;
  std::shared_ptr<Price> price;
};

inline Movie::Movie() : _title("Erreur"){}
inline Movie::Movie(const std::string& title, std::shared_ptr<Price> price) : _title( title ), price( price ){}

inline std::string Movie::getTitle() const { return _title; }

inline void Movie::setPriceType(std::shared_ptr<Price> price) {this->price = price; }

inline std::shared_ptr<Price> Movie::getPrice() const { return price;}

#endif // MOVIE_H