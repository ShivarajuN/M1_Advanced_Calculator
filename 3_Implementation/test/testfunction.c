#include "unity.h"

/* Modify these two lines according to the project */
#include "project.h"
#define PROJECT_NAME    "Adavanced_Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_c_add(void);
void test_c_subtract(void);
void test_c_multiply(void);
void test_c_divide(void);
void test_det(void);

static complex_t c1={1,2};
static complex_t c2={3,4};
complex_t res;

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
  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_c_add);
  RUN_TEST(test_c_subtract);
  RUN_TEST(test_c_multiply);
  RUN_TEST(test_c_divide);
  RUN_TEST(test_det);

  return UNITY_END();

}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15000, add(7500, 7500));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, sub(0, 3));
  TEST_ASSERT_EQUAL(3, sub(6, 3));
  TEST_ASSERT_EQUAL(-2, sub(1, 3));
  TEST_ASSERT_EQUAL(100, sub(1000, 900));
  
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, mul(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, mul(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(-1, divn(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, divn(2, 2));
}
void test_c_add(void)
{
  res=complex_sum(c1,c2);
  TEST_ASSERT_EQUAL_FLOAT(4.000, res.real);
  TEST_ASSERT_EQUAL_FLOAT(6.000, res.img);
}
void test_c_subtract(void)
{
  res=complex_difference(c1,c2);
  TEST_ASSERT_EQUAL_FLOAT(-2.000, res.real);
  TEST_ASSERT_EQUAL_FLOAT(-2.000, res.img);
}
void test_c_multiply(void)
{
  res=complex_multiply(c1,c2);
  TEST_ASSERT_EQUAL_FLOAT(-5.000, res.real);
  TEST_ASSERT_EQUAL_FLOAT(10.000, res.img);
}

void test_c_divide(void)
{
  res=complex_divide(c1,c2);
  TEST_ASSERT_EQUAL_FLOAT(0.440, res.real);
  TEST_ASSERT_EQUAL_FLOAT(0.080, res.img);
}
void test_det(void)
{
  int a[N][N]={{2,2},{2,2}};
  int b[N][N]={{1,2},{3,4}};
  int row=2;
  TEST_ASSERT_EQUAL(0,determinantOfMatrix(a, 2));
  TEST_ASSERT_EQUAL(-2,determinantOfMatrix(b, 2));

}