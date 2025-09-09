#ifndef __POINTERS_TEST_H__
#define __POINTERS_TEST_H__

    void CopyArray(int *dst, const int *src, size_t size);
    void Swap(int *x, int *y);
    void PrintAddr();
    void SwapSizeT(size_t *x, size_t * y);
    void SwapSizeTPtr(size_t **x, size_t **y);
    void SwapSizeTPtr2(size_t **x, size_t **y);
    size_t StrLen(const char* my_str);

#endif  /*__POINTERS_TEST_H__*/
