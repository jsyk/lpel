#include <stdlib.h>
#include <stdio.h>

#include <check.h>
#include "../lpel.h"



void setup(void)
{
}

void teardown(void)
{
}


START_TEST (test_lpel)
{
  
  fail_if( 0, NULL);
}
END_TEST


Suite *lpel_suite(void)
{
  Suite *s = suite_create("LPEL");

  TCase *tc_core = tcase_create("Core");
  tcase_add_unchecked_fixture (tc_core, setup, teardown);
  tcase_add_test(tc_core, test_lpel);
  suite_add_tcase(s, tc_core);

  return s;
}


int main(void)
{
  int number_failed;
  Suite *s = lpel_suite();
  SRunner *sr = srunner_create(s);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);
  exit( (number_failed==0) ? EXIT_SUCCESS : EXIT_FAILURE  );
}