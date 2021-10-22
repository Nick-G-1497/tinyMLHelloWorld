#include "unity.h"


#ifdef UNIT_TEST


void test_function_foo(void) {
    TEST_ASSERT_EQUAL(1, 1);
}

void process() {
    UNITY_BEGIN();  
    
    RUN_TEST(test_function_foo);

    UNITY_END();
}


void setup() {
    
    process();
}

void loop() {

}


#endif