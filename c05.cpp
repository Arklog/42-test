#include "gtest/gtest.h"

#if __has_include("ex00/ft_iterative_factorial.c")
namespace {
#include "ex00/ft_iterative_factorial.c"

	TEST(ex00, ft_iterative_factorial) {
		EXPECT_EQ(0, ft_iterative_factorial(-1));
		EXPECT_EQ(1, ft_iterative_factorial(0));
		EXPECT_EQ(1, ft_iterative_factorial(1));
		EXPECT_EQ(720, ft_iterative_factorial(6));
	}
}
#else
TEST(ex00, ft_iterative_factorial) {
	EXPECT_STREQ("ex00/ft_iterative_factorial.c", "");
}
#endif



#if __has_include("ex01/ft_recursive_factorial.c")
namespace {
#include "ex01/ft_recursive_factorial.c"

	TEST(ex01, ft_recursive_factorial) {
		EXPECT_EQ(0, ft_recursive_factorial(-1));
		EXPECT_EQ(1, ft_recursive_factorial(0));
		EXPECT_EQ(1, ft_recursive_factorial(1));
		EXPECT_EQ(720, ft_recursive_factorial(6));
	}
}
#else
TEST(ex01, ft_recursive_factorial) {
	EXPECT_STREQ("ex01/ft_recursive_factorial.c", "");
}
#endif



#if __has_include("ex02/ft_iterative_power.c")
namespace {
#include "ex02/ft_iterative_power.c"

	TEST (ex02, ft_iterative_power) {
		EXPECT_EQ(0, ft_iterative_power(2, -1));
		EXPECT_EQ(1, ft_iterative_power(0, 0));
		EXPECT_EQ(1, ft_iterative_power(2, 0));
		EXPECT_EQ(4, ft_iterative_power(2, 2));
		EXPECT_EQ(8, ft_iterative_power(2, 3));
		EXPECT_EQ(9, ft_iterative_power(3, 2));
	}
}
#else
TEST(ex02, ft_iterative_power) {
	EXPECT_STREQ("ex02/ft_iterative_power.c", "");
}
#endif



#if __has_include("ex03/ft_recursive_power.c")
namespace {
#include "ex03/ft_recursive_power.c"

	TEST (ex03, ft_recursive_power) {
		EXPECT_EQ(0, ft_recursive_power(2, -1));
		EXPECT_EQ(1, ft_recursive_power(0, 0));
		EXPECT_EQ(1, ft_recursive_power(2, 0));
		EXPECT_EQ(4, ft_recursive_power(2, 2));
		EXPECT_EQ(8, ft_recursive_power(2, 3));
		EXPECT_EQ(9, ft_recursive_power(3, 2));
	}
}
#else
TEST(ex03, ft_recursive_power) {
	EXPECT_STREQ("ex03/ft_recursive_power.c", "");
}
#endif



#if __has_include("ex04/ft_fibonacci.c")
namespace {
#include "ex04/ft_fibonacci.c"

	TEST(ex04, ft_fibonacci) {
		EXPECT_EQ(-1, ft_fibonacci(-1));
		EXPECT_EQ(0, ft_fibonacci(0));
		EXPECT_EQ(1, ft_fibonacci(1));
		EXPECT_EQ(1, ft_fibonacci(2));
		EXPECT_EQ(3, ft_fibonacci(4));
		EXPECT_EQ(8, ft_fibonacci(6));
	}
}
#else
TEST(ex04, ft_fibonacci) {
	EXPECT_STREQ("ex04/ft_fibonacci.c", "");
}
#endif



#if __has_include("ex05/ft_sqrt.c")
namespace {
#include "ex05/ft_sqrt.c"

	TEST(ex05, ft_sqrt) {
		EXPECT_EQ(1, ft_sqrt(1));
		EXPECT_EQ(2, ft_sqrt(4));
		EXPECT_EQ(3, ft_sqrt(9));
		EXPECT_EQ(0, ft_sqrt(5));
	}
}
#else
TEST(ex05, ft_sqrt) {
	EXPECT_STREQ("ex05/ft_sqrt.c", "");
}
#endif

int main() {
	testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
