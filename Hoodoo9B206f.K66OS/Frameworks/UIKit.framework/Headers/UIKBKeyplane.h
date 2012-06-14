/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class UIKBIdentifierList, NSString, UIKBAttributeList, NSArray, NSMutableArray;

@interface UIKBKeyplane : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableArray *m_keylayouts;	// 8 = 0x8
	UIKBAttributeList *m_attributes;	// 12 = 0xc
	UIKBIdentifierList *m_supportedTypes;	// 16 = 0x10
	NSArray *m_keys;	// 20 = 0x14
}
@property(copy, nonatomic) UIKBAttributeList *attributes;	// G=0x356141c9; S=0x356141d9; @synthesize=m_attributes
@property(retain, nonatomic) NSArray *keylayouts;	// G=0x35614195; S=0x356141a5; @synthesize=m_keylayouts
@property(readonly, assign, nonatomic) NSArray *keys;	// G=0x35613831; 
@property(readonly, assign, nonatomic) NSArray *keysOrderedByPosition;	// G=0x356139ed; 
@property(retain, nonatomic) NSString *name;	// G=0x35614161; S=0x35614171; @synthesize=m_name
@property(copy, nonatomic) UIKBIdentifierList *supportedTypes;	// G=0x356141fd; S=0x3561420d; @synthesize=m_supportedTypes
+ (id)keyplane;	// 0x35613119
- (id)init;	// 0x35613161
- (id)initWithCoder:(id)coder;	// 0x35613305
- (id)initWithName:(id)name keylayouts:(id)keylayouts attributes:(id)attributes supportedTypes:(id)types;	// 0x356131c5
- (id)alternateKeyplaneName;	// 0x35613da1
// declared property getter: - (id)attributes;	// 0x356141c9
- (id)copyWithZone:(NSZone *)zone;	// 0x35613465
- (void)dealloc;	// 0x35613269
- (id)description;	// 0x35613cc1
- (void)encodeWithCoder:(id)coder;	// 0x356133cd
- (BOOL)isShiftKeyPlaneChooser;	// 0x35613edd
- (BOOL)isShiftKeyplane;	// 0x35613e41
- (id)keylayoutWithName:(id)name;	// 0x35613629
// declared property getter: - (id)keylayouts;	// 0x35614195
// declared property getter: - (id)keys;	// 0x35613831
- (id)keysByKeyName:(id)name;	// 0x35613bc5
// declared property getter: - (id)keysOrderedByPosition;	// 0x356139ed
- (void)layoutInRect:(CGRect)rect;	// 0x356136e9
- (BOOL)looksLike:(id)like;	// 0x3561379d
- (BOOL)looksLikeShiftAlternate;	// 0x356137fd
// declared property getter: - (id)name;	// 0x35614161
- (BOOL)notUseCandidateSelection;	// 0x35613ea9
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x356141d9
// declared property setter: - (void)setKeylayouts:(id)keylayouts;	// 0x356141a5
// declared property setter: - (void)setName:(id)name;	// 0x35614171
// declared property setter: - (void)setSupportedTypes:(id)types;	// 0x3561420d
- (id)shiftAlternateKeyplaneName;	// 0x35613df1
- (BOOL)shouldSkipCandidateSelection;	// 0x35613e75
// declared property getter: - (id)supportedTypes;	// 0x356141fd
- (BOOL)supportsType:(int)type;	// 0x35613f79
- (BOOL)usesAdaptiveKeys;	// 0x35613f11
- (BOOL)usesAutoShift;	// 0x35613d6d
- (BOOL)usesKeyCharging;	// 0x35613f45
@end

