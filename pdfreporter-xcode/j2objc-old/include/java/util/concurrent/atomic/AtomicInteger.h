//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/util/concurrent/atomic/AtomicInteger.java
//
//  Created by tball on 7/15/13.
//

#ifndef _JavaUtilConcurrentAtomicAtomicInteger_H_
#define _JavaUtilConcurrentAtomicAtomicInteger_H_

#import "JreEmulation.h"
#include "java/io/Serializable.h"

@interface JavaUtilConcurrentAtomicAtomicInteger : NSNumber < JavaIoSerializable > {
 @public
  int value_;
}

@property (nonatomic, assign) int value;

- (id)initWithInt:(int)initialValue;
- (id)init;
- (int)get;
- (void)setWithInt:(int)newValue;
- (void)lazySetWithInt:(int)newValue;
- (int)getAndSetWithInt:(int)newValue;
- (BOOL)compareAndSetWithInt:(int)expect
                     withInt:(int)update;
- (int)getAndIncrement;
- (int)getAndDecrement;
- (int)getAndAddWithInt:(int)delta;
- (int)incrementAndGet;
- (int)decrementAndGet;
- (int)addAndGetWithInt:(int)delta;
- (NSString *)description;
- (int)intValue;
- (long long int)longValue;
- (float)floatValue;
- (double)doubleValue;
@end

#endif // _JavaUtilConcurrentAtomicAtomicInteger_H_
