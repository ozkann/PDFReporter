//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/matchers/MatchersPrinter.java
//

#ifndef _OrgMockitoInternalMatchersMatchersPrinter_H_
#define _OrgMockitoInternalMatchersMatchersPrinter_H_

@class OrgMockitoInternalReportingPrintSettings;
@protocol JavaUtilList;

#include "J2ObjC_header.h"

@interface OrgMockitoInternalMatchersMatchersPrinter : NSObject {
}

- (NSString *)getArgumentsLineWithJavaUtilList:(id<JavaUtilList>)matchers
  withOrgMockitoInternalReportingPrintSettings:(OrgMockitoInternalReportingPrintSettings *)printSettings;

- (NSString *)getArgumentsBlockWithJavaUtilList:(id<JavaUtilList>)matchers
   withOrgMockitoInternalReportingPrintSettings:(OrgMockitoInternalReportingPrintSettings *)printSettings;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersMatchersPrinter)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersMatchersPrinter)

#endif // _OrgMockitoInternalMatchersMatchersPrinter_H_
