//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/DeflaterInputStream.java
//

#ifndef _JavaUtilZipDeflaterInputStream_H_
#define _JavaUtilZipDeflaterInputStream_H_

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaUtilZipDeflater;

#include "J2ObjC_header.h"
#include "java/io/FilterInputStream.h"

#define JavaUtilZipDeflaterInputStream_DEFAULT_BUFFER_SIZE 1024

@interface JavaUtilZipDeflaterInputStream : JavaIoFilterInputStream {
 @public
  JavaUtilZipDeflater *def_;
  IOSByteArray *buf_;
}

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                  withJavaUtilZipDeflater:(JavaUtilZipDeflater *)deflater;

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                  withJavaUtilZipDeflater:(JavaUtilZipDeflater *)deflater
                                  withInt:(jint)bufferSize;

- (void)close;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

- (jlong)skipWithLong:(jlong)byteCount;

- (jint)available;

- (jboolean)markSupported;

- (void)markWithInt:(jint)limit;

- (void)reset;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipDeflaterInputStream)

J2OBJC_FIELD_SETTER(JavaUtilZipDeflaterInputStream, def_, JavaUtilZipDeflater *)
J2OBJC_FIELD_SETTER(JavaUtilZipDeflaterInputStream, buf_, IOSByteArray *)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipDeflaterInputStream, DEFAULT_BUFFER_SIZE, jint)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipDeflaterInputStream)

#endif // _JavaUtilZipDeflaterInputStream_H_
