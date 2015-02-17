//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/TreeRangeMap.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectTreeRangeMap_RESTRICT
#define ComGoogleCommonCollectTreeRangeMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectTreeRangeMap_RESTRICT
#if !defined (_ComGoogleCommonCollectTreeRangeMap_) && (ComGoogleCommonCollectTreeRangeMap_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeMap_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeMap_

@class ComGoogleCommonCollectCut;
@class ComGoogleCommonCollectRange;
@protocol JavaLangComparable;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;
@protocol JavaUtilNavigableMap;

#define ComGoogleCommonCollectRangeMap_RESTRICT 1
#define ComGoogleCommonCollectRangeMap_INCLUDE 1
#include "com/google/common/collect/RangeMap.h"


@interface ComGoogleCommonCollectTreeRangeMap : NSObject < ComGoogleCommonCollectRangeMap > {
}

+ (ComGoogleCommonCollectTreeRangeMap *)create;

- (id)getWithJavaLangComparable:(id<JavaLangComparable>)key;

- (id<JavaUtilMap_Entry>)getEntryWithJavaLangComparable:(id<JavaLangComparable>)key;

- (void)putWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range
                                    withId:(id)value;

- (void)putAllWithComGoogleCommonCollectRangeMap:(id<ComGoogleCommonCollectRangeMap>)rangeMap;

- (void)clear;

- (ComGoogleCommonCollectRange *)span;

- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)rangeToRemove;

- (id<JavaUtilMap>)asMapOfRanges;

- (id<ComGoogleCommonCollectRangeMap>)subRangeMapWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)subRange;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectTreeRangeMap_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectTreeRangeMap)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectTreeRangeMap *ComGoogleCommonCollectTreeRangeMap_create();

FOUNDATION_EXPORT id<ComGoogleCommonCollectRangeMap> ComGoogleCommonCollectTreeRangeMap_EMPTY_SUB_RANGE_MAP_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectTreeRangeMap, EMPTY_SUB_RANGE_MAP_, id<ComGoogleCommonCollectRangeMap>)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeRangeMap)
#if !defined (_ComGoogleCommonCollectTreeRangeMap_RangeMapEntry_) && (ComGoogleCommonCollectTreeRangeMap_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeMap_RangeMapEntry_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeMap_RangeMapEntry_

@class ComGoogleCommonCollectCut;
@class ComGoogleCommonCollectRange;
@protocol JavaLangComparable;

#define ComGoogleCommonCollectAbstractMapEntry_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapEntry_INCLUDE 1
#include "com/google/common/collect/AbstractMapEntry.h"


@interface ComGoogleCommonCollectTreeRangeMap_RangeMapEntry : ComGoogleCommonCollectAbstractMapEntry {
}

- (instancetype)initWithComGoogleCommonCollectCut:(ComGoogleCommonCollectCut *)lowerBound
                    withComGoogleCommonCollectCut:(ComGoogleCommonCollectCut *)upperBound
                                           withId:(id)value;

- (instancetype)initWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range
                                             withId:(id)value;

- (ComGoogleCommonCollectRange *)getKey;

- (id)getValue;

- (jboolean)containsWithJavaLangComparable:(id<JavaLangComparable>)value;

- (ComGoogleCommonCollectCut *)getLowerBound;

- (ComGoogleCommonCollectCut *)getUpperBound;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeRangeMap_RangeMapEntry)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeRangeMap_RangeMapEntry)
#if !defined (_ComGoogleCommonCollectTreeRangeMap_AsMapOfRanges_) && (ComGoogleCommonCollectTreeRangeMap_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeMap_AsMapOfRanges_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeMap_AsMapOfRanges_

@class ComGoogleCommonCollectTreeRangeMap;
@protocol JavaUtilSet;

#define JavaUtilAbstractMap_RESTRICT 1
#define JavaUtilAbstractMap_INCLUDE 1
#include "java/util/AbstractMap.h"


