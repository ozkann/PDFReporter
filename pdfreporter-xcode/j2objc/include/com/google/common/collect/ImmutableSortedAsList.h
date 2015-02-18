//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/ImmutableSortedAsList.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectImmutableSortedAsList_RESTRICT
#define ComGoogleCommonCollectImmutableSortedAsList_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableSortedAsList_RESTRICT
#if !defined (_ComGoogleCommonCollectImmutableSortedAsList_) && (ComGoogleCommonCollectImmutableSortedAsList_INCLUDE_ALL || ComGoogleCommonCollectImmutableSortedAsList_INCLUDE)
#define _ComGoogleCommonCollectImmutableSortedAsList_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableSortedSet;
@protocol JavaUtilComparator;

#define ComGoogleCommonCollectRegularImmutableAsList_RESTRICT 1
#define ComGoogleCommonCollectRegularImmutableAsList_INCLUDE 1
#include "com/google/common/collect/RegularImmutableAsList.h"

#define ComGoogleCommonCollectSortedIterable_RESTRICT 1
#define ComGoogleCommonCollectSortedIterable_INCLUDE 1
#include "com/google/common/collect/SortedIterable.h"


@interface ComGoogleCommonCollectImmutableSortedAsList : ComGoogleCommonCollectRegularImmutableAsList < ComGoogleCommonCollectSortedIterable > {
}

- (instancetype)initWithComGoogleCommonCollectImmutableSortedSet:(ComGoogleCommonCollectImmutableSortedSet *)backingSet
                         withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)backingList;

- (ComGoogleCommonCollectImmutableSortedSet *)delegateCollection;

- (id<JavaUtilComparator>)comparator;

- (jint)indexOfWithId:(id)target;

- (jint)lastIndexOfWithId:(id)target;

- (jboolean)containsWithId:(id)target;

- (ComGoogleCommonCollectImmutableList *)subListUncheckedWithInt:(jint)fromIndex
                                                         withInt:(jint)toIndex;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSortedAsList)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSortedAsList)