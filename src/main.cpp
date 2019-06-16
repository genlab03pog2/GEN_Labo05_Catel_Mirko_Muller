#include <iostream>

#include "Customer.h"
#include "PriceRegular.h"
#include "PriceNewRealease.h"
#include "PriceChildren.h"
int main() {


    Customer customer("Olivier");
    customer.addRental( Rental( Movie("Karate Kid", std::shared_ptr<Price>(new PriceRegular())), 7));
    customer.addRental( Rental( Movie( "Avengers: Endgame", std::shared_ptr<Price>(new PriceNewRelease())), 5));
    customer.addRental( Rental( Movie("Snow White", std::shared_ptr<Price>(new PriceChildren())), 3 ));

    std::cout << customer.statement() << std::endl;

    return 0;
}