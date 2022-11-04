#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("test set_zero function")
{
    int num = 100;
    int num1 = 100;
    set_zero(num, num1);

    REQUIRE(num == 100);
    REQUIRE(num1 == 0);
}