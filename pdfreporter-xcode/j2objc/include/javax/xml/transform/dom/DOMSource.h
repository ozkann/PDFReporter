//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/dom/DOMSource.java
//

#ifndef _JavaxXmlTransformDomDOMSource_H_
#define _JavaxXmlTransformDomDOMSource_H_

@protocol OrgW3cDomNode;

#include "J2ObjC_header.h"
#include "javax/xml/transform/Source.h"

@interface JavaxXmlTransformDomDOMSource : NSObject < JavaxXmlTransformSource > {
}

- (instancetype)init;

- (instancetype)initWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

- (instancetype)initWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
                         withNSString:(NSString *)systemID;

- (void)setNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

- (id<OrgW3cDomNode>)getNode;

- (void)setSystemIdWithNSString:(NSString *)systemID;

- (NSString *)getSystemId;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformDomDOMSource)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT NSString *JavaxXmlTransformDomDOMSource_FEATURE_;
J2OBJC_STATIC_FIELD_GETTER(JavaxXmlTransformDomDOMSource, FEATURE_, NSString *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformDomDOMSource)

#endif // _JavaxXmlTransformDomDOMSource_H_
