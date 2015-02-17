//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/io/FileBackedOutputStream.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonIoFileBackedOutputStream_RESTRICT
#define ComGoogleCommonIoFileBackedOutputStream_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoFileBackedOutputStream_RESTRICT
#if !defined (_ComGoogleCommonIoFileBackedOutputStream_) && (ComGoogleCommonIoFileBackedOutputStream_INCLUDE_ALL || ComGoogleCommonIoFileBackedOutputStream_INCLUDE)
#define _ComGoogleCommonIoFileBackedOutputStream_

@class ComGoogleCommonIoFileBackedOutputStream_MemoryOutput;
@class IOSByteArray;
@class JavaIoFile;
@class JavaIoInputStream;
@protocol ComGoogleCommonIoInputSupplier;

#define JavaIoOutputStream_RESTRICT 1
#define JavaIoOutputStream_INCLUDE 1
#include "java/io/OutputStream.h"


@interface ComGoogleCommonIoFileBackedOutputStream : JavaIoOutputStream {
}

- (JavaIoFile *)getFile;

- (instancetype)initWithInt:(jint)fileThreshold;

- (instancetype)initWithInt:(jint)fileThreshold
                withBoolean:(jboolean)resetOnFinalize;

- (id<ComGoogleCommonIoInputSupplier>)getSupplier;

- (void)reset;

- (void)writeWithInt:(jint)b;

- (void)writeWithByteArray:(IOSByteArray *)b;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

- (void)close;

- (void)flush;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoFileBackedOutputStream)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoFileBackedOutputStream)
#if !defined (_ComGoogleCommonIoFileBackedOutputStream_MemoryOutput_) && (ComGoogleCommonIoFileBackedOutputStream_INCLUDE_ALL || ComGoogleCommonIoFileBackedOutputStream_MemoryOutput_INCLUDE)
#define _ComGoogleCommonIoFileBackedOutputStream_MemoryOutput_

@class IOSByteArray;

#define JavaIoByteArrayOutputStream_RESTRICT 1
#define JavaIoByteArrayOutputStream_INCLUDE 1
#include "java/io/ByteArrayOutputStream.h"


@interface ComGoogleCommonIoFileBackedOutputStream_MemoryOutput : JavaIoByteArrayOutputStream {
}

- (IOSByteArray *)getBuffer;

- (jint)getCount;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoFileBackedOutputStream_MemoryOutput)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoFileBackedOutputStream_MemoryOutput)
#if !defined (_ComGoogleCommonIoFileBackedOutputStream_$1_) && (ComGoogleCommonIoFileBackedOutputStream_INCLUDE_ALL || ComGoogleCommonIoFileBackedOutputStream_$1_INCLUDE)
#define _ComGoogleCommonIoFileBackedOutputStream_$1_

@class ComGoogleCommonIoFileBackedOutputStream;
@class JavaIoInputStream;

#define ComGoogleCommonIoInputSupplier_RESTRICT 1
#define ComGoogleCommonIoInputSupplier_INCLUDE 1
#include "com/google/common/io/InputSupplier.h"


@interface ComGoogleCommonIoFileBackedOutputStream_$1 : NSObject < ComGoogleCommonIoInputSupplier > {
}

- (JavaIoInputStream *)getInput;

- (void)dealloc;

- (instancetype)initWithComGoogleCommonIoFileBackedOutputStream:(ComGoogleCommonIoFileBackedOutputStream *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoFileBackedOutputStream_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoFileBackedOutputStream_$1)
#if !defined (_ComGoogleCommonIoFileBackedOutputStream_$2_) && (ComGoogleCommonIoFileBackedOutputStream_INCLUDE_ALL || ComGoogleCommonIoFileBackedOutputStream_$2_INCLUDE)
#define _ComGoogleCommonIoFileBackedOutputStream_$2_

@class ComGoogleCommonIoFileBackedOutputStream;
@class JavaIoInputStream;

#define ComGoogleCommonIoInputSupplier_RESTRICT 1
#define ComGoogleCommonIoInputSupplier_INCLUDE 1
#include "com/google/common/io/InputSupplier.h"


@interface ComGoogleCommonIoFileBackedOutputStream_$2 : NSObject < ComGoogleCommonIoInputSupplier > {
}

- (JavaIoInputStream *)getInput;

- (instancetype)initWithComGoogleCommonIoFileBackedOutputStream:(ComGoogleCommonIoFileBackedOutputStream *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoFileBackedOutputStream_$2)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoFileBackedOutputStream_$2)