@interface ComGoogleCommonCollectTreeRangeMap_AsMapOfRanges : JavaUtilAbstractMap {
}

- (jboolean)containsKeyWithId:(id)key;

- (id)getWithId:(id)key;

- (id<JavaUtilSet>)entrySet;

- (instancetype)initWithComGoogleCommonCollectTreeRangeMap:(ComGoogleCommonCollectTreeRangeMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeRangeMap_AsMapOfRanges)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeRangeMap_AsMapOfRanges)
#if !defined (_ComGoogleCommonCollectTreeRangeMap_AsMapOfRanges_$1_) && (ComGoogleCommonCollectTreeRangeMap_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeMap_AsMapOfRanges_$1_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeMap_AsMapOfRanges_$1_

@class ComGoogleCommonCollectTreeRangeMap_AsMapOfRanges;
@protocol JavaUtilIterator;

#define JavaUtilAbstractSet_RESTRICT 1
#define JavaUtilAbstractSet_INCLUDE 1
#include "java/util/AbstractSet.h"


@interface ComGoogleCommonCollectTreeRangeMap_AsMapOfRanges_$1 : JavaUtilAbstractSet {
}

- (id<JavaUtilIterator>)iterator;

- (jint)size;

- (instancetype)initWithComGoogleCommonCollectTreeRangeMap_AsMapOfRanges:(ComGoogleCommonCollectTreeRangeMap_AsMapOfRanges *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeRangeMap_AsMapOfRanges_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeRangeMap_AsMapOfRanges_$1)
#if !defined (_ComGoogleCommonCollectTreeRangeMap_SubRangeMap_) && (ComGoogleCommonCollectTreeRangeMap_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeMap_SubRangeMap_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeMap_SubRangeMap_

@class ComGoogleCommonCollectRange;
@class ComGoogleCommonCollectTreeRangeMap;
@protocol JavaLangComparable;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectRangeMap_RESTRICT 1
#define ComGoogleCommonCollectRangeMap_INCLUDE 1
#include "com/google/common/collect/RangeMap.h"


@interface ComGoogleCommonCollectTreeRangeMap_SubRangeMap : NSObject < ComGoogleCommonCollectRangeMap > {
}

- (instancetype)initWithComGoogleCommonCollectTreeRangeMap:(ComGoogleCommonCollectTreeRangeMap *)outer$
                           withComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)subRange;

- (id)getWithJavaLangComparable:(id<JavaLangComparable>)key;

- (id<JavaUtilMap_Entry>)getEntryWithJavaLangComparable:(id<JavaLangComparable>)key;

- (ComGoogleCommonCollectRange *)span;

- (void)putWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range
                                    withId:(id)value;

- (void)putAllWithComGoogleCommonCollectRangeMap:(id<ComGoogleCommonCollectRangeMap>)rangeMap;

- (void)clear;

- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (id<ComGoogleCommonCollectRangeMap>)subRangeMapWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (id<JavaUtilMap>)asMapOfRanges;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeRangeMap_SubRangeMap)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeRangeMap_SubRangeMap)
#if !defined (_ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_) && (ComGoogleCommonCollectTreeRangeMap_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_

@class ComGoogleCommonCollectTreeRangeMap_SubRangeMap;
@protocol ComGoogleCommonBasePredicate;
@protocol JavaUtilCollection;
@protocol JavaUtilSet;

#define JavaUtilAbstractMap_RESTRICT 1
#define JavaUtilAbstractMap_INCLUDE 1
#include "java/util/AbstractMap.h"


@interface ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap : JavaUtilAbstractMap {
}

- (jboolean)containsKeyWithId:(id)key;

- (id)getWithId:(id)key;

- (id)removeWithId:(id)key;

- (void)clear;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilSet>)entrySet;

- (id<JavaUtilCollection>)values;

