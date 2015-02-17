//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/AbstractMultimap.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectAbstractMultimap_RESTRICT
#define ComGoogleCommonCollectAbstractMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractMultimap_RESTRICT
#if !defined (_ComGoogleCommonCollectAbstractMultimap_) && (ComGoogleCommonCollectAbstractMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractMultimap_INCLUDE)
#define _ComGoogleCommonCollectAbstractMultimap_

@protocol ComGoogleCommonCollectMultiset;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectMultimap_RESTRICT 1
#define ComGoogleCommonCollectMultimap_INCLUDE 1
#include "com/google/common/collect/Multimap.h"


@interface ComGoogleCommonCollectAbstractMultimap : NSObject < ComGoogleCommonCollectMultimap > {
}

- (jboolean)isEmpty;

- (jboolean)containsValueWithId:(id)value;

- (jboolean)containsEntryWithId:(id)key
                         withId:(id)value;

- (jboolean)removeWithId:(id)key
                  withId:(id)value;

- (jboolean)putWithId:(id)key
               withId:(id)value;

- (jboolean)putAllWithId:(id)key
    withJavaLangIterable:(id<JavaLangIterable>)values;

- (jboolean)putAllWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (id<JavaUtilCollection>)replaceValuesWithId:(id)key
                         withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<JavaUtilCollection>)entries;

- (id<JavaUtilCollection>)createEntries;

- (id<JavaUtilIterator>)entryIterator;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilSet>)createKeySet;

- (id<ComGoogleCommonCollectMultiset>)keys;

- (id<ComGoogleCommonCollectMultiset>)createKeys;

- (id<JavaUtilCollection>)values;

- (id<JavaUtilCollection>)createValues;

- (id<JavaUtilMap>)asMap;

- (id<JavaUtilMap>)createAsMap;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMultimap)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMultimap)
#if !defined (_ComGoogleCommonCollectAbstractMultimap_createEntries_AbstractMultimapEntrySet_) && (ComGoogleCommonCollectAbstractMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractMultimap_createEntries_AbstractMultimapEntrySet_INCLUDE)
#define _ComGoogleCommonCollectAbstractMultimap_createEntries_AbstractMultimapEntrySet_

@class ComGoogleCommonCollectAbstractMultimap;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectMultimaps_RESTRICT 1
#define ComGoogleCommonCollectMultimaps_EntrySet_INCLUDE 1
#include "com/google/common/collect/Multimaps.h"


@interface ComGoogleCommonCollectAbstractMultimap_createEntries_AbstractMultimapEntrySet : ComGoogleCommonCollectMultimaps_EntrySet {
}

- (id<ComGoogleCommonCollectMultimap>)multimap;

- (id<JavaUtilIterator>)iterator;

- (instancetype)initWithComGoogleCommonCollectAbstractMultimap:(ComGoogleCommonCollectAbstractMultimap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMultimap_createEntries_AbstractMultimapEntrySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMultimap_createEntries_AbstractMultimapEntrySet)
#if !defined (_ComGoogleCommonCollectAbstractMultimap_createEntries_AbstractMultimapEntries_) && (ComGoogleCommonCollectAbstractMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractMultimap_createEntries_AbstractMultimapEntries_INCLUDE)
#define _ComGoogleCommonCollectAbstractMultimap_createEntries_AbstractMultimapEntries_

@class ComGoogleCommonCollectAbstractMultimap;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectMultimaps_RESTRICT 1
#define ComGoogleCommonCollectMultimaps_Entries_INCLUDE 1
#include "com/google/common/collect/Multimaps.h"


@interface ComGoogleCommonCollectAbstractMultimap_createEntries_AbstractMultimapEntries : ComGoogleCommonCollectMultimaps_Entries {
}

- (id<ComGoogleCommonCollectMultimap>)multimap;

- (id<JavaUtilIterator>)iterator;

- (instancetype)initWithComGoogleCommonCollectAbstractMultimap:(ComGoogleCommonCollectAbstractMultimap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMultimap_createEntries_AbstractMultimapEntries)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMultimap_createEntries_AbstractMultimapEntries)
#if !defined (_ComGoogleCommonCollectAbstractMultimap_createKeySet_AbstractMultimapKeySet_) && (ComGoogleCommonCollectAbstractMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractMultimap_createKeySet_AbstractMultimapKeySet_INCLUDE)
#define _ComGoogleCommonCollectAbstractMultimap_createKeySet_AbstractMultimapKeySet_

@class ComGoogleCommonCollectAbstractMultimap;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_KeySet_INCLUDE 1
#include "com/google/common/collect/Maps.h"


@interface ComGoogleCommonCollectAbstractMultimap_createKeySet_AbstractMultimapKeySet : ComGoogleCommonCollectMaps_KeySet {
}

- (id<JavaUtilMap>)map;

- (instancetype)initWithComGoogleCommonCollectAbstractMultimap:(ComGoogleCommonCollectAbstractMultimap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMultimap_createKeySet_AbstractMultimapKeySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMultimap_createKeySet_AbstractMultimapKeySet)
