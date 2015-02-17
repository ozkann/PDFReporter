//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ClassLoader.java
//

#ifndef _JavaLangClassLoader_H_
#define _JavaLangClassLoader_H_

@class IOSByteArray;
@class IOSClass;
@class IOSObjectArray;
@class JavaIoInputStream;
@class JavaLangPackage;
@class JavaNetURL;
@class JavaNioByteBuffer;
@class JavaSecurityProtectionDomain;
@protocol JavaUtilMap;

#include "J2ObjC_header.h"
#include "java/util/Enumeration.h"

@interface JavaLangTwoEnumerationsInOne : NSObject < JavaUtilEnumeration > {
}

- (instancetype)initWithJavaUtilEnumeration:(id<JavaUtilEnumeration>)first
                    withJavaUtilEnumeration:(id<JavaUtilEnumeration>)second;

- (jboolean)hasMoreElements;

- (JavaNetURL *)nextElement;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangTwoEnumerationsInOne)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangTwoEnumerationsInOne)

@interface JavaLangClassLoader : NSObject {
}

+ (JavaLangClassLoader *)getSystemClassLoader;

+ (JavaNetURL *)getSystemResourceWithNSString:(NSString *)resName;

+ (id<JavaUtilEnumeration>)getSystemResourcesWithNSString:(NSString *)resName;

+ (JavaIoInputStream *)getSystemResourceAsStreamWithNSString:(NSString *)resName;

- (instancetype)init;

- (instancetype)initWithJavaLangClassLoader:(JavaLangClassLoader *)parentLoader;

- (instancetype)initWithJavaLangClassLoader:(JavaLangClassLoader *)parentLoader
                                withBoolean:(jboolean)nullAllowed;

- (IOSClass *)defineClassWithByteArray:(IOSByteArray *)classRep
                               withInt:(jint)offset
                               withInt:(jint)length;

- (IOSClass *)defineClassWithNSString:(NSString *)className_
                        withByteArray:(IOSByteArray *)classRep
                              withInt:(jint)offset
                              withInt:(jint)length;

- (IOSClass *)defineClassWithNSString:(NSString *)className_
                        withByteArray:(IOSByteArray *)classRep
                              withInt:(jint)offset
                              withInt:(jint)length
     withJavaSecurityProtectionDomain:(JavaSecurityProtectionDomain *)protectionDomain;

- (IOSClass *)defineClassWithNSString:(NSString *)name
                withJavaNioByteBuffer:(JavaNioByteBuffer *)b
     withJavaSecurityProtectionDomain:(JavaSecurityProtectionDomain *)protectionDomain;

- (IOSClass *)findClassWithNSString:(NSString *)className_;

- (IOSClass *)findLoadedClassWithNSString:(NSString *)className_;

- (IOSClass *)findSystemClassWithNSString:(NSString *)className_;

- (JavaLangClassLoader *)getParent;

- (JavaNetURL *)getResourceWithNSString:(NSString *)resName;

- (id<JavaUtilEnumeration>)getResourcesWithNSString:(NSString *)resName;

- (JavaIoInputStream *)getResourceAsStreamWithNSString:(NSString *)resName;

- (IOSClass *)loadClassWithNSString:(NSString *)className_;

- (IOSClass *)loadClassWithNSString:(NSString *)className_
                        withBoolean:(jboolean)resolve;

- (void)resolveClassWithIOSClass:(IOSClass *)clazz;

- (JavaNetURL *)findResourceWithNSString:(NSString *)resName;

- (id<JavaUtilEnumeration>)findResourcesWithNSString:(NSString *)resName;

- (NSString *)findLibraryWithNSString:(NSString *)libName;

- (JavaLangPackage *)getPackageWithNSString:(NSString *)name;

- (IOSObjectArray *)getPackages;

- (JavaLangPackage *)definePackageWithNSString:(NSString *)name
                                  withNSString:(NSString *)specTitle
                                  withNSString:(NSString *)specVersion
                                  withNSString:(NSString *)specVendor
                                  withNSString:(NSString *)implTitle
                                  withNSString:(NSString *)implVersion
                                  withNSString:(NSString *)implVendor
                                withJavaNetURL:(JavaNetURL *)sealBase;

- (void)setSignersWithIOSClass:(IOSClass *)c
             withNSObjectArray:(IOSObjectArray *)signers;

- (void)setClassAssertionStatusWithNSString:(NSString *)cname
                                withBoolean:(jboolean)enable;

- (void)setPackageAssertionStatusWithNSString:(NSString *)pname
                                  withBoolean:(jboolean)enable;

- (void)setDefaultAssertionStatusWithBoolean:(jboolean)enable;

- (void)clearAssertionStatus;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangClassLoader)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaLangClassLoader *JavaLangClassLoader_getSystemClassLoader();

FOUNDATION_EXPORT JavaNetURL *JavaLangClassLoader_getSystemResourceWithNSString_(NSString *resName);

FOUNDATION_EXPORT id<JavaUtilEnumeration> JavaLangClassLoader_getSystemResourcesWithNSString_(NSString *resName);

FOUNDATION_EXPORT JavaIoInputStream *JavaLangClassLoader_getSystemResourceAsStreamWithNSString_(NSString *resName);
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangClassLoader)

@interface JavaLangSystemClassLoader : JavaLangClassLoader {
}

- (instancetype)init;

- (IOSClass *)findClassWithNSString:(NSString *)name;

- (JavaNetURL *)findResourceWithNSString:(NSString *)name;

- (id<JavaUtilEnumeration>)findResourcesWithNSString:(NSString *)name;

- (IOSClass *)loadClassWithNSString:(NSString *)name
                        withBoolean:(jboolean)resolve;

- (JavaNetURL *)getResourceWithNSString:(NSString *)resName;

- (id<JavaUtilEnumeration>)getResourcesWithNSString:(NSString *)resName;

@end

FOUNDATION_EXPORT BOOL JavaLangSystemClassLoader_initialized;
J2OBJC_STATIC_INIT(JavaLangSystemClassLoader)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaLangClassLoader *JavaLangSystemClassLoader_loader_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangSystemClassLoader, loader_, JavaLangClassLoader *)
J2OBJC_STATIC_FIELD_SETTER(JavaLangSystemClassLoader, loader_, JavaLangClassLoader *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangSystemClassLoader)

#endif // _JavaLangClassLoader_H_
