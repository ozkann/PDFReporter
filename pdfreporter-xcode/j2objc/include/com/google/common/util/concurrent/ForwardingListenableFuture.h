//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/util/concurrent/ForwardingListenableFuture.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonUtilConcurrentForwardingListenableFuture_RESTRICT
#define ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentForwardingListenableFuture_RESTRICT
#if ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture_INCLUDE
#define ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonUtilConcurrentForwardingListenableFuture_) && (ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE_ALL || ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE)
#define _ComGoogleCommonUtilConcurrentForwardingListenableFuture_

@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentExecutor;

#define ComGoogleCommonUtilConcurrentForwardingFuture_RESTRICT 1
#define ComGoogleCommonUtilConcurrentForwardingFuture_INCLUDE 1
#include "com/google/common/util/concurrent/ForwardingFuture.h"

#define ComGoogleCommonUtilConcurrentListenableFuture_RESTRICT 1
#define ComGoogleCommonUtilConcurrentListenableFuture_INCLUDE 1
#include "com/google/common/util/concurrent/ListenableFuture.h"


@interface ComGoogleCommonUtilConcurrentForwardingListenableFuture : ComGoogleCommonUtilConcurrentForwardingFuture < ComGoogleCommonUtilConcurrentListenableFuture > {
}

- (instancetype)init;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)delegate;

- (void)addListenerWithJavaLangRunnable:(id<JavaLangRunnable>)listener
         withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)exec;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingListenableFuture)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingListenableFuture)
#if !defined (_ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture_) && (ComGoogleCommonUtilConcurrentForwardingListenableFuture_INCLUDE_ALL || ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture_INCLUDE)
#define _ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture_

@protocol ComGoogleCommonUtilConcurrentListenableFuture;


@interface ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture : ComGoogleCommonUtilConcurrentForwardingListenableFuture {
}

- (instancetype)initWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)delegate;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture)
