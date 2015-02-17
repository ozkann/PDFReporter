//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/io/BufferedReader.java
//
//  Created by tball on 7/15/13.
//

#ifndef _JavaIoBufferedReader_H_
#define _JavaIoBufferedReader_H_

@class IOSCharArray;

#import "JreEmulation.h"
#include "java/io/Reader.h"

@interface JavaIoBufferedReader : JavaIoReader {
 @public
  JavaIoReader *in_;
  IOSCharArray *buf_;
  int pos_;
  int end_;
  int mark__;
  int markLimit_;
}

@property (nonatomic, retain) JavaIoReader *in;
@property (nonatomic, retain) IOSCharArray *buf;
@property (nonatomic, assign) int pos;
@property (nonatomic, assign) int end;
@property (nonatomic, assign) int mark_;
@property (nonatomic, assign) int markLimit;

- (id)initWithJavaIoReader:(JavaIoReader *)inArg;
- (id)initWithJavaIoReader:(JavaIoReader *)inArg
                   withInt:(int)size;
- (void)close;
- (int)fillBuf;
- (BOOL)isClosed;
- (void)markWithInt:(int)markLimit;
- (BOOL)markSupported;
- (int)read;
- (int)readWithCharArray:(IOSCharArray *)buffer
                 withInt:(int)offset
                 withInt:(int)length;
- (void)chompNewline;
- (NSString *)readLine;
- (BOOL)ready;
- (void)reset;
- (long long int)skipWithLongInt:(long long int)amount;
@end

#endif // _JavaIoBufferedReader_H_
