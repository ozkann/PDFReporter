//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/AbstractListMultimap.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectAbstractListMultimap_RESTRICT
#define ComGoogleCommonCollectAbstractListMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractListMultimap_RESTRICT
#if !defined (_ComGoogleCommonCollectAbstractListMultimap_) && (ComGoogleCommonCollectAbstractListMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractListMultimap_INCLUDE)
#define _ComGoogleCommonCollectAbstractListMultimap_

@protocol JavaLangIterable;
@protocol JavaUtilList;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectAbstractMapBasedMultimap_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE 1
#include "com/google/common/collect/AbstractMapBasedMultimap.h"

#define ComGoogleCommonCollectListMultimap_RESTRICT 1
#define ComGoogleCommonCollectListMultimap_INCLUDE 1
#include "com/google/common/collect/ListMultimap.h"


#define ComGoogleCommonCollectAbstractListMultimap_serialVersionUID 6588350623831699109LL

@interface ComGoogleCommonCollectAbstractListMultimap : ComGoogleCommonCollectAbstractMapBasedMultimap < ComGoogleCommonCollectListMultimap > {
}

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id<JavaUtilList>)createCollection;

- (id<JavaUtilList>)createUnmodifiableEmptyCollection;

- (id<JavaUtilList>)getWithId:(id)key;

- (id<JavaUtilList>)removeAllWithId:(id)key;

- (id<JavaUtilList>)replaceValuesWithId:(id)key
                   withJavaLangIterable:(id<JavaLangIterable>)values;

- (jboolean)putWithId:(id)key
               withId:(id)value;

- (id<JavaUtilMap>)asMap;

- (jboolean)isEqual:(id)object;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractListMultimap)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectAbstractListMultimap, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractListMultimap)
