#include<stdio.h>
#include "header.h"
#include "unity.h"
#include<math.h>
#include<stdlib.h>

calc_arthmetic value;
static result ans={0};
calc_st valuee;
static result_t anss={0};

void setUp(void) {}
/* Required by the unity test framework */
void tearDown(void) {}

void test_add(void)
{
    /**
     * @brief Requirement based test case for addition
     * 
     */
    value.num_1=200;
    value.num_2=100;
    add(value,&ans);
	TEST_ASSERT_EQUAL(300,ans.final_answer);

  /**
   * @brief scenario based test case for addition
   * 
   */
    value.num_1=40*2;
    value.num_2=-10+5;
    add(value,&ans);
    TEST_ASSERT_EQUAL(36,ans.final_answer);
   
   /**
   * @brief boundary based test case for addition
   * 
   */
    value.num_1=-99999;
    value.num_2= 99999;
    add(value,&ans);
    TEST_ASSERT_EQUAL(0,ans.final_answer);

}
void test_sub(void)
{
    /**
     * @brief Requirment based test case for substraction
     * 
     */
    value.num_1=25;
    value.num_2=5;
    sub(value,&ans);
	TEST_ASSERT_EQUAL(10,ans.final_answer);


    /**
     * @brief Scenario based test case for substraction
     * 
     */
    value.num_1=15*82;
    value.num_2=-5+28;
    sub(value,&ans);
	TEST_ASSERT_EQUAL(1207,ans.final_answer);

    /**
     * @brief Boundary based test case for substraction
     * 
     */
    value.num_1=88889;
    value.num_2=77778;
    sub(value,&ans);
	TEST_ASSERT_EQUAL(11111,ans.final_answer);


}
void test_mul(void)
{
    /**
     * @brief Requirment Based test case for multiplication
     * 
     */
    value.num_1=155;
    value.num_2=288;
    mul(value,&ans);
	TEST_ASSERT_EQUAL(45474,ans.final_answer);

    /**
     * @brief Scenario Based test case for multiplication
     * 
     */
    value.num_1=-15;
    value.num_2=-26;
    mul(value,&ans);
	TEST_ASSERT_EQUAL(390,ans.final_answer);

    /**
     * @brief Boundary Based test case for multiplication
     * 
     */
    value.num_1=9999;
    value.num_2=6666;
    mul(value,&ans);
	TEST_ASSERT_EQUAL(66653336,ans.final_answer);


}
void test_div(void)
{
    /**
     * @brief requirment based test case for divison
     * 
     */
    
    value.num_1=3888;
    value.num_2=24;
    divv(value,&ans);
	TEST_ASSERT_EQUAL(162,ans.final_answer);


    /**
     * @brief Boundary based test case for divison
     * 
     */
    
    value.num_1=9999;
    value.num_2=3;
    divv(value,&ans);
	TEST_ASSERT_EQUAL(3333,ans.final_answer);


}
void  multiply(double a,double b)
{
    double mul=1;
    mul=a*b;
    return mul;
}

void test_log(void)
{
    /**
     * @brief requirment based test case.
     * 
     */
     valuee.num_1=8869;
     logg(valuee,&ans);
     TEST_ASSERT_EQUAL(3.95,ans.final_answer);

     /**
      * @brief scenario based test case.
      * 
      */
     valuee.num_1=124;
     logg(valuee,&ans);
     TEST_ASSERT_EQUAL(2.09,ans.final_answer);

}