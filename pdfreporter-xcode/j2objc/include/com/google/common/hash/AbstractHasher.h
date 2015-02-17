//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/hash/AbstractHasher.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonHashAbstractHasher_RESTRICT
#define ComGoogleCommonHashAbstractHasher_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashAbstractHasher_RESTRICT
#if !defined (_ComGoogleCommonHashAbstractHasher_) && (ComGoogleCommonHashAbstractHasher_INCLUDE_ALL || ComGoogleCommonHashAbstractHasher_INCLUDE)
#define _ComGoogleCommonHashAbstractHasher_

@class JavaNioCharsetCharset;
@protocol JavaLangCharSequence;

#define ComGoogleCommonHashHasher_RESTRICT 1
#define ComGoogleCommonHashHasher_INCLUDE 1
#include "com/google/common/hash/Hasher.h"


@interface ComGoogleCommonHashAbstractHasher : NSObject < ComGoogleCommonHashHasher > {
}

- (id<ComGoogleCommonHashHasher>)putBooleanWithBoolean:(jboolean)b;

- (id<ComGoogleCommonHashHasher>)putDoubleWithDouble:(jdouble)d;

- (id<ComGoogleCommonHashHasher>)putFloatWithFloat:(jfloat)f;

- (id<ComGoogleCommonHashHasher>)putStringWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSequence;

- (id<ComGoogleCommonHashHasher>)putStringWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSequence
                                         withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashAbstractHasher)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashAbstractHasher)
