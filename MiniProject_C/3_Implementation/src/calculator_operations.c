#include<stdio.h>
#include<math.h>

int add1(int an, int bn)
{
    int sum1= an+bn;
    return sum1;
}
int subtract2(int ta, int td)
{
    int sub2= ta+td;
    return sub2;
}
/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test_add()
{
    TEST_ASSERT_EQUAL(add1(5,4),9);
}
void test_sub()
{
    TEST_ASSERT_EQUAL(subtract2(5,4),1);
}
error divv(calc_arthmetic n,result* answer)
{
    if(n.num_1==0 || n.num_2==0)
    {
       
        return ERROR_DIV_ZERO;
    }
    else
    {
    answer->final_answer=n.num_1/n.num_2;
    return SUCCESS;
    }
}
error logg(calc_st n,result* answer)
{
    answer->final_answer=log10(n.num_1);
    return SUCCESS;
}
int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    RUN_TEST(test_mul);
    RUN_TEST(test_div);
    RUN_TEST(test_log);
    

    /* Close the Unity Test Framework */
    return UNITY_END();
}