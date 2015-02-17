//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/CallableStatement.java
//

#ifndef _JavaSqlCallableStatement_H_
#define _JavaSqlCallableStatement_H_

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaIoReader;
@class JavaMathBigDecimal;
@class JavaNetURL;
@class JavaSqlDate;
@class JavaSqlTime;
@class JavaSqlTimestamp;
@class JavaUtilCalendar;
@protocol JavaSqlArray;
@protocol JavaSqlBlob;
@protocol JavaSqlClob;
@protocol JavaSqlNClob;
@protocol JavaSqlRef;
@protocol JavaSqlRowId;
@protocol JavaSqlSQLXML;
@protocol JavaUtilMap;

#include "J2ObjC_header.h"
#include "java/sql/PreparedStatement.h"

@protocol JavaSqlCallableStatement < JavaSqlPreparedStatement, NSObject, JavaObject >
- (id<JavaSqlArray>)getArrayWithInt:(jint)parameterIndex;

- (id<JavaSqlArray>)getArrayWithNSString:(NSString *)parameterName;

- (JavaMathBigDecimal *)getBigDecimalWithInt:(jint)parameterIndex;

- (JavaMathBigDecimal *)getBigDecimalWithInt:(jint)parameterIndex
                                     withInt:(jint)scale_;

- (JavaMathBigDecimal *)getBigDecimalWithNSString:(NSString *)parameterName;

- (id<JavaSqlBlob>)getBlobWithInt:(jint)parameterIndex;

- (id<JavaSqlBlob>)getBlobWithNSString:(NSString *)parameterName;

- (jboolean)getBooleanWithInt:(jint)parameterIndex;

- (jboolean)getBooleanWithNSString:(NSString *)parameterName;

- (jbyte)getByteWithInt:(jint)parameterIndex;

- (jbyte)getByteWithNSString:(NSString *)parameterName;

- (IOSByteArray *)getBytesWithInt:(jint)parameterIndex;

- (IOSByteArray *)getBytesWithNSString:(NSString *)parameterName;

- (id<JavaSqlClob>)getClobWithInt:(jint)parameterIndex;

- (id<JavaSqlClob>)getClobWithNSString:(NSString *)parameterName;

- (JavaSqlDate *)getDateWithInt:(jint)parameterIndex;

- (JavaSqlDate *)getDateWithInt:(jint)parameterIndex
           withJavaUtilCalendar:(JavaUtilCalendar *)cal;

- (JavaSqlDate *)getDateWithNSString:(NSString *)parameterName;

- (JavaSqlDate *)getDateWithNSString:(NSString *)parameterName
                withJavaUtilCalendar:(JavaUtilCalendar *)cal;

- (jdouble)getDoubleWithInt:(jint)parameterIndex;

- (jdouble)getDoubleWithNSString:(NSString *)parameterName;

- (jfloat)getFloatWithInt:(jint)parameterIndex;

- (jfloat)getFloatWithNSString:(NSString *)parameterName;

- (jint)getIntWithInt:(jint)parameterIndex;

- (jint)getIntWithNSString:(NSString *)parameterName;

- (jlong)getLongWithInt:(jint)parameterIndex;

- (jlong)getLongWithNSString:(NSString *)parameterName;

- (id)getObjectWithInt:(jint)parameterIndex;

- (id)getObjectWithInt:(jint)parameterIndex
       withJavaUtilMap:(id<JavaUtilMap>)map;

- (id)getObjectWithNSString:(NSString *)parameterName;

- (id)getObjectWithNSString:(NSString *)parameterName
            withJavaUtilMap:(id<JavaUtilMap>)map;

- (id<JavaSqlRef>)getRefWithInt:(jint)parameterIndex;

- (id<JavaSqlRef>)getRefWithNSString:(NSString *)parameterName;

- (jshort)getShortWithInt:(jint)parameterIndex;

- (jshort)getShortWithNSString:(NSString *)parameterName;

- (NSString *)getStringWithInt:(jint)parameterIndex;

- (NSString *)getStringWithNSString:(NSString *)parameterName;

- (JavaSqlTime *)getTimeWithInt:(jint)parameterIndex;

- (JavaSqlTime *)getTimeWithInt:(jint)parameterIndex
           withJavaUtilCalendar:(JavaUtilCalendar *)cal;

- (JavaSqlTime *)getTimeWithNSString:(NSString *)parameterName;

- (JavaSqlTime *)getTimeWithNSString:(NSString *)parameterName
                withJavaUtilCalendar:(JavaUtilCalendar *)cal;

