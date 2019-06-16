// Rental.h
#ifndef RENTAL_H
#define RENTAL_H
#include "Movie.h"

class Rental {
public:
    Rental( const Movie& movie, int daysRented );
    int getDaysRented() const;
    virtual const Movie& getMovie() const;

private:
    Movie _movie;
    int _daysRented;
};

inline Rental::Rental( const Movie& movie, int daysRented ) : _movie( movie ), _daysRented( daysRented ) {}

inline int Rental::getDaysRented() const { return _daysRented; }

inline const Movie& Rental::getMovie() const { return _movie; }

inline std::ostream & operator<<(std::ostream & toStr, Rental const & rental) {
    toStr << "\t" << rental.getMovie().getTitle() << "\t"
        << rental.getMovie().getPrice()->getAmount(rental.getDaysRented()) << "\n";
    return toStr;
}

#endif // RENTAL_H