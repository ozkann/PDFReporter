//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/ImmutableEntry.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectImmutableEntry_RESTRICT
#define ComGoogleCommonCollectImmutableEntry_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableEntry_RESTRICT
#if !defined (_ComGoogleCommonCollectImmutableEntry_) && (ComGoogleCommonCollectImmutableEntry_INCLUDE_ALL || ComGoogleCommonCollectImmutableEntry_INCLUDE)
#define _ComGoogleCommonCollectImmutableEntry_

#define ComGoogleCommonCollectAbstractMapEntry_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapEntry_INCLUDE 1
#include "com/google/common/collect/AbstractMapEntry.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectImmutableEntry_serialVersionUID 0LL

@interface ComGoogleCommonCollectImmutableEntry : ComGoogleCommonCollectAbstractMapEntry < JavaIoSerializable > {
}

- (instancetype)initWithId:(id)key
                    withId:(id)value;

- (id)getKey;

- (id)getValue;

- (id)setValueWithId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableEntry)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableEntry, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableEntry)
