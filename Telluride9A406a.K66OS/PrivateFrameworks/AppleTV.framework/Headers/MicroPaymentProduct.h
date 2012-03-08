/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface MicroPaymentProduct : NSObject {
@private
	NSString *_localeIdentifier;	// 4 = 0x4
	NSString *_localizedDescription;	// 8 = 0x8
	NSString *_localizedTitle;	// 12 = 0xc
	NSNumber *_price;	// 16 = 0x10
	NSString *_productIdentifier;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *localeIdentifier;	// G=0x331ca5cd; S=0x331ca5dd; @synthesize=_localeIdentifier
@property(retain, nonatomic) NSString *localizedDescription;	// G=0x331ca601; S=0x331ca611; @synthesize=_localizedDescription
@property(retain, nonatomic) NSString *localizedTitle;	// G=0x331ca635; S=0x331ca645; @synthesize=_localizedTitle
@property(retain, nonatomic) NSNumber *price;	// G=0x331ca669; S=0x331ca679; @synthesize=_price
@property(retain, nonatomic) NSString *productIdentifier;	// G=0x331ca69d; S=0x331ca6ad; @synthesize=_productIdentifier
- (id)initWithDictionary:(id)dictionary;	// 0x331ca131
- (id)copyPropertyListRepresentation;	// 0x331ca4a5
- (void)dealloc;	// 0x331ca3dd
// declared property getter: - (id)localeIdentifier;	// 0x331ca5cd
// declared property getter: - (id)localizedDescription;	// 0x331ca601
// declared property getter: - (id)localizedTitle;	// 0x331ca635
// declared property getter: - (id)price;	// 0x331ca669
// declared property getter: - (id)productIdentifier;	// 0x331ca69d
// declared property setter: - (void)setLocaleIdentifier:(id)identifier;	// 0x331ca5dd
// declared property setter: - (void)setLocalizedDescription:(id)description;	// 0x331ca611
// declared property setter: - (void)setLocalizedTitle:(id)title;	// 0x331ca645
// declared property setter: - (void)setPrice:(id)price;	// 0x331ca679
// declared property setter: - (void)setProductIdentifier:(id)identifier;	// 0x331ca6ad
@end