- (instancetype)initWithComGoogleCommonCollectTreeRangeMap_SubRangeMap:(ComGoogleCommonCollectTreeRangeMap_SubRangeMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap)
#if !defined (_ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_keySet_SubRangeMapAsMapKeySet_) && (ComGoogleCommonCollectTreeRangeMap_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_keySet_SubRangeMapAsMapKeySet_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_keySet_SubRangeMapAsMapKeySet_

@class ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_KeySet_INCLUDE 1
#include "com/google/common/collect/Maps.h"


@interface ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_keySet_SubRangeMapAsMapKeySet : ComGoogleCommonCollectMaps_KeySet {
}

- (id<JavaUtilMap>)map;

- (jboolean)removeWithId:(id)o;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (instancetype)initWithComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap:(ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_keySet_SubRangeMapAsMapKeySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_keySet_SubRangeMapAsMapKeySet)
#if !defined (_ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_values_SubRangeMapAsMapValuesCollection_) && (ComGoogleCommonCollectTreeRangeMap_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_values_SubRangeMapAsMapValuesCollection_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_values_SubRangeMapAsMapValuesCollection_

@class ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_Values_INCLUDE 1
#include "com/google/common/collect/Maps.h"


@interface ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_values_SubRangeMapAsMapValuesCollection : ComGoogleCommonCollectMaps_Values {
}

- (id<JavaUtilMap>)map;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (instancetype)initWithComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap:(ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_values_SubRangeMapAsMapValuesCollection)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_values_SubRangeMapAsMapValuesCollection)
#if !defined (_ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_$1_) && (ComGoogleCommonCollectTreeRangeMap_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_$1_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_$1_

@class ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_EntrySet_INCLUDE 1
#include "com/google/common/collect/Maps.h"


@interface ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_$1 : ComGoogleCommonCollectMaps_EntrySet {
}

- (id<JavaUtilMap>)map;

- (id<JavaUtilIterator>)iterator;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)size;

- (jboolean)isEmpty;

- (instancetype)initWithComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap:(ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_$1)
#if !defined (_ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_$1_$1_) && (ComGoogleCommonCollectTreeRangeMap_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_$1_$1_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_$1_$1_

@class ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_$1;
@protocol JavaUtilIterator;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectAbstractIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIterator.h"


@interface ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_$1_$1 : ComGoogleCommonCollectAbstractIterator {
}

- (id<JavaUtilMap_Entry>)computeNext;

- (instancetype)initWithComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_$1:(ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_$1 *)outer$
                                                                      withJavaUtilIterator:(id<JavaUtilIterator>)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_$1_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeRangeMap_SubRangeMap_SubRangeMapAsMap_$1_$1)
#if !defined (_ComGoogleCommonCollectTreeRangeMap_$1_) && (ComGoogleCommonCollectTreeRangeMap_INCLUDE_ALL || ComGoogleCommonCollectTreeRangeMap_$1_INCLUDE)
#define _ComGoogleCommonCollectTreeRangeMap_$1_

@class ComGoogleCommonCollectRange;
@protocol JavaLangComparable;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectRangeMap_RESTRICT 1
#define ComGoogleCommonCollectRangeMap_INCLUDE 1
#include "com/google/common/collect/RangeMap.h"


@interface ComGoogleCommonCollectTreeRangeMap_$1 : NSObject < ComGoogleCommonCollectRangeMap > {
}

- (id)getWithJavaLangComparable:(id<JavaLangComparable>)key;

- (id<JavaUtilMap_Entry>)getEntryWithJavaLangComparable:(id<JavaLangComparable>)key;

- (ComGoogleCommonCollectRange *)span;

- (void)putWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range
                                    withId:(id)value;

- (void)putAllWithComGoogleCommonCollectRangeMap:(id<ComGoogleCommonCollectRangeMap>)rangeMap;

- (void)clear;

- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (id<JavaUtilMap>)asMapOfRanges;

- (id<ComGoogleCommonCollectRangeMap>)subRangeMapWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeRangeMap_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeRangeMap_$1)
