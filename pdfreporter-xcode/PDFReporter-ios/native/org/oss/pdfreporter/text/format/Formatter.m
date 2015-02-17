//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/jasperawtios/src/Formatter.java
//
//  Created by fr3e on 7/30/13.
//

#include "Chunk.h"
#include "Formatter.h"
#include "IOSObjectArray.h"
#include "java/lang/Integer.h"
#include "java/lang/Long.h"
#include "java/lang/Math.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/StringBuilder.h"
#include "java/util/ArrayList.h"
#include "java/util/Calendar.h"
#include "java/util/Date.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"

@implementation Formatter

+ (NSString *)formatWithNSString:(NSString *)format
               withNSObjectArray:(IOSObjectArray *)params {
  JavaLangStringBuilder *sb = [[JavaLangStringBuilder alloc] init];
  id<JavaUtilList> chunkList = [Formatter splitWithNSString:format];
  {
    id<JavaUtilIterator> iter__ = [((id<JavaUtilList>) nil_chk(chunkList)) iterator];
    while ([((id<JavaUtilIterator>) nil_chk(iter__)) hasNext]) {
      Chunk *chunk = [((id<JavaUtilIterator>) nil_chk(iter__)) next];
      switch (((Chunk *) nil_chk(chunk)).mode) {
        case Formatter_TEXT_MODE:
        {
          (void) [((JavaLangStringBuilder *) nil_chk(sb)) appendWithNSString:((Chunk *) nil_chk(chunk)).val];
          break;
        }
        case Formatter_FORMAT_MODE:
        {
          (void) [((JavaLangStringBuilder *) nil_chk(sb)) appendWithNSString:[NSString stringWithFormat:((Chunk *) nil_chk(chunk)).val , [((IOSObjectArray *) nil_chk(params)) objectAtIndex:((Chunk *) nil_chk(chunk)).param], nil]];
          break;
        }
        case Formatter_CUSTOM_MODE:
        {
          (void) [((JavaLangStringBuilder *) nil_chk(sb)) appendWithNSString:[Formatter parseDateWithNSString:((Chunk *) nil_chk(chunk)).val withId:[((IOSObjectArray *) nil_chk(params)) objectAtIndex:((Chunk *) nil_chk(chunk)).param]]];
          break;
        }
      }
    }
  }
  return [((JavaLangStringBuilder *) nil_chk(sb)) description];
}

