#include "unity.h"
#include <calculator_arithmetic.h>

#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator Test"

void test_sum(void);
void test_sum_testcase2(void);
void test_sub(void);
void test_mul(void);
void test_div(void);
void test_mod(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_sum);
  RUN_TEST(test_sum_testcase2);
  RUN_TEST(test_sub);
  RUN_TEST(test_mul);
  RUN_TEST(test_div);
  RUN_TEST(test_mod);

   return UNITY_END();
}
void test_sum(void) {
  TEST_ASSERT_EQUAL(30.0000, sum(10, 20));
  TEST_ASSERT_EQUAL(-10.0000, sum(10, -20));
}
void test_add_testcase2(void) {
 
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1500.0000, sum(750, 7500));
}
void test_sub(void) {
  TEST_ASSERT_EQUAL(-3.0000, sub(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1.0000, sub(1000, 900));
}

void test_mul(void) {
  TEST_ASSERT_EQUAL(0.0000, mul(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(2.0000, mult(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0.0000, div(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(3.0000, div(2, 2));
}