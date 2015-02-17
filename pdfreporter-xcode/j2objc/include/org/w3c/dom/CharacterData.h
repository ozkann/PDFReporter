//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/CharacterData.java
//

#ifndef _OrgW3cDomCharacterData_H_
#define _OrgW3cDomCharacterData_H_

#include "J2ObjC_header.h"
#include "org/w3c/dom/Node.h"

@protocol OrgW3cDomCharacterData < OrgW3cDomNode, NSObject, JavaObject >
- (NSString *)getData;

- (void)setDataWithNSString:(NSString *)data;

- (jint)getLength;

- (NSString *)substringDataWithInt:(jint)offset
                           withInt:(jint)count;

- (void)appendDataWithNSString:(NSString *)arg;

- (void)insertDataWithInt:(jint)offset
             withNSString:(NSString *)arg;

- (void)deleteDataWithInt:(jint)offset
                  withInt:(jint)count;

- (void)replaceDataWithInt:(jint)offset
                   withInt:(jint)count
              withNSString:(NSString *)arg;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomCharacterData)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomCharacterData)

#endif // _OrgW3cDomCharacterData_H_
