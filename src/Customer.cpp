// Customer.cpp
#include <sstream>
#include <vector>
#include "Customer.h"

using std::ostringstream;
using std::vector;

using namespace std;

string Customer::statement()
{
    double totalAmount = 0;
    int frequentRenterPoints = 0;
    ostringstream result;
    result << "Rental Record for " << getName() << "\n";

    for(Rental each : _rentals)
    {
        double thisAmount = 0;

        thisAmount = each.getMovie().getPrice()->getAmount(each.getDaysRented());

        // add frequent renter points
        frequentRenterPoints += each.getMovie().getPrice()->getFrequentRenterPoints(each.getDaysRented());

        // show figures for this rental
        result << each;
        totalAmount += thisAmount;
    }
    // add footer lines
    result << "Amount owed is " << totalAmount << "\n";
    result << "You earned " << frequentRenterPoints
           << " frequent renter points";
    return result.str();
}


