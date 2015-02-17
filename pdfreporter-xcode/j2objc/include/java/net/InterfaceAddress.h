//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/InterfaceAddress.java
//

#ifndef _JavaNetInterfaceAddress_H_
#define _JavaNetInterfaceAddress_H_

@class JavaNetInet4Address;
@class JavaNetInet6Address;
@class JavaNetInetAddress;

#include "J2ObjC_header.h"

@interface JavaNetInterfaceAddress : NSObject {
}

- (instancetype)initWithJavaNetInet4Address:(JavaNetInet4Address *)address
                    withJavaNetInet4Address:(JavaNetInet4Address *)broadcastAddress
                    withJavaNetInet4Address:(JavaNetInet4Address *)mask;

- (instancetype)initWithJavaNetInet6Address:(JavaNetInet6Address *)address
                                  withShort:(jshort)prefixLength;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

- (JavaNetInetAddress *)getAddress;

- (JavaNetInetAddress *)getBroadcast;

- (jshort)getNetworkPrefixLength;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetInterfaceAddress)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNetInterfaceAddress)

#endif // _JavaNetInterfaceAddress_H_
