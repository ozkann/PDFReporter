//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/matchers/Null.java
//

#ifndef _OrgMockitoInternalMatchersNull_H_
#define _OrgMockitoInternalMatchersNull_H_

@protocol OrgHamcrestDescription;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/ArgumentMatcher.h"

#define OrgMockitoInternalMatchersNull_serialVersionUID 2823082637424390314LL

@interface OrgMockitoInternalMatchersNull : OrgMockitoArgumentMatcher < JavaIoSerializable > {
}

- (jboolean)matchesWithId:(id)actual;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

@end

FOUNDATION_EXPORT BOOL OrgMockitoInternalMatchersNull_initialized;
J2OBJC_STATIC_INIT(OrgMockitoInternalMatchersNull)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersNull, serialVersionUID, jlong)

FOUNDATION_EXPORT OrgMockitoInternalMatchersNull *OrgMockitoInternalMatchersNull_NULL__;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersNull, NULL__, OrgMockitoInternalMatchersNull *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersNull)

#endif // _OrgMockitoInternalMatchersNull_H_