+ (NSString *)parseDateWithNSString:(NSString *)value
                             withId:(id)param {
  JavaUtilCalendar *cal;
  BOOL leftJustify = NO;
  BOOL upperCase = NO;
  int width = -1;
  if ([param isKindOfClass:[JavaUtilDate class]]) {
    cal = [JavaUtilCalendar getInstance];
    [((JavaUtilCalendar *) nil_chk(cal)) setTimeWithJavaUtilDate:(JavaUtilDate *) param];
  }
  else if ([param isKindOfClass:[JavaUtilCalendar class]]) {
    cal = (JavaUtilCalendar *) param;
  }
  else if ([param isKindOfClass:[JavaLangLong class]]) {
    cal = [JavaUtilCalendar getInstance];
    [((JavaUtilCalendar *) nil_chk(cal)) setTimeInMillisWithLong:[(JavaLangLong *) param longLongValue]];
  }
  else {
    @throw [[JavaLangRuntimeException alloc] initWithNSString:@"%t parameters must be a java.util.Date or a java.util.Calendar"];
  }
  int lastInx = 0;
  int mode = Formatter_FLAG_DATE_MODE;
  unichar conversion = 0;
  for (int inx = 1; inx < [((NSString *) nil_chk(value)) length]; inx++) {
    unichar ch = [((NSString *) nil_chk(value)) charAtWithInt:inx];
    switch (mode) {
      case Formatter_FLAG_DATE_MODE:
      {
        switch (ch) {
          case '#':
          case '+':
          case ' ':
          case '0':
          case ',':
          case '(':
          {
            @throw [[JavaLangRuntimeException alloc] initWithNSString:@"t conversion supports only '-' flag"];
          }
          case '-':
          {
            leftJustify = YES;
            break;
          }
          default:
          {
            mode = Formatter_WIDTH_DATE_MODE;
            lastInx = inx;
            inx--;
            break;
          }
        }
        break;
      }
      case Formatter_WIDTH_DATE_MODE:
      {
        if (ch == 't' || ch == 'T') {
          if (ch == 'T') upperCase = YES;
          NSString *chunk = [((NSString *) nil_chk(value)) substring:lastInx endIndex:inx];
          if ([((NSString *) nil_chk(chunk)) length] > 0) {
            width = [[JavaLangInteger valueOfWithNSString:chunk] intValue];
          }
          mode = Formatter_FORMAT_DATE_MODE;
        }
        break;
      }
      case Formatter_FORMAT_DATE_MODE:
      {
        conversion = ch;
        break;
      }
    }
  }
  NSString *result = @"Not supported, Yet!";
  switch (conversion) {
    case 'H':
    {
      result = [NSString stringWithFormat:@"%02d" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_HOUR_OF_DAY], nil];
      break;
    }
    case 'I':
    {
      result = [NSString stringWithFormat:@"%02d" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_HOUR], nil];
      break;
    }
    case 'k':
    {
      result = [NSString stringWithFormat:@"%d" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_HOUR_OF_DAY], nil];
      break;
    }
    case 'l':
    {
      result = [NSString stringWithFormat:@"%d" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_HOUR], nil];
      break;
    }
    case 'M':
    {
      result = [NSString stringWithFormat:@"%02d" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_MINUTE], nil];
      break;
    }
    case 'S':
    {
      result = [NSString stringWithFormat:@"%02d" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_SECOND], nil];
      break;
    }
    case 'L':
    {
      result = [NSString stringWithFormat:@"%03d" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_MILLISECOND], nil];
      break;
    }
    case 'N':
    {
      result = @"000000000";
      break;
    }
    case 'p':
    {
      if ([((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_AM_PM] == JavaUtilCalendar_AM) result = @"am";
      else result = @"pm";
      break;
    }
    case 'z':
    {
      unichar sign = '+';
      int val = [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_ZONE_OFFSET];
      if (val < 0) {
        sign = '-';
        val = [JavaLangMath absWithInt:val];
      }
      val /= 1000 * 60;
      int h = val / 60;
      int m = val % 60;
      result = [NSString stringWithFormat:@"%C%02d%02d" , sign, h, m, nil];
      break;
    }
    case 'Z':
    {
      break;
    }
    case 's':
    {
      result = [NSString stringWithFormat:@"%lld" , [((JavaUtilCalendar *) nil_chk(cal)) getTimeInMillis] / 1000, nil];
      break;
    }
    case 'Q':
    {
      result = [NSString stringWithFormat:@"%lld" , [((JavaUtilCalendar *) nil_chk(cal)) getTimeInMillis], nil];
      break;
    }
    case 'B':
    {
    }
    case 'h':
    case 'b':
    {
    }
    case 'A':
    {
    }
    case 'a':
    {
    }
    case 'C':
    {
      result = [NSString stringWithFormat:@"%02d" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_YEAR] / 100, nil];
      break;
    }
    case 'Y':
    {
      result = [NSString stringWithFormat:@"%04d" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_YEAR], nil];
      break;
    }
    case 'y':
    {
      result = [NSString stringWithFormat:@"%02d" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_YEAR] % 100, nil];
      break;
    }
    case 'j':
    {
      result = [NSString stringWithFormat:@"%03d" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_DAY_OF_YEAR], nil];
      break;
    }
    case 'm':
    {
      result = [NSString stringWithFormat:@"%02d" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_MONTH] + 1, nil];
      break;
    }
    case 'd':
    {
      result = [NSString stringWithFormat:@"%02d" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_DATE], nil];
      break;
    }
    case 'e':
    {
      result = [NSString stringWithFormat:@"%d" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_DATE], nil];
      break;
    }
    case 'R':
    {
      result = [NSString stringWithFormat:@"%02d:%02d" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_HOUR_OF_DAY], [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_MINUTE], nil];
      break;
    }
    case 'T':
    {
      result = [NSString stringWithFormat:@"%02d:%02d:%02d" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_HOUR_OF_DAY], [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_MINUTE], [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_SECOND], nil];
      break;
    }
    case 'r':
    {
      NSString *ampm = ([((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_AM_PM] == JavaUtilCalendar_AM) ? @"AM" : @"PM";
      result = [NSString stringWithFormat:@"%02d:%02d:%02d %@" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_HOUR], [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_MINUTE], [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_SECOND], ampm, nil];
      break;
    }
    case 'D':
    {
      result = [NSString stringWithFormat:@"%02d/%02d/%02d" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_MONTH] + 1, [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_DAY_OF_MONTH], [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_YEAR] % 100, nil];
      break;
    }
    case 'F':
    {
      result = [NSString stringWithFormat:@"%04d-%02d-%02d" , [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_YEAR], [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_MONTH] + 1, [((JavaUtilCalendar *) nil_chk(cal)) getWithInt:JavaUtilCalendar_DAY_OF_MONTH], nil];
      break;
    }
    case 'c':
    {
    }
  }
  if (upperCase) result = [((NSString *) nil_chk(result)) uppercaseString];
  if ([((NSString *) nil_chk(result)) length] < width) {
    int spaceLen = width - [((NSString *) nil_chk(result)) length];
    for (int i = 0; i < spaceLen; i++) {
      if (leftJustify) result = [NSString stringWithFormat:@"%@ ", result];
      else result = [NSString stringWithFormat:@" %@", result];
    }
  }
  return result;
}

