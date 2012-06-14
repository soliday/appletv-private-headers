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
@property(retain, nonatomic) NSString *localeIdentifier;	// G=0x32b477cd; S=0x32b477dd; @synthesize=_localeIdentifier
@property(retain, nonatomic) NSString *localizedDescription;	// G=0x32b47801; S=0x32b47811; @synthesize=_localizedDescription
@property(retain, nonatomic) NSString *localizedTitle;	// G=0x32b47835; S=0x32b47845; @synthesize=_localizedTitle
@property(retain, nonatomic) NSNumber *price;	// G=0x32b47869; S=0x32b47879; @synthesize=_price
@property(retain, nonatomic) NSString *productIdentifier;	// G=0x32b4789d; S=0x32b478ad; @synthesize=_productIdentifier
- (id)initWithDictionary:(id)dictionary;	// 0x32b47335
- (id)copyPropertyListRepresentation;	// 0x32b476a5
- (void)dealloc;	// 0x32b475dd
// declared property getter: - (id)localeIdentifier;	// 0x32b477cd
// declared property getter: - (id)localizedDescription;	// 0x32b47801
// declared property getter: - (id)localizedTitle;	// 0x32b47835
// declared property getter: - (id)price;	// 0x32b47869
// declared property getter: - (id)productIdentifier;	// 0x32b4789d
// declared property setter: - (void)setLocaleIdentifier:(id)identifier;	// 0x32b477dd
// declared property setter: - (void)setLocalizedDescription:(id)description;	// 0x32b47811
// declared property setter: - (void)setLocalizedTitle:(id)title;	// 0x32b47845
// declared property setter: - (void)setPrice:(id)price;	// 0x32b47879
// declared property setter: - (void)setProductIdentifier:(id)identifier;	// 0x32b478ad
@end

