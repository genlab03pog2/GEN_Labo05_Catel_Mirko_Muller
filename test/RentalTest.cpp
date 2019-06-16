#include "../src/Rental.h"

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <iostream>


// Mocking Movie
class  MockMovie : public Movie {
public:
    MOCK_CONST_METHOD0(getTitle, std::string());
    MOCK_CONST_METHOD0(getPrice, std::shared_ptr<Price>());
};

TEST(TestRental, getDaysRented) {
    MockMovie mockMovie;
    Rental rental(mockMovie, 2);

    EXPECT_EQ(rental.getDaysRented(),2);
}


// Problème lors du mockage de Movie: EXPECT_CALL ne renvoie pas la bonne valeur
/*TEST(TestRental, getMovie) {
    MockMovie mockMovie;
    EXPECT_CALL(mockMovie,getTitle()).WillRepeatedly(testing::Return("Mocked"));

    Movie *movie = &mockMovie;

    Rental rental(*movie,2);

    ASSERT_EQ(rental.getMovie().getTitle(),"Mocked");
}*/
