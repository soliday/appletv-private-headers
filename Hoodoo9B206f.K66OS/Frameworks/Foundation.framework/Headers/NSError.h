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
@property(readonly, assign) int code;	// G=0x31d05115; converted property
@property(readonly, retain) NSString *domain;	// G=0x31d24cd1; converted property
@property(readonly, retain) NSDictionary *userInfo;	// G=0x31d31369; converted property
+ (void)_registerBuiltInFormatters;	// 0x31d52669
+ (void)_registerFormatter:(/*function-pointer*/ void *)formatter forErrorKey:(id)errorKey parameters:(const char *)parameters;	// 0x31d52ac5
+ (void)_web_addErrorsWithCodesAndDescriptions:(id)codesAndDescriptions inDomain:(id)domain;	// 0x31d9a6fd
+ (id)_web_errorWithDomain:(id)domain code:(int)code URL:(id)url;	// 0x31d35dd1
+ (id)_web_errorWithDomain:(id)domain code:(int)code failingURL:(id)url;	// 0x31d9a795
+ (id)errorWithDomain:(id)domain code:(int)code userInfo:(id)info;	// 0x31cebe61
- (id)initWithCoder:(id)coder;	// 0x31d52265
- (id)initWithDomain:(id)domain code:(int)code userInfo:(id)info;	// 0x31cebea9
- (unsigned long)_cfTypeID;	// 0x31d52395
- (id)_cocoaErrorString:(id)string;	// 0x31d52fc5
- (id)_cocoaErrorString:(id)string fromBundle:(id)bundle tableName:(id)name;	// 0x31d52d3d
- (id)_cocoaErrorStringWithKind:(id)kind;	// 0x31d51d69
- (id)_cocoaErrorStringWithKind:(id)kind variant:(id)variant;	// 0x31d51c99
- (int)_collectApplicableUserInfoFormatters:(timespec **)formatters max:(int)max;	// 0x31d52b99
- (id)_formatCocoaErrorString:(id)string parameters:(const char *)parameters applicableFormatters:(timespec **)formatters count:(int)count;	// 0x31d52c41
- (CFStringRef)_retainedUserInfoCallBackForKey:(id)key;	// 0x31d51eb1
- (BOOL)_web_errorIsInDomain:(id)domain;	// 0x31d31379
- (id)_web_failingURL;	// 0x31d9a9fd
- (id)_web_initWithDomain:(id)domain code:(int)code failingURL:(id)url;	// 0x31d9a7dd
- (id)_web_initWithDomain_nowarn:(id)domain_nowarn code:(int)code URL:(id)url;	// 0x31d35e19
- (id)_web_localizedDescription;	// 0x31d9a95d
// converted property getter: - (int)code;	// 0x31d05115
- (id)copyWithZone:(NSZone *)zone;	// 0x31d36099
- (void)dealloc;	// 0x31cedcb1
- (id)description;	// 0x31d5213d
// converted property getter: - (id)domain;	// 0x31d24cd1
- (void)encodeWithCoder:(id)coder;	// 0x31d52169
- (void)finalize;	// 0x31d51c6d
- (id)helpAnchor;	// 0x31d52109
- (id)localizedDescription;	// 0x31d31cd9
- (id)localizedFailureReason;	// 0x31d51f91
- (id)localizedRecoveryOptions;	// 0x31d52081
- (id)localizedRecoverySuggestion;	// 0x31d52009
- (id)recoveryAttempter;	// 0x31d520d5
// converted property getter: - (id)userInfo;	// 0x31d31369
@end

