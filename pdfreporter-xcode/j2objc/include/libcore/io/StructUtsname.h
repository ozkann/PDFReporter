//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/StructUtsname.java
//

#ifndef _LibcoreIoStructUtsname_H_
#define _LibcoreIoStructUtsname_H_

#include "J2ObjC_header.h"

@interface LibcoreIoStructUtsname : NSObject {
 @public
  NSString *sysname_;
  NSString *nodename_;
  NSString *release__;
  NSString *version__;
  NSString *machine_;
}

- (instancetype)initWithNSString:(NSString *)sysname
                    withNSString:(NSString *)nodename
                    withNSString:(NSString *)release_
                    withNSString:(NSString *)version_
                    withNSString:(NSString *)machine;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreIoStructUtsname)

J2OBJC_FIELD_SETTER(LibcoreIoStructUtsname, sysname_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIoStructUtsname, nodename_, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIoStructUtsname, release__, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIoStructUtsname, version__, NSString *)
J2OBJC_FIELD_SETTER(LibcoreIoStructUtsname, machine_, NSString *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIoStructUtsname)

#endif // _LibcoreIoStructUtsname_H_
