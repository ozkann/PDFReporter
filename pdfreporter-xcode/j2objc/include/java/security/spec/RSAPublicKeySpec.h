//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/RSAPublicKeySpec.java
//

#ifndef _JavaSecuritySpecRSAPublicKeySpec_H_
#define _JavaSecuritySpecRSAPublicKeySpec_H_

@class JavaMathBigInteger;

#include "J2ObjC_header.h"
#include "java/security/spec/KeySpec.h"

@interface JavaSecuritySpecRSAPublicKeySpec : NSObject < JavaSecuritySpecKeySpec > {
}

- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)modulus
                    withJavaMathBigInteger:(JavaMathBigInteger *)publicExponent;

- (JavaMathBigInteger *)getModulus;

- (JavaMathBigInteger *)getPublicExponent;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecRSAPublicKeySpec)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecRSAPublicKeySpec)

#endif // _JavaSecuritySpecRSAPublicKeySpec_H_
