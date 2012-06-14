/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import "NSCopying.h"
#import "CTMessageAddress.h"
#import "CoreTelephony-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress> {
	NSString *_digits;	// 4 = 0x4
	NSString *_countryCode;	// 8 = 0x8
	BOOL _isShortCode;	// 12 = 0xc
}
@property(readonly, assign) NSString *countryCode;	// G=0x3217ca21; @synthesize=_countryCode
@property(readonly, assign) NSString *digits;	// G=0x3217ca11; @synthesize=_digits
@property(assign) BOOL isShortCode;	// G=0x3217ca31; S=0x3217ca41; @synthesize=_isShortCode
+ (id)phoneNumberWithDigits:(id)digits countryCode:(id)code;	// 0x3217c619
- (id)initWithDigits:(id)digits countryCode:(id)code;	// 0x3217c709
- (id)canonicalFormat;	// 0x3217c9bd
- (id)copyWithZone:(NSZone *)zone;	// 0x3217c8fd
// declared property getter: - (id)countryCode;	// 0x3217ca21
- (void)dealloc;	// 0x3217c89d
// declared property getter: - (id)digits;	// 0x3217ca11
- (id)encodedString;	// 0x3217c9cd
- (id)formatForCallingCountry:(id)callingCountry;	// 0x3217c971
// declared property getter: - (BOOL)isShortCode;	// 0x3217ca31
- (int)numberOfDigitsForShortCodeNumber;	// 0x3217c659
// declared property setter: - (void)setIsShortCode:(BOOL)code;	// 0x3217ca41
@end

