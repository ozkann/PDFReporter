//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/handler/NullResultGuardian.java
//

#ifndef _OrgMockitoInternalHandlerNullResultGuardian_H_
#define _OrgMockitoInternalHandlerNullResultGuardian_H_

@protocol JavaUtilList;
@protocol OrgMockitoInternalStubbingInvocationContainer;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoMockMockCreationSettings;
@protocol OrgMockitoStubbingVoidMethodStubbable;

#include "J2ObjC_header.h"
#include "org/mockito/internal/InternalMockHandler.h"

@interface OrgMockitoInternalHandlerNullResultGuardian : NSObject < OrgMockitoInternalInternalMockHandler > {
}

- (instancetype)initWithOrgMockitoInternalInternalMockHandler:(id<OrgMockitoInternalInternalMockHandler>)delegate;

- (id)handleWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (id<OrgMockitoMockMockCreationSettings>)getMockSettings;

- (id<OrgMockitoStubbingVoidMethodStubbable>)voidMethodStubbableWithId:(id)mock;

- (void)setAnswersForStubbingWithJavaUtilList:(id<JavaUtilList>)answers;

- (id<OrgMockitoInternalStubbingInvocationContainer>)getInvocationContainer;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalHandlerNullResultGuardian)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalHandlerNullResultGuardian)

#endif // _OrgMockitoInternalHandlerNullResultGuardian_H_
