//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/Executor.java
//

#ifndef _JavaUtilConcurrentExecutor_H_
#define _JavaUtilConcurrentExecutor_H_

@protocol JavaLangRunnable;

#include "J2ObjC_header.h"

@protocol JavaUtilConcurrentExecutor < NSObject, JavaObject >

- (void)executeWithJavaLangRunnable:(id<JavaLangRunnable>)command;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentExecutor)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentExecutor)

#endif // _JavaUtilConcurrentExecutor_H_
