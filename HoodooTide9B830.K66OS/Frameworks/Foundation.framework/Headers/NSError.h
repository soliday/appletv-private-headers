/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSString, NSDictionary;

@interface NSError : NSObject <NSCopying, NSCoding> {
@private
	void *_reserved;	// 4 = 0x4
	int _code;	// 8 = 0x8
	NSString *_domain;	// 12 = 0xc
	NSDictionary *_userInfo;	// 16 = 0x10
}
@property(readonly, assign) int code;	// G=0x31585115; converted property
@property(readonly, retain) NSString *domain;	// G=0x315a4cd1; converted property
@property(readonly, retain) NSDictionary *userInfo;	// G=0x315b1369; converted property
+ (void)_registerBuiltInFormatters;	// 0x315d2669
+ (void)_registerFormatter:(/*function-pointer*/ void *)formatter forErrorKey:(id)errorKey parameters:(const char *)parameters;	// 0x315d2ac5
+ (void)_web_addErrorsWithCodesAndDescriptions:(id)codesAndDescriptions inDomain:(id)domain;	// 0x3161a6fd
+ (id)_web_errorWithDomain:(id)domain code:(int)code URL:(id)url;	// 0x315b5dd1
+ (id)_web_errorWithDomain:(id)domain code:(int)code failingURL:(id)url;	// 0x3161a795
+ (id)errorWithDomain:(id)domain code:(int)code userInfo:(id)info;	// 0x3156be61
- (id)initWithCoder:(id)coder;	// 0x315d2265
- (id)initWithDomain:(id)domain code:(int)code userInfo:(id)info;	// 0x3156bea9
- (unsigned long)_cfTypeID;	// 0x315d2395
- (id)_cocoaErrorString:(id)string;	// 0x315d2fc5
- (id)_cocoaErrorString:(id)string fromBundle:(id)bundle tableName:(id)name;	// 0x315d2d3d
- (id)_cocoaErrorStringWithKind:(id)kind;	// 0x315d1d69
- (id)_cocoaErrorStringWithKind:(id)kind variant:(id)variant;	// 0x315d1c99
- (int)_collectApplicableUserInfoFormatters:(timespec **)formatters max:(int)max;	// 0x315d2b99
- (id)_formatCocoaErrorString:(id)string parameters:(const char *)parameters applicableFormatters:(timespec **)formatters count:(int)count;	// 0x315d2c41
- (CFStringRef)_retainedUserInfoCallBackForKey:(id)key;	// 0x315d1eb1
- (BOOL)_web_errorIsInDomain:(id)domain;	// 0x315b1379
- (id)_web_failingURL;	// 0x3161a9fd
- (id)_web_initWithDomain:(id)domain code:(int)code failingURL:(id)url;	// 0x3161a7dd
- (id)_web_initWithDomain_nowarn:(id)domain_nowarn code:(int)code URL:(id)url;	// 0x315b5e19
- (id)_web_localizedDescription;	// 0x3161a95d
// converted property getter: - (int)code;	// 0x31585115
- (id)copyWithZone:(NSZone *)zone;	// 0x315b6099
- (void)dealloc;	// 0x3156dcb1
- (id)description;	// 0x315d213d
// converted property getter: - (id)domain;	// 0x315a4cd1
- (void)encodeWithCoder:(id)coder;	// 0x315d2169
- (void)finalize;	// 0x315d1c6d
- (id)helpAnchor;	// 0x315d2109
- (id)localizedDescription;	// 0x315b1cd9
- (id)localizedFailureReason;	// 0x315d1f91
- (id)localizedRecoveryOptions;	// 0x315d2081
- (id)localizedRecoverySuggestion;	// 0x315d2009
- (id)recoveryAttempter;	// 0x315d20d5
// converted property getter: - (id)userInfo;	// 0x315b1369
@end

