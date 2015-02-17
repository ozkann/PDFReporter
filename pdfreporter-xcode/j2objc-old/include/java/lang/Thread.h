//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/lang/Thread.java
//
//  Created by tball on 7/15/13.
//

#ifndef _JavaLangThread_H_
#define _JavaLangThread_H_

@class JavaLangThreadGroup;
@class JavaLangThread_StateEnum;
@class JavaLangThrowable;

#import "JreEmulation.h"
#include "java/lang/Enum.h"
#include "java/lang/Runnable.h"

#define JavaLangThread_MAX_PRIORITY 10
#define JavaLangThread_MIN_PRIORITY 1
#define JavaLangThread_NORM_PRIORITY 5
#define JavaLangThread_POLL_INTERVAL 100

@interface JavaLangThread : NSObject < JavaLangRunnable > {
 @public
  id nsThread_;
  BOOL isDaemon__;
}

@property (nonatomic, retain) id nsThread;
@property (nonatomic, assign) BOOL isDaemon_;

+ (JavaLangThreadGroup *)systemThreadGroup;
+ (void)setSystemThreadGroup:(JavaLangThreadGroup *)systemThreadGroup;
+ (JavaLangThreadGroup *)mainThreadGroup;
+ (void)setMainThreadGroup:(JavaLangThreadGroup *)mainThreadGroup;
+ (long long int)threadOrdinalNum;
+ (long long int *)threadOrdinalNumRef;
+ (int)MAX_PRIORITY;
+ (int)MIN_PRIORITY;
+ (int)NORM_PRIORITY;
+ (NSString *)THREAD;
+ (NSString *)KEY_PREFIX;
+ (NSString *)JAVA_THREAD;
+ (NSString *)TARGET;
+ (NSString *)THREADGROUP;
+ (NSString *)THREAD_ID;
- (id)init;
- (id)initWithJavaLangRunnable:(id<JavaLangRunnable>)runnable;
- (id)initWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
                  withNSString:(NSString *)threadName;
- (id)initWithNSString:(NSString *)threadName;
- (id)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)group
             withJavaLangRunnable:(id<JavaLangRunnable>)runnable;
- (id)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)group
             withJavaLangRunnable:(id<JavaLangRunnable>)runnable
                     withNSString:(NSString *)threadName
                      withLongInt:(long long int)stack;
- (id)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)group
             withJavaLangRunnable:(id<JavaLangRunnable>)runnable
                     withNSString:(NSString *)threadName;
- (id)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)group
                     withNSString:(NSString *)threadName;
- (id)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)group
                     withNSString:(NSString *)threadName
                         withBOOL:(BOOL)createThread;
- (void)createWithJavaLangThreadGroup:(JavaLangThreadGroup *)group
                 withJavaLangRunnable:(id<JavaLangRunnable>)target
                         withNSString:(NSString *)name
                          withLongInt:(long long int)stack
                             withBOOL:(BOOL)createThread;
+ (void)initializeThreadClass OBJC_METHOD_FAMILY_NONE;
+ (JavaLangThread *)currentThread;
- (void)start;
- (void)run;
- (BOOL)isDaemon;
- (void)setDaemonWithBOOL:(BOOL)isDaemon;
- (long long int)getId;
- (NSString *)getName;
- (void)setNameWithNSString:(NSString *)name;
- (int)getPriority;
- (void)setPriorityWithInt:(int)priority;
- (void)setPriority0WithInt:(int)priority;
- (JavaLangThread_StateEnum *)getState;
- (JavaLangThreadGroup *)getThreadGroup;
- (void)interrupt;
+ (BOOL)interrupted;
- (BOOL)isInterrupted;
- (void)join;
- (void)joinWithLongInt:(long long int)millis;
- (void)joinWithLongInt:(long long int)millis
                withInt:(int)nanos;
- (void)join0WithLongInt:(long long int)millis
                 withInt:(int)pollInterval;
- (BOOL)isAlive;
- (void)checkAccess;
+ (void)sleepWithLongInt:(long long int)millis;
+ (void)sleepWithLongInt:(long long int)millis
                 withInt:(int)nanos;
+ (void)yield;
- (void)yield0;
+ (long long int)getNextThreadId;
- (NSString *)description;
@end

typedef enum {
  JavaLangThread_State_NEW = 0,
  JavaLangThread_State_RUNNABLE = 1,
  JavaLangThread_State_BLOCKED = 2,
  JavaLangThread_State_WAITING = 3,
  JavaLangThread_State_TIMED_WAITING = 4,
  JavaLangThread_State_TERMINATED = 5,
} JavaLangThread_State;

@interface JavaLangThread_StateEnum : JavaLangEnum < NSCopying > {
}
+ (JavaLangThread_StateEnum *)NEW;
+ (JavaLangThread_StateEnum *)RUNNABLE;
+ (JavaLangThread_StateEnum *)BLOCKED;
+ (JavaLangThread_StateEnum *)WAITING;
+ (JavaLangThread_StateEnum *)TIMED_WAITING;
+ (JavaLangThread_StateEnum *)TERMINATED;
+ (IOSObjectArray *)values;
+ (JavaLangThread_StateEnum *)valueOfWithNSString:(NSString *)name;
- (id)copyWithZone:(NSZone *)zone;
- (id)initWithNSString:(NSString *)name withInt:(int)ordinal;
@end

@protocol JavaLangThread_UncaughtExceptionHandler < NSObject, JavaObject >
- (void)uncaughtExceptionWithJavaLangThread:(JavaLangThread *)t
                      withJavaLangThrowable:(JavaLangThrowable *)e;
@end

#endif // _JavaLangThread_H_
