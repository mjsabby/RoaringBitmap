#ifndef _WIN32
#include "roaring.c"
#define __declspec(x)
#else
#include "roaring.h"
#endif

/* Create and Free */

extern "C" __declspec(dllexport) void RoaringBitmapFree(const roaring_bitmap_t *r)
{
    roaring_bitmap_free(r);
}

extern "C" __declspec(dllexport) size_t RoaringBitmapFrozenSizeInBytes(const roaring_bitmap_t *r)
{
    return roaring_bitmap_frozen_size_in_bytes(r);
}

extern "C" __declspec(dllexport) void RoaringBitmapFrozenSerialize(const roaring_bitmap_t *r, char *buf)
{
    roaring_bitmap_frozen_serialize(r, buf);
}

extern "C" __declspec(dllexport) const roaring_bitmap_t *RoaringBitmapFrozenView(const char *buf, size_t length)
{
    return roaring_bitmap_frozen_view(buf, length);
}

extern "C" __declspec(dllexport) void RoaringBitmapSetCopyOnWrite(roaring_bitmap_t *r, bool cow)
{
    roaring_bitmap_set_copy_on_write(r, cow);
}

extern "C" __declspec(dllexport) bool RoaringBitmapGetCopyOnWrite(const roaring_bitmap_t *r)
{
    return roaring_bitmap_get_copy_on_write(r);
}

extern "C" __declspec(dllexport) roaring_bitmap_t *RoaringBitmapCreate(uint32_t cap)
{
    return roaring_bitmap_create_with_capacity(cap);
}

extern "C" __declspec(dllexport) void RoaringBitmapAdd(roaring_bitmap_t *r, uint32_t x)
{
    roaring_bitmap_add(r, x);
}

extern "C" __declspec(dllexport) void RoaringBitmapAddMany(roaring_bitmap_t *r, size_t n, const uint32_t *vals)
{
    roaring_bitmap_add_many(r, n, vals);
}

extern "C" __declspec(dllexport) roaring_bitmap_t *RoaringBitmapOfPtr(size_t n, const uint32_t *vals)
{
    return roaring_bitmap_of_ptr(n, vals);
}

extern "C" __declspec(dllexport) roaring_bitmap_t *RoaringBitmapFromRange(uint64_t min, uint64_t max, uint32_t step)
{
    return roaring_bitmap_from_range(min, max, step);
}

extern "C" __declspec(dllexport) roaring_bitmap_t *RoaringBitmapCopy(const roaring_bitmap_t *r)
{
    return roaring_bitmap_copy(r);
}

/* And */

extern "C" __declspec(dllexport) roaring_bitmap_t *RoaringBitmapAnd(const roaring_bitmap_t *x1, const roaring_bitmap_t *x2)
{
    return roaring_bitmap_and(x1, x2);
}

extern "C" __declspec(dllexport) void RoaringBitmapAndInplace(roaring_bitmap_t *x1, const roaring_bitmap_t *x2)
{
    roaring_bitmap_and_inplace(x1, x2);
}

extern "C" __declspec(dllexport) uint64_t RoaringBitmapAndCardinality(const roaring_bitmap_t *x1, const roaring_bitmap_t *x2)
{
    return roaring_bitmap_and_cardinality(x1, x2);
}

/* And Not */

extern "C" __declspec(dllexport) roaring_bitmap_t *RoaringBitmapAndNot(const roaring_bitmap_t *x1, const roaring_bitmap_t *x2)
{
    return roaring_bitmap_andnot(x1, x2);
}

extern "C" __declspec(dllexport) void RoaringBitmapAndNotInplace(roaring_bitmap_t *x1, const roaring_bitmap_t *x2)
{
    roaring_bitmap_andnot_inplace(x1, x2);
}

extern "C" __declspec(dllexport) uint64_t RoaringBitmapAndNotCardinality(const roaring_bitmap_t *x1, const roaring_bitmap_t *x2)
{
    return roaring_bitmap_andnot_cardinality(x1, x2);
}

/* Or */

extern "C" __declspec(dllexport) roaring_bitmap_t *RoaringBitmapOr(const roaring_bitmap_t *x1, const roaring_bitmap_t *x2)
{
    return roaring_bitmap_or(x1, x2);
}

extern "C" __declspec(dllexport) void RoaringBitmapOrInplace(roaring_bitmap_t *x1, const roaring_bitmap_t *x2)
{
    roaring_bitmap_or_inplace(x1, x2);
}

