//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/security/cert/Certificate.java
//

#ifndef _JavaxSecurityCertCertificate_H_
#define _JavaxSecurityCertCertificate_H_

@class IOSByteArray;
@protocol JavaSecurityPublicKey;

#include "J2ObjC_header.h"

@interface JavaxSecurityCertCertificate : NSObject {
}

- (instancetype)init;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (IOSByteArray *)getEncoded;

- (void)verifyWithJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)key;

- (void)verifyWithJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)key
                           withNSString:(NSString *)sigProvider;

- (NSString *)description;

- (id<JavaSecurityPublicKey>)getPublicKey;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityCertCertificate)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityCertCertificate)

#endif // _JavaxSecurityCertCertificate_H_
