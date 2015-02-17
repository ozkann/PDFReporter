//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/io/LittleEndianDataInputStream.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonIoLittleEndianDataInputStream_RESTRICT
#define ComGoogleCommonIoLittleEndianDataInputStream_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoLittleEndianDataInputStream_RESTRICT
#if !defined (_ComGoogleCommonIoLittleEndianDataInputStream_) && (ComGoogleCommonIoLittleEndianDataInputStream_INCLUDE_ALL || ComGoogleCommonIoLittleEndianDataInputStream_INCLUDE)
#define _ComGoogleCommonIoLittleEndianDataInputStream_

@class IOSByteArray;
@class JavaIoInputStream;

#define JavaIoFilterInputStream_RESTRICT 1
#define JavaIoFilterInputStream_INCLUDE 1
#include "java/io/FilterInputStream.h"

#define JavaIoDataInput_RESTRICT 1
#define JavaIoDataInput_INCLUDE 1
#include "java/io/DataInput.h"


@interface ComGoogleCommonIoLittleEndianDataInputStream : JavaIoFilterInputStream < JavaIoDataInput > {
}

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (NSString *)readLine;

- (void)readFullyWithByteArray:(IOSByteArray *)b;

- (void)readFullyWithByteArray:(IOSByteArray *)b
                       withInt:(jint)off
                       withInt:(jint)len;

- (jint)skipBytesWithInt:(jint)n;

- (jint)readUnsignedByte;

- (jint)readUnsignedShort;

- (jint)readInt;

- (jlong)readLong;

- (jfloat)readFloat;

- (jdouble)readDouble;

- (NSString *)readUTF;

- (jshort)readShort;

- (jchar)readChar;

- (jbyte)readByte;

- (jboolean)readBoolean;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoLittleEndianDataInputStream)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoLittleEndianDataInputStream)
