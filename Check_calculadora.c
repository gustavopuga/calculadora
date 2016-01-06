#include <check.h>
#include "calculadora.c"

START_TEST(test_soma)
{
    ck_assert_int_eq(calculadora('+',1,1), 2);
    ck_assert_int_eq(calculadora('+',-2,-2), -4);
    ck_assert_int_eq(calculadora('+',10,-10), 0);
}
END_TEST

START_TEST(test_subtracao)
{
    ck_assert_int_eq(calculadora('-',1,-1), 0);
    ck_assert_int_eq(calculadora('-',-2,-2), 0);
    ck_assert_int_eq(calculadora('-',10,-10), 20);
}
END_TEST

START_TEST(test_multiplicacao)
{
    ck_assert_int_eq(calculadora('*',1,-1), -1);
    ck_assert_int_eq(calculadora('*',-2,-2), 4);
    ck_assert_int_eq(calculadora('*',10,-10), -100);
}
END_TEST

START_TEST(test_divisao)
{
    ck_assert_int_eq(calculadora('/',1,-1), -1);
    ck_assert_int_eq(calculadora('/',-2,-2), 1);
    ck_assert_int_eq(calculadora('/',10,-10), -1);
}
END_TEST

int main(void)
{
     return 0;
}
