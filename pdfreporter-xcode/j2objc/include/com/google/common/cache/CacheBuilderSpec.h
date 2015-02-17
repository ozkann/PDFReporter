//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/cache/CacheBuilderSpec.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCacheCacheBuilderSpec_RESTRICT
#define ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCacheCacheBuilderSpec_RESTRICT
#if ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_DurationParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_DurationParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_DurationParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_DurationParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_ValueParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_ValueParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_ValueParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_IntegerParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_LongParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_LongParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_LongParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_ValueParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_IntegerParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_IntegerParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_ValueParser_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_

@class ComGoogleCommonBaseSplitter;
@class ComGoogleCommonCacheCacheBuilder;
@class ComGoogleCommonCacheLocalCache_StrengthEnum;
@class ComGoogleCommonCollectImmutableMap;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaUtilConcurrentTimeUnitEnum;


@interface ComGoogleCommonCacheCacheBuilderSpec : NSObject {
 @public
  JavaLangInteger *initialCapacity_;
  JavaLangLong *maximumSize_;
  JavaLangLong *maximumWeight_;
  JavaLangInteger *concurrencyLevel_;
  ComGoogleCommonCacheLocalCache_StrengthEnum *keyStrength_;
  ComGoogleCommonCacheLocalCache_StrengthEnum *valueStrength_;
  jlong writeExpirationDuration_;
  JavaUtilConcurrentTimeUnitEnum *writeExpirationTimeUnit_;
  jlong accessExpirationDuration_;
  JavaUtilConcurrentTimeUnitEnum *accessExpirationTimeUnit_;
  jlong refreshDuration_;
  JavaUtilConcurrentTimeUnitEnum *refreshTimeUnit_;
}

+ (ComGoogleCommonCacheCacheBuilderSpec *)parseWithNSString:(NSString *)cacheBuilderSpecification;

+ (ComGoogleCommonCacheCacheBuilderSpec *)disableCaching;

- (ComGoogleCommonCacheCacheBuilder *)toCacheBuilder;

- (NSString *)toParsableString;

- (NSString *)description;

- (NSUInteger)hash;

- (jboolean)isEqual:(id)obj;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCacheCacheBuilderSpec_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec)

J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, initialCapacity_, JavaLangInteger *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, maximumSize_, JavaLangLong *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, maximumWeight_, JavaLangLong *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, concurrencyLevel_, JavaLangInteger *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, keyStrength_, ComGoogleCommonCacheLocalCache_StrengthEnum *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, valueStrength_, ComGoogleCommonCacheLocalCache_StrengthEnum *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, writeExpirationTimeUnit_, JavaUtilConcurrentTimeUnitEnum *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, accessExpirationTimeUnit_, JavaUtilConcurrentTimeUnitEnum *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, refreshTimeUnit_, JavaUtilConcurrentTimeUnitEnum *)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec *ComGoogleCommonCacheCacheBuilderSpec_parseWithNSString_(NSString *cacheBuilderSpecification);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec *ComGoogleCommonCacheCacheBuilderSpec_disableCaching();

FOUNDATION_EXPORT ComGoogleCommonBaseSplitter *ComGoogleCommonCacheCacheBuilderSpec_KEYS_SPLITTER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheCacheBuilderSpec, KEYS_SPLITTER_, ComGoogleCommonBaseSplitter *)

FOUNDATION_EXPORT ComGoogleCommonBaseSplitter *ComGoogleCommonCacheCacheBuilderSpec_KEY_VALUE_SPLITTER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheCacheBuilderSpec, KEY_VALUE_SPLITTER_, ComGoogleCommonBaseSplitter *)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCacheCacheBuilderSpec_VALUE_PARSERS_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheCacheBuilderSpec, VALUE_PARSERS_, ComGoogleCommonCollectImmutableMap *)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec)
#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_ValueParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_ValueParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_ValueParser_

@class ComGoogleCommonCacheCacheBuilderSpec;


@protocol ComGoogleCommonCacheCacheBuilderSpec_ValueParser < NSObject, JavaObject >

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString *)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_ValueParser)
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_ValueParser)
#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_IntegerParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_IntegerParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_IntegerParser_

