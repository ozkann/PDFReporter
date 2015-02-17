//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/util/concurrent/ListenableFuture.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonUtilConcurrentListenableFuture_RESTRICT
#define ComGoogleCommonUtilConcurrentListenableFuture_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentListenableFuture_RESTRICT
#if !defined (_ComGoogleCommonUtilConcurrentListenableFuture_) && (ComGoogleCommonUtilConcurrentListenableFuture_INCLUDE_ALL || ComGoogleCommonUtilConcurrentListenableFuture_INCLUDE)
#define _ComGoogleCommonUtilConcurrentListenableFuture_

@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentExecutor;

#define JavaUtilConcurrentFuture_RESTRICT 1
#define JavaUtilConcurrentFuture_INCLUDE 1
#include "java/util/concurrent/Future.h"


@protocol ComGoogleCommonUtilConcurrentListenableFuture < JavaUtilConcurrentFuture, NSObject, JavaObject >
- (void)addListenerWithJavaLangRunnable:(id<JavaLangRunnable>)listener
         withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentListenableFuture)
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentListenableFuture)