- (JavaSqlTimestamp *)getTimestampWithInt:(jint)parameterIndex;

- (JavaSqlTimestamp *)getTimestampWithInt:(jint)parameterIndex
                     withJavaUtilCalendar:(JavaUtilCalendar *)cal;

- (JavaSqlTimestamp *)getTimestampWithNSString:(NSString *)parameterName;

- (JavaSqlTimestamp *)getTimestampWithNSString:(NSString *)parameterName
                          withJavaUtilCalendar:(JavaUtilCalendar *)cal;

- (JavaNetURL *)getURLWithInt:(jint)parameterIndex;

- (JavaNetURL *)getURLWithNSString:(NSString *)parameterName;

- (void)registerOutParameterWithInt:(jint)parameterIndex
                            withInt:(jint)sqlType;

- (void)registerOutParameterWithInt:(jint)parameterIndex
                            withInt:(jint)sqlType
                            withInt:(jint)scale_;

- (void)registerOutParameterWithInt:(jint)paramIndex
                            withInt:(jint)sqlType
                       withNSString:(NSString *)typeName;

- (void)registerOutParameterWithNSString:(NSString *)parameterName
                                 withInt:(jint)sqlType;

- (void)registerOutParameterWithNSString:(NSString *)parameterName
                                 withInt:(jint)sqlType
                                 withInt:(jint)scale_;

- (void)registerOutParameterWithNSString:(NSString *)parameterName
                                 withInt:(jint)sqlType
                            withNSString:(NSString *)typeName;

- (void)setAsciiStreamWithNSString:(NSString *)parameterName
             withJavaIoInputStream:(JavaIoInputStream *)theInputStream
                           withInt:(jint)length;

- (void)setBigDecimalWithNSString:(NSString *)parameterName
           withJavaMathBigDecimal:(JavaMathBigDecimal *)theBigDecimal;

- (void)setBinaryStreamWithNSString:(NSString *)parameterName
              withJavaIoInputStream:(JavaIoInputStream *)theInputStream
                            withInt:(jint)length;

- (void)setBooleanWithNSString:(NSString *)parameterName
                   withBoolean:(jboolean)theBoolean;

- (void)setByteWithNSString:(NSString *)parameterName
                   withByte:(jbyte)theByte;

- (void)setBytesWithNSString:(NSString *)parameterName
               withByteArray:(IOSByteArray *)theBytes;

- (void)setCharacterStreamWithNSString:(NSString *)parameterName
                      withJavaIoReader:(JavaIoReader *)reader
                               withInt:(jint)length;

- (void)setDateWithNSString:(NSString *)parameterName
            withJavaSqlDate:(JavaSqlDate *)theDate;

- (void)setDateWithNSString:(NSString *)parameterName
            withJavaSqlDate:(JavaSqlDate *)theDate
       withJavaUtilCalendar:(JavaUtilCalendar *)cal;

- (void)setDoubleWithNSString:(NSString *)parameterName
                   withDouble:(jdouble)theDouble;

- (void)setFloatWithNSString:(NSString *)parameterName
                   withFloat:(jfloat)theFloat;

- (void)setIntWithNSString:(NSString *)parameterName
                   withInt:(jint)theInt;

- (void)setLongWithNSString:(NSString *)parameterName
                   withLong:(jlong)theLong;

- (void)setNullWithNSString:(NSString *)parameterName
                    withInt:(jint)sqlType;

- (void)setNullWithNSString:(NSString *)parameterName
                    withInt:(jint)sqlType
               withNSString:(NSString *)typeName;

- (void)setObjectWithNSString:(NSString *)parameterName
                       withId:(id)theObject;

- (void)setObjectWithNSString:(NSString *)parameterName
                       withId:(id)theObject
                      withInt:(jint)targetSqlType;

- (void)setObjectWithNSString:(NSString *)parameterName
                       withId:(id)theObject
                      withInt:(jint)targetSqlType
                      withInt:(jint)scale_;

- (void)setShortWithNSString:(NSString *)parameterName
                   withShort:(jshort)theShort;

- (void)setStringWithNSString:(NSString *)parameterName
                 withNSString:(NSString *)theString;

- (void)setTimeWithNSString:(NSString *)parameterName
            withJavaSqlTime:(JavaSqlTime *)theTime;

- (void)setTimeWithNSString:(NSString *)parameterName
            withJavaSqlTime:(JavaSqlTime *)theTime
       withJavaUtilCalendar:(JavaUtilCalendar *)cal;

- (void)setTimestampWithNSString:(NSString *)parameterName
            withJavaSqlTimestamp:(JavaSqlTimestamp *)theTimestamp;

