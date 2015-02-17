//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/junit/build_result/java/org/junit/runners/model/RunnerBuilder.java
//

#ifndef _OrgJunitRunnersModelRunnerBuilder_H_
#define _OrgJunitRunnersModelRunnerBuilder_H_

@class IOSClass;
@class IOSObjectArray;
@class OrgJunitRunnerRunner;
@protocol JavaUtilList;
@protocol JavaUtilSet;

#include "J2ObjC_header.h"

@interface OrgJunitRunnersModelRunnerBuilder : NSObject {
}

- (OrgJunitRunnerRunner *)runnerForClassWithIOSClass:(IOSClass *)testClass;

- (OrgJunitRunnerRunner *)safeRunnerForClassWithIOSClass:(IOSClass *)testClass;

- (IOSClass *)addParentWithIOSClass:(IOSClass *)parent;

- (void)removeParentWithIOSClass:(IOSClass *)klass;

- (id<JavaUtilList>)runnersWithIOSClass:(IOSClass *)parent
                      withIOSClassArray:(IOSObjectArray *)children;

- (id<JavaUtilList>)runnersWithIOSClass:(IOSClass *)parent
                       withJavaUtilList:(id<JavaUtilList>)children;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelRunnerBuilder)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelRunnerBuilder)

#endif // _OrgJunitRunnersModelRunnerBuilder_H_
