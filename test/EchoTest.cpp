#include "gtest/gtest.h"
#include "Echo.h"

TEST(EchoTest, Works) {
    std::string three = echo(3);

    EXPECT_EQ(three, "3");
}