- (void)setTimestampWithNSString:(NSString *)parameterName
            withJavaSqlTimestamp:(JavaSqlTimestamp *)theTimestamp
            withJavaUtilCalendar:(JavaUtilCalendar *)cal;

- (void)setURLWithNSString:(NSString *)parameterName
            withJavaNetURL:(JavaNetURL *)theURL;

- (jboolean)wasNull;

- (id<JavaSqlRowId>)getRowIdWithInt:(jint)parameterIndex;

- (id<JavaSqlRowId>)getRowIdWithNSString:(NSString *)parameterName;

- (void)setRowIdWithNSString:(NSString *)parameterName
            withJavaSqlRowId:(id<JavaSqlRowId>)rowId;

- (void)setNStringWithNSString:(NSString *)parameterName
                  withNSString:(NSString *)string;

- (void)setNCharacterStreamWithNSString:(NSString *)parameterName
                       withJavaIoReader:(JavaIoReader *)reader
                               withLong:(jlong)length;

- (void)setNClobWithNSString:(NSString *)parameterName
            withJavaSqlNClob:(id<JavaSqlNClob>)nclob;

- (void)setClobWithNSString:(NSString *)parameterName
           withJavaIoReader:(JavaIoReader *)reader
                   withLong:(jlong)length;

- (void)setBlobWithNSString:(NSString *)parameterName
      withJavaIoInputStream:(JavaIoInputStream *)inputStream
                   withLong:(jlong)length;

- (void)setNClobWithNSString:(NSString *)parameterName
            withJavaIoReader:(JavaIoReader *)reader
                    withLong:(jlong)length;

- (id<JavaSqlNClob>)getNClobWithInt:(jint)parameterIndex;

- (id<JavaSqlNClob>)getNClobWithNSString:(NSString *)parameterName;

- (void)setSQLXMLWithNSString:(NSString *)parameterName
            withJavaSqlSQLXML:(id<JavaSqlSQLXML>)sqlXml;

- (id<JavaSqlSQLXML>)getSQLXMLWithInt:(jint)parameterIndex;

- (id<JavaSqlSQLXML>)getSQLXMLWithNSString:(NSString *)parameterName;

- (NSString *)getNStringWithInt:(jint)parameterIndex;

- (NSString *)getNStringWithNSString:(NSString *)parameterName;

- (JavaIoReader *)getNCharacterStreamWithInt:(jint)parameterIndex;

- (JavaIoReader *)getNCharacterStreamWithNSString:(NSString *)parameterName;

- (JavaIoReader *)getCharacterStreamWithInt:(jint)parameterIndex;

- (JavaIoReader *)getCharacterStreamWithNSString:(NSString *)parameterName;

- (void)setBlobWithNSString:(NSString *)parameterName
            withJavaSqlBlob:(id<JavaSqlBlob>)blob;

- (void)setClobWithNSString:(NSString *)parameterName
            withJavaSqlClob:(id<JavaSqlClob>)clob;

- (void)setAsciiStreamWithNSString:(NSString *)parameterName
             withJavaIoInputStream:(JavaIoInputStream *)x
                          withLong:(jlong)length;

- (void)setAsciiStreamWithNSString:(NSString *)parameterName
             withJavaIoInputStream:(JavaIoInputStream *)x;

- (void)setBinaryStreamWithNSString:(NSString *)parameterName
              withJavaIoInputStream:(JavaIoInputStream *)x
                           withLong:(jlong)length;

- (void)setBinaryStreamWithNSString:(NSString *)parameterName
              withJavaIoInputStream:(JavaIoInputStream *)x;

- (void)setCharacterStreamWithNSString:(NSString *)parameterName
                      withJavaIoReader:(JavaIoReader *)reader
                              withLong:(jlong)length;

- (void)setCharacterStreamWithNSString:(NSString *)parameterName
                      withJavaIoReader:(JavaIoReader *)reader;

- (void)setNCharacterStreamWithNSString:(NSString *)parameterName
                       withJavaIoReader:(JavaIoReader *)value;

- (void)setClobWithNSString:(NSString *)parameterName
           withJavaIoReader:(JavaIoReader *)reader;

- (void)setBlobWithNSString:(NSString *)parameterName
      withJavaIoInputStream:(JavaIoInputStream *)inputStream;

- (void)setNClobWithNSString:(NSString *)parameterName
            withJavaIoReader:(JavaIoReader *)reader;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlCallableStatement)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlCallableStatement)

#endif // _JavaSqlCallableStatement_H_
