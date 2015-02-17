//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/FilterInputStream.java
//

#ifndef _JavaIoFilterInputStream_H_
#define _JavaIoFilterInputStream_H_

@class IOSByteArray;

#include "J2ObjC_header.h"
#include "java/io/InputStream.h"

@interface JavaIoFilterInputStream : JavaIoInputStream {
 @public
  JavaIoInputStream *in_;
}

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (jint)available;

- (void)close;

- (void)markWithInt:(jint)readlimit;

- (jboolean)markSupported;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

- (void)reset;

- (jlong)skipWithLong:(jlong)byteCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFilterInputStream)

J2OBJC_FIELD_SETTER(JavaIoFilterInputStream, in_, JavaIoInputStream *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFilterInputStream)

#endif // _JavaIoFilterInputStream_H_
