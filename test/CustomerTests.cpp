
#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include <string>
#include "../src/Customer.h"
#include "../src/PriceRegular.h"
#include "../src/PriceNewRealease.h"
#include "../src/PriceChildren.h"

TEST(customer_Test, customerGetName){
    Customer customer("Customer");
    EXPECT_EQ(customer.getName(),"Customer");
}

TEST(customer_Test, testStatementMultipleAddOnOneCustomer)
{
    Customer customer("Customer");
    customer.addRental( Rental( Movie("film1", std::shared_ptr<Price>(new PriceRegular())), 1));
    customer.addRental( Rental( Movie( "film2", std::shared_ptr<Price>(new PriceNewRelease())), 2));
    customer.addRental( Rental( Movie("film3", std::shared_ptr<Price>(new PriceChildren())), 3 ));

    std::string expected = "Rental Record for Customer\n\tfilm1\t2\n\tfilm2\t6\n\tfilm3\t1.5\nAmount owed is 9.5\nYou earned 4 frequent renter points";

    EXPECT_EQ(customer.statement(),expected);
}

TEST(customer_test, testStatementSimpleAddOnOneCustomer)
{
    Customer customer("Customer");
    customer.addRental( Rental ( Movie( "film1",std::shared_ptr<Price>(new PriceRegular())),1));

    std::string expected = "Rental Record for Customer\n\tfilm1\t2\nAmount owed is 2\nYou earned 1 frequent renter points";
    EXPECT_EQ(customer.statement(),expected);
}

TEST(customer_test, testStatementSimpleAddOnOneCustomerMaxInt)
{
    Customer customer("Customer");
    customer.addRental( Rental ( Movie( "film1",std::shared_ptr<Price>(new PriceRegular())),INT_MAX));

    std::string expected = "Rental Record for Customer\n\tfilm1\t3.22123e+09\nAmount owed is 3.22123e+09\nYou earned 1 frequent renter points";
    EXPECT_EQ(customer.statement(),expected);
}



