#if !defined ctest_h
#define ctest_h
#define ASSERT_EQUAL_FLOAT(exp,real) assert_equal_float(exp,real)
#endif
void assert_equal_float(float p1,float p2)
{
    if(p1!=p2)
        abort;
}