+ (id<JavaUtilList>)splitWithNSString:(NSString *)value {
  int lastInx = 0;
  int mode = Formatter_TEXT_MODE;
  int paramCounter = 0;
  id<JavaUtilList> chunkList = [[JavaUtilArrayList alloc] init];
  for (int inx = 0; inx < [((NSString *) nil_chk(value)) length]; inx++) {
    unichar ch = [((NSString *) nil_chk(value)) charAtWithInt:inx];
    switch (mode) {
      case Formatter_TEXT_MODE:
      {
        if (ch == '%') {
          NSString *chunk = [((NSString *) nil_chk(value)) substring:lastInx endIndex:inx];
          if ([((NSString *) nil_chk(chunk)) length] > 0) {
            [((id<JavaUtilList>) nil_chk(chunkList)) addWithId:[[Chunk alloc] initWithNSString:chunk withInt:Formatter_TEXT_MODE]];
          }
          lastInx = inx;
          mode = Formatter_FORMAT_MODE;
        }
        break;
      }
      case Formatter_FORMAT_MODE:
      {
        switch (ch) {
          case 'b':
          case 'B':
          case 'h':
          case 'H':
          case 's':
          case 'S':
          case 'c':
          case 'C':
          case 'd':
          case 'o':
          case 'x':
          case 'X':
          case 'e':
          case 'E':
          case 'f':
          case 'g':
          case 'G':
          case 'a':
          case 'A':
          case 'n':
          case '%':
          {
            NSString *chunk = [((NSString *) nil_chk(value)) substring:lastInx endIndex:inx + 1];
            if ([((NSString *) nil_chk(chunk)) length] > 0) {
              int param;
              int pos$ = [((NSString *) nil_chk(chunk)) indexOf:'$'];
              if (pos$ == -1) {
                param = paramCounter++;
              }
              else {
                param = [[JavaLangInteger valueOfWithNSString:[((NSString *) nil_chk(chunk)) substring:1 endIndex:pos$]] intValue] - 1;
                chunk = [NSString stringWithFormat:@"%%%@", [((NSString *) nil_chk(chunk)) substring:pos$ + 1 endIndex:[((NSString *) nil_chk(chunk)) length]]];
              }
              [((id<JavaUtilList>) nil_chk(chunkList)) addWithId:[[Chunk alloc] initWithNSString:chunk withInt:Formatter_FORMAT_MODE withInt:param]];
            }
            lastInx = inx + 1;
            mode = Formatter_TEXT_MODE;
            break;
          }
          case 't':
          case 'T':
          {
            inx++;
            NSString *chunk = [((NSString *) nil_chk(value)) substring:lastInx endIndex:inx + 1];
            if ([((NSString *) nil_chk(chunk)) length] > 0) {
              int param;
              int pos$ = [((NSString *) nil_chk(chunk)) indexOf:'$'];
              if (pos$ == -1) {
                param = paramCounter++;
              }
              else {
                param = [[JavaLangInteger valueOfWithNSString:[((NSString *) nil_chk(chunk)) substring:1 endIndex:pos$]] intValue] - 1;
                chunk = [NSString stringWithFormat:@"%%%@", [((NSString *) nil_chk(chunk)) substring:pos$ + 1 endIndex:[((NSString *) nil_chk(chunk)) length]]];
              }
              [((id<JavaUtilList>) nil_chk(chunkList)) addWithId:[[Chunk alloc] initWithNSString:chunk withInt:Formatter_CUSTOM_MODE withInt:param]];
            }
            lastInx = inx + 1;
            mode = Formatter_TEXT_MODE;
            break;
          }
        }
        break;
      }
    }
  }
  if (mode == Formatter_TEXT_MODE) {
    NSString *chunk = [((NSString *) nil_chk(value)) substring:lastInx endIndex:[((NSString *) nil_chk(value)) length]];
    if ([((NSString *) nil_chk(chunk)) length] > 0) {
      [((id<JavaUtilList>) nil_chk(chunkList)) addWithId:[[Chunk alloc] initWithNSString:chunk withInt:Formatter_TEXT_MODE]];
    }
  }
  return chunkList;
}

- (id)init {
  return [super init];
}

@end
