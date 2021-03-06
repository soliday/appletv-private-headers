/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface NSError : NSObject <NSCopying, NSCoding> {
@private
	void *_reserved;	// 4 = 0x4
	int _code;	// 8 = 0x8
	NSString *_domain;	// 12 = 0xc
	NSDictionary *_userInfo;	// 16 = 0x10
}
@property(readonly, assign) int code;	// G=0x3244b809; converted property
@property(readonly, retain) NSString *domain;	// G=0x3244b7f9; converted property
@property(readonly, retain) NSDictionary *userInfo;	// G=0x3244b819; converted property
+ (void)_registerBuiltInFormatters;	// 0x32464499
+ (void)_registerFormatter:(/*function-pointer*/ void *)formatter forErrorKey:(id)errorKey parameters:(const char *)parameters;	// 0x32464ef9
+ (void)_web_addErrorsWithCodesAndDescriptions:(id)codesAndDescriptions inDomain:(id)domain;	// 0x324aa00d
+ (id)_web_errorWithDomain:(id)domain code:(int)code URL:(id)url;	// 0x324a9f85
+ (id)_web_errorWithDomain:(id)domain code:(int)code failingURL:(id)url;	// 0x324a9fc9
+ (id)errorWithDomain:(id)domain code:(int)code userInfo:(id)info;	// 0x32425f0d
- (id)initWithCoder:(id)coder;	// 0x32463fb5
- (id)initWithDomain:(id)domain code:(int)code userInfo:(id)info;	// 0x32425f51
- (unsigned long)_cfTypeID;	// 0x32464301
- (id)_cocoaErrorString:(id)string;	// 0x32464d81
- (id)_cocoaErrorString:(id)string fromBundle:(id)bundle tableName:(id)name;	// 0x32464b0d
- (id)_cocoaErrorStringWithKind:(id)kind;	// 0x324640fd
- (id)_cocoaErrorStringWithKind:(id)kind variant:(id)variant;	// 0x32463ef1
- (int)_collectApplicableUserInfoFormatters:(timespec **)formatters max:(int)max;	// 0x32464965
- (id)_formatCocoaErrorString:(id)string parameters:(const char *)parameters applicableFormatters:(timespec **)formatters count:(int)count;	// 0x32464a0d
- (CFStringRef)_retainedUserInfoCallBackForKey:(id)key;	// 0x32464239
- (BOOL)_web_errorIsInDomain:(id)domain;	// 0x3244dfa5
- (id)_web_failingURL;	// 0x3244b8b9
- (id)_web_initWithDomain:(id)domain code:(int)code failingURL:(id)url;	// 0x324aa229
- (id)_web_initWithDomain_nowarn:(id)domain_nowarn code:(int)code URL:(id)url;	// 0x324aa0e1
- (id)_web_localizedDescription;	// 0x3244b829
// converted property getter: - (int)code;	// 0x3244b809
- (id)copyWithZone:(NSZone *)zone;	// 0x32463d25
- (void)dealloc;	// 0x32426019
- (id)description;	// 0x32464479
// converted property getter: - (id)domain;	// 0x3244b7f9
- (void)encodeWithCoder:(id)coder;	// 0x32463c29
- (void)finalize;	// 0x324640d1
- (id)helpAnchor;	// 0x32463e51
- (id)localizedDescription;	// 0x3244eef9
- (id)localizedFailureReason;	// 0x324643b9
- (id)localizedRecoveryOptions;	// 0x32463ea9
- (id)localizedRecoverySuggestion;	// 0x32464419
- (id)recoveryAttempter;	// 0x32463e7d
// converted property getter: - (id)userInfo;	// 0x3244b819
@end

