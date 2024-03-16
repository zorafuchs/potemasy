#include "../lib/unity/unity.h"
#include "../src/system_check.h"

void setUp() {}
void tearDown() {}

void sumTest() {
    TEST_ASSERT_EQUAL_INT(sum(10, 15), 25);
}

int main() {
   UNITY_BEGIN();
   RUN_TEST(sumTest);
   UNITY_END();
}
