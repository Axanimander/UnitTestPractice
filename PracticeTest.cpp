/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"
#include <iostream>
using std::cout;

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}
TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, symbol_is_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("[;");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, symbol_is_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("[;[");
    ASSERT_TRUE(actual);
}

/*TEST(PracticeTest, emoji_is_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("😊👌😊");
    ASSERT_TRUE(actual);
}*/

TEST(PracticeTest, empty_string_is_palindrome){
	Practice obj;
	bool actual = obj.isPalindrome("");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, sorted_descending_reverse){
	Practice obj;
	int first = 1;
	int second = 2;
	int third = 3;
	obj.sortDescending(first, second, third);
	ASSERT_GE(first, second);
	ASSERT_GE(second, third);
}

TEST(PracticeTest, sorted_descending_middle_greatest){
	Practice obj;
	int first = 1;
	int second = 3;
	int third = 2;
	obj.sortDescending(first, second, third);
	ASSERT_GE(first, second);
	ASSERT_GE(second, third);
}

TEST(PracticeTest, sorted_descending_first_greatest){
	Practice obj;
	int first = 3;
	int second = 1;
	int third = 2;
	obj.sortDescending(first, second, third);
	ASSERT_GE(first, second);
	ASSERT_GE(second, third);
}

TEST(PracticeTest, sorted_descending_first_last_equal){
	Practice obj;
	int first = 2;
	int second = 3;
	int third = 2;
	obj.sortDescending(first, second, third);
	ASSERT_GE(first, second);
	ASSERT_GE(second, third);
}

TEST(PracticeTest, sorted_descending_last_two_equal_first_less){
	Practice obj;
	int first = 1;
	int second = 2;
	int third = 2;
	obj.sortDescending(first, second, third);
	ASSERT_GE(first, second);
	ASSERT_GE(second, third); 
}

TEST(PracticeTest, sorted_descending_last_two_equal_first_greater){
	Practice obj;
	int first = 3;
	int second = 2;
	int third = 2;
	obj.sortDescending(first, second, third);
	ASSERT_GE(first, second);
	ASSERT_GE(second, third); 
}

TEST(PracticeTest, sorted_descending_first_two_equal_third_greater){
	Practice obj;
	int first = 1;
	int second = 1;
	int third = 2;
	obj.sortDescending(first, second, third);
	ASSERT_GE(first, second);
	ASSERT_GE(second, third); 
}

TEST(PracticeTest, sorted_descending_first_two_equal_third_less){
	Practice obj;
	int first = 2;
	int second = 2;
	int third = 1;
	obj.sortDescending(first, second, third);
	ASSERT_GE(first, second);
	ASSERT_GE(second, third); 
}

TEST(PracticeTest, sorted_descending_first_two_zero_third_greater){
	Practice obj;
	int first = 0;
	int second = 0;
	int third = 1;
	obj.sortDescending(first, second, third);
	ASSERT_GE(first, second);
	ASSERT_GE(second, third); 
}

TEST(PracticeTest, sorted_descending_first_zero){
	Practice obj;
	int first = 0;
	int second = 2;
	int third = 1;
	obj.sortDescending(first, second, third);
	ASSERT_GE(first, second);
	ASSERT_GE(second, third); 
}

TEST(PracticeTest, sorted_descending_second_zero){
	Practice obj;
	int first = 2;
	int second = 0;
	int third = 1;
	obj.sortDescending(first, second, third);
	ASSERT_GE(first, second);
	ASSERT_GE(second, third); 
}


TEST(PracticeTest, sorted_descending_ascending){
	Practice obj;
	int first = 1;
	int second = 0;
	int third = 2;
	obj.sortDescending(first, second, third);
	ASSERT_GE(first, second);
	ASSERT_GE(second, third); 
}