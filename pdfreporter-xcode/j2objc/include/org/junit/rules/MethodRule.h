//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/junit/build_result/java/org/junit/rules/MethodRule.java
//

#ifndef _OrgJunitRulesMethodRule_H_
#define _OrgJunitRulesMethodRule_H_

@class OrgJunitRunnersModelFrameworkMethod;
@class OrgJunitRunnersModelStatement;

#include "J2ObjC_header.h"

@protocol OrgJunitRulesMethodRule < NSObject, JavaObject >

- (OrgJunitRunnersModelStatement *)applyWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)base
                                  withOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                                                                   withId:(id)target;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRulesMethodRule)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRulesMethodRule)

#endif // _OrgJunitRulesMethodRule_H_
