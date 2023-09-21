#include "pch.h"
#include "analysis.h"

TEST(TestCaseName, TestName) {

	const size_t nbIter = 25;
	for (size_t i = 0; i < nbIter; i++)
	{
		std::cout << fibo(i) << std::endl;
	}
	
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}