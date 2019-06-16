#include "../src/Customer.h"
#include "../src/PriceRegular.h"
#include "../src/PriceNewRealease.h"
#include "../src/PriceChildren.h"

#include "gtest/gtest.h"
#include <iostream>

TEST(PricesTests, PriceChildrenGetAmountTests) {
  Price *p = new PriceChildren();
  EXPECT_EQ(p->getAmount(1), 1.5);
  EXPECT_EQ(p->getAmount(10), 12);
  EXPECT_EQ(p->getAmount(38), 54);
  delete p;
}

TEST(PricesTests, PriceRegularGetAmountTests) {
  Price *p = new PriceRegular();
  EXPECT_EQ(p->getAmount(1), 2);
  EXPECT_EQ(p->getAmount(10), 14);
  EXPECT_EQ(p->getAmount(38), 56);
  delete p;
}

TEST(PricesTests, PriceNewReleaseGetAmountTests) {
  Price *p = new PriceNewRelease();
  EXPECT_EQ(p->getAmount(1), 3);
  EXPECT_EQ(p->getAmount(10), 30);
  EXPECT_EQ(p->getAmount(38), 114);
  delete p;
}