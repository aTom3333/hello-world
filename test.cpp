#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "hello.hpp"


TEST_CASE("hello test")
{
    REQUIRE(hello() == "Hello world!");
}