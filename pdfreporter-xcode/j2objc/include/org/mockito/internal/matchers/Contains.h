//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/matchers/Contains.java
//

#ifndef _OrgMockitoInternalMatchersContains_H_
#define _OrgMockitoInternalMatchersContains_H_

@protocol OrgHamcrestDescription;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/ArgumentMatcher.h"

#define OrgMockitoInternalMatchersContains_serialVersionUID -1909837398271763801LL

@interface OrgMockitoInternalMatchersContains : OrgMockitoArgumentMatcher < JavaIoSerializable > {
}

- (instancetype)initWithNSString:(NSString *)substring;

- (jboolean)matchesWithId:(id)actual;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersContains)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersContains, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersContains)

#endif // _OrgMockitoInternalMatchersContains_H_
