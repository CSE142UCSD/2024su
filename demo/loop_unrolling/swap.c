#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
void inline swap(uint64_t* a, uint64_t* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
} 

void swap_array_1(uint64_t *a, uint64_t *b, uint64_t size)
{
    for (uint64_t i = 0; i < size; ++i) {
        swap(&a[i],&b[i]);
    }

}
void swap_array_2(uint64_t *a, uint64_t *b, uint64_t size)
{
    uint64_t real_size = size / 2;
    for (uint64_t i = 0; i < real_size; ++i) {
        swap(&a[i],&b[i]);
        swap(&a[i],&b[i]);
    }
}
#ifdef __cplusplus
}
#endif
