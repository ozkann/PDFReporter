//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/util/concurrent/ForwardingListeningExecutorService.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_RESTRICT
#define ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_RESTRICT
#if !defined (_ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_) && (ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_INCLUDE)
#define _ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_

@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;

#define ComGoogleCommonUtilConcurrentForwardingExecutorService_RESTRICT 1
#define ComGoogleCommonUtilConcurrentForwardingExecutorService_INCLUDE 1
#include "com/google/common/util/concurrent/ForwardingExecutorService.h"

#define ComGoogleCommonUtilConcurrentListeningExecutorService_RESTRICT 1
#define ComGoogleCommonUtilConcurrentListeningExecutorService_INCLUDE 1
#include "com/google/common/util/concurrent/ListeningExecutorService.h"


@interface ComGoogleCommonUtilConcurrentForwardingListeningExecutorService : ComGoogleCommonUtilConcurrentForwardingExecutorService < ComGoogleCommonUtilConcurrentListeningExecutorService > {
}

- (instancetype)init;

- (id<ComGoogleCommonUtilConcurrentListeningExecutorService>)delegate;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                                         withId:(id)result;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingListeningExecutorService)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingListeningExecutorService)