@class ComGoogleCommonCacheCacheBuilderSpec;


@interface ComGoogleCommonCacheCacheBuilderSpec_IntegerParser : NSObject < ComGoogleCommonCacheCacheBuilderSpec_ValueParser > {
}

- (void)parseIntegerWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withInt:(jint)value;

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString *)value;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_IntegerParser)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_IntegerParser)
#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser_

@class ComGoogleCommonCacheCacheBuilderSpec;


@interface ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser : ComGoogleCommonCacheCacheBuilderSpec_IntegerParser {
}

- (void)parseIntegerWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withInt:(jint)value;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser)
#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_LongParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_LongParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_LongParser_

@class ComGoogleCommonCacheCacheBuilderSpec;


@interface ComGoogleCommonCacheCacheBuilderSpec_LongParser : NSObject < ComGoogleCommonCacheCacheBuilderSpec_ValueParser > {
}

- (void)parseLongWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                 withLong:(jlong)value;

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString *)value;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_LongParser)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_LongParser)
#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser_

@class ComGoogleCommonCacheCacheBuilderSpec;


@interface ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser : ComGoogleCommonCacheCacheBuilderSpec_LongParser {
}

- (void)parseLongWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                 withLong:(jlong)value;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser)
#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser_

@class ComGoogleCommonCacheCacheBuilderSpec;


@interface ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser : ComGoogleCommonCacheCacheBuilderSpec_LongParser {
}

- (void)parseLongWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                 withLong:(jlong)value;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser)
#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser_

@class ComGoogleCommonCacheCacheBuilderSpec;


@interface ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser : ComGoogleCommonCacheCacheBuilderSpec_IntegerParser {
}

- (void)parseIntegerWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withInt:(jint)value;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser)
#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser_

@class ComGoogleCommonCacheCacheBuilderSpec;
@class ComGoogleCommonCacheLocalCache_StrengthEnum;


@interface ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser : NSObject < ComGoogleCommonCacheCacheBuilderSpec_ValueParser > {
}

- (instancetype)initWithComGoogleCommonCacheLocalCache_StrengthEnum:(ComGoogleCommonCacheLocalCache_StrengthEnum *)strength;

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString *)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser)
#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser_

@class ComGoogleCommonCacheCacheBuilderSpec;
@class ComGoogleCommonCacheLocalCache_StrengthEnum;


@interface ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser : NSObject < ComGoogleCommonCacheCacheBuilderSpec_ValueParser > {
}

- (instancetype)initWithComGoogleCommonCacheLocalCache_StrengthEnum:(ComGoogleCommonCacheLocalCache_StrengthEnum *)strength;

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString *)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser)
#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_DurationParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_DurationParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_DurationParser_

@class ComGoogleCommonCacheCacheBuilderSpec;
@class JavaUtilConcurrentTimeUnitEnum;


@interface ComGoogleCommonCacheCacheBuilderSpec_DurationParser : NSObject < ComGoogleCommonCacheCacheBuilderSpec_ValueParser > {
}

- (void)parseDurationWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withLong:(jlong)duration
                           withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString *)value;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_DurationParser)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_DurationParser)
#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser_

@class ComGoogleCommonCacheCacheBuilderSpec;
@class JavaUtilConcurrentTimeUnitEnum;


@interface ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser : ComGoogleCommonCacheCacheBuilderSpec_DurationParser {
}

- (void)parseDurationWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withLong:(jlong)duration
                           withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser)
#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser_

@class ComGoogleCommonCacheCacheBuilderSpec;
@class JavaUtilConcurrentTimeUnitEnum;


@interface ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser : ComGoogleCommonCacheCacheBuilderSpec_DurationParser {
}

- (void)parseDurationWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withLong:(jlong)duration
                           withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser)
#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser_

@class ComGoogleCommonCacheCacheBuilderSpec;
@class JavaUtilConcurrentTimeUnitEnum;


@interface ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser : ComGoogleCommonCacheCacheBuilderSpec_DurationParser {
}

- (void)parseDurationWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withLong:(jlong)duration
                           withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser)
