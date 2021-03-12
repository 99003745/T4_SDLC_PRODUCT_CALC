#include "unity.h"
#include <roots_cubes.h>

/* Modify these two lines according to the project */
#include <roots_cubes.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_square(void);

void test_cube(void);
void test_squarroot(void);
void test_cubroot(void);

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
  RUN_TEST(test_square);
  RUN_TEST(test_cube);
  RUN_TEST(test_squarroot);
  RUN_TEST(test_cubroot);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_square(void) {
  TEST_ASSERT_EQUAL(1, square(1));
  TEST_ASSERT_EQUAL(4, square(2));
}

void test_cube(void) {
  TEST_ASSERT_EQUAL(27, cube(3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, cube(10));
}

void test_squarroot(void) {
  TEST_ASSERT_EQUAL(2, squarroot(4));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(4, squarroot(9));
}

void test_cubroot(void) {
  TEST_ASSERT_EQUAL(3, cubroot(9));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(2, cubroot(11));
}