extern "C" __declspec(dllexport) uint64_t RoaringBitmapOrCardinality(const roaring_bitmap_t *x1, const roaring_bitmap_t *x2)
{
    return roaring_bitmap_or_cardinality(x1, x2);
}

extern "C" __declspec(dllexport) roaring_bitmap_t *RoaringBitmapOrMany(size_t number, const roaring_bitmap_t **x)
{
    return roaring_bitmap_or_many(number, x);
}

extern "C" __declspec(dllexport) roaring_bitmap_t *RoaringBitmapOrManyHeap(uint32_t number, const roaring_bitmap_t **x)
{
    return roaring_bitmap_or_many_heap(number, x);
}

extern "C" __declspec(dllexport) roaring_bitmap_t *RoaringBitmapLazyOr(const roaring_bitmap_t *x1, const roaring_bitmap_t *x2, const bool bitsetconversion)
{
    return roaring_bitmap_lazy_or(x1, x2, bitsetconversion);
}

extern "C" __declspec(dllexport) void RoaringBitmapLazyOrInplace(roaring_bitmap_t *x1, const roaring_bitmap_t *x2, const bool bitsetconversion)
{
    roaring_bitmap_lazy_or_inplace(x1, x2, bitsetconversion);
}

extern "C" __declspec(dllexport) void RoaringBitmapRepairAfterLazy(roaring_bitmap_t *x1)
{
    roaring_bitmap_repair_after_lazy(x1);
}

/* Add */

extern "C" __declspec(dllexport) bool RoaringBitmapSelect(const roaring_bitmap_t *ra, uint32_t rank, uint32_t *element)
{
    return roaring_bitmap_select(ra, rank, element);
}

extern "C" __declspec(dllexport) uint64_t RoaringBitmapRank(const roaring_bitmap_t *bm, uint32_t x)
{
    return roaring_bitmap_rank(bm, x);
}

extern "C" __declspec(dllexport) uint32_t RoaringBitmapMinimum(const roaring_bitmap_t *bm)
{
    return roaring_bitmap_minimum(bm);
}

extern "C" __declspec(dllexport) uint32_t RoaringBitmapMaximum(const roaring_bitmap_t *bm)
{
    return roaring_bitmap_maximum(bm);
}

extern "C" __declspec(dllexport) uint64_t RoaringBitmapGetCardinality(const roaring_bitmap_t *r)
{
    return roaring_bitmap_get_cardinality(r);
}

extern "C" __declspec(dllexport) uint64_t RoaringBitmapRangeCardinality(const roaring_bitmap_t *r, uint64_t start, uint64_t end)
{
    return roaring_bitmap_range_cardinality(r, start, end);
}

extern "C" __declspec(dllexport) bool RoaringBitmapIsEmpty(const roaring_bitmap_t *r)
{
    return roaring_bitmap_is_empty(r);
}

extern "C" __declspec(dllexport) bool RoaringBitmapEquals(const roaring_bitmap_t *ra1, const roaring_bitmap_t *ra2)
{
    return roaring_bitmap_equals(ra1, ra2);
}

extern "C" __declspec(dllexport) bool RoaringBitmapContains(const roaring_bitmap_t *r, uint32_t val)
{
    return roaring_bitmap_contains(r, val);
}

extern "C" __declspec(dllexport) bool RoaringBitmapContainsRange(const roaring_bitmap_t *r, uint64_t start, uint64_t end)
{
    return roaring_bitmap_contains_range(r, start, end);
}

extern "C" __declspec(dllexport) void RoaringBitmapStatistics(const roaring_bitmap_t *ra, roaring_statistics_t *stat)
{
    roaring_bitmap_statistics(ra, stat);
}

/* optimize */

extern "C" __declspec(dllexport) bool RoaringBitmapRunOptimize(roaring_bitmap_t *r)
{
    return roaring_bitmap_run_optimize(r);
}

extern "C" __declspec(dllexport) size_t RoaringBitmapShrinkToFit(roaring_bitmap_t *r)
{
    return roaring_bitmap_shrink_to_fit(r);
}

/* iterator */

extern "C" __declspec(dllexport) roaring_uint32_iterator_t *RoaringBitmapCreateIterator(roaring_bitmap_t *ra)
{
    return roaring_create_iterator(ra);
}

extern "C" __declspec(dllexport) uint32_t RoaringBitmapReadIterator(roaring_uint32_iterator_t *it, uint32_t *buf, uint32_t count)
{
    return roaring_read_uint32_iterator(it, buf, count);
}

extern "C" __declspec(dllexport) void RoaringBitmapFreeIterator(roaring_uint32_iterator_t *it)
{
    roaring_free_uint32_iterator(it);
}
