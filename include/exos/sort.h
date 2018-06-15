
#pragma once
#include <common/basic_defs.h>

void
insertion_sort_ptr(uptr *arr, int len, cmpfun_ptr cmp);

void
insertion_sort_generic(void *a, uptr elem_size, int elem_count, cmpfun_ptr cmp);
