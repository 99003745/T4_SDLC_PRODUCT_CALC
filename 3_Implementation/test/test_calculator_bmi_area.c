#include "unity.h"
#include <calculator_operations.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_bmi(int w,int h);
void test_areac(int r);
void test_arear(int l,int b);
void test_areas(int s);

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
  RUN_TEST(test_bmi);
  RUN_TEST(test_areac);
  RUN_TEST(test_arear);
  RUN_TEST(test_areas);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_bmi(int w,int h) {
  TEST_ASSERT_EQUAL(30, bmi(10, 20));
  TEST_ASSERT_EQUAL(-10, bmi(10, -20));
}
void test_areac(int r) {
 
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1500, areac(750, 7500));
}
void test_arear(int l,int b) {
  TEST_ASSERT_EQUAL(-3, araer(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, arear(1000, 900));
}

void test_areas(int s) {
  TEST_ASSERT_EQUAL(0, areas(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(2, areas(2, 5));
}

