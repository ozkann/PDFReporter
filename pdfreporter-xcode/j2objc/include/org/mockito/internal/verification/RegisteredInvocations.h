//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/verification/RegisteredInvocations.java
//

#ifndef _OrgMockitoInternalVerificationRegisteredInvocations_H_
#define _OrgMockitoInternalVerificationRegisteredInvocations_H_

@protocol JavaUtilList;
@protocol OrgMockitoInvocationInvocation;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/internal/util/collections/ListUtil.h"

#define OrgMockitoInternalVerificationRegisteredInvocations_serialVersionUID -2674402327380736290LL

@interface OrgMockitoInternalVerificationRegisteredInvocations : NSObject < JavaIoSerializable > {
}

- (void)addWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (void)removeLast;

- (id<JavaUtilList>)getAll;

- (jboolean)isEmpty;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationRegisteredInvocations)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalVerificationRegisteredInvocations, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationRegisteredInvocations)

@interface OrgMockitoInternalVerificationRegisteredInvocations_RemoveToString : NSObject < OrgMockitoInternalUtilCollectionsListUtil_Filter > {
}

- (jboolean)isOutWithId:(id<OrgMockitoInvocationInvocation>)invocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationRegisteredInvocations_RemoveToString)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationRegisteredInvocations_RemoveToString)

#endif // _OrgMockitoInternalVerificationRegisteredInvocations_H_
