/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSPurchase.h"
#import "SSCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSNumber, NSString;

@interface SSTonePurchase : SSPurchase <SSCoding, NSCoding, NSCopying> {
@private
	NSArray *_allowedToneStyles;	// 44 = 0x2c
	NSNumber *_assigneeIdentifier;	// 48 = 0x30
	NSString *_assigneeToneStyle;	// 52 = 0x34
	BOOL _shouldMakeDefaultRingtone;	// 56 = 0x38
	BOOL _shouldMakeDefaultTextTone;	// 57 = 0x39
}
@property(copy, nonatomic) NSArray *allowedToneStyles;	// G=0x304f8e09; S=0x304f8e19; @synthesize=_allowedToneStyles
@property(retain, nonatomic) NSNumber *assigneeIdentifier;	// G=0x304f8e3d; S=0x304f8e4d; @synthesize=_assigneeIdentifier
@property(copy, nonatomic) NSString *assigneeToneStyle;	// G=0x304f8e71; S=0x304f8e81; @synthesize=_assigneeToneStyle
@property(assign, nonatomic) BOOL shouldMakeDefaultRingtone;	// G=0x304f8ea5; S=0x304f8eb5; @synthesize=_shouldMakeDefaultRingtone
@property(assign, nonatomic) BOOL shouldMakeDefaultTextTone;	// G=0x304f8ec5; S=0x304f8ed5; @synthesize=_shouldMakeDefaultTextTone
- (id)initWithCoder:(id)coder;	// 0x304f87ad
- (id)initWithItem:(id)item offer:(id)offer;	// 0x304f86d1
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x304f8cb5
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x304f8dcd
// declared property getter: - (id)allowedToneStyles;	// 0x304f8e09
// declared property getter: - (id)assigneeIdentifier;	// 0x304f8e3d
// declared property getter: - (id)assigneeToneStyle;	// 0x304f8e71
- (id)copyPropertyListEncoding;	// 0x304f8b99
- (id)copyWithZone:(NSZone *)zone;	// 0x304f8ac5
- (void *)copyXPCEncoding;	// 0x304f8c81
- (void)dealloc;	// 0x304f8739
- (void)encodeWithCoder:(id)coder;	// 0x304f894d
// declared property setter: - (void)setAllowedToneStyles:(id)styles;	// 0x304f8e19
// declared property setter: - (void)setAssigneeIdentifier:(id)identifier;	// 0x304f8e4d
// declared property setter: - (void)setAssigneeToneStyle:(id)style;	// 0x304f8e81
// declared property setter: - (void)setShouldMakeDefaultRingtone:(BOOL)makeDefaultRingtone;	// 0x304f8eb5
// declared property setter: - (void)setShouldMakeDefaultTextTone:(BOOL)makeDefaultTextTone;	// 0x304f8ed5
// declared property getter: - (BOOL)shouldMakeDefaultRingtone;	// 0x304f8ea5
// declared property getter: - (BOOL)shouldMakeDefaultTextTone;	// 0x304f8ec5
@end

