/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSNumber, NSValue;

__attribute__((visibility("hidden")))
@interface _UIBarBackButtonItemAppearanceStorage : NSObject {
@private
	NSMutableDictionary *backgroundImages;	// 4 = 0x4
	NSMutableDictionary *miniBackgroundImages;	// 8 = 0x8
	NSValue *titlePositionOffset;	// 12 = 0xc
	NSValue *miniTitlePositionOffset;	// 16 = 0x10
	NSNumber *backgroundVerticalAdjustment;	// 20 = 0x14
	NSNumber *miniBackgroundVerticalAdjustment;	// 24 = 0x18
}
@property(retain, nonatomic) NSNumber *backgroundVerticalAdjustment;	// G=0x3020c3dd; S=0x302ed5cd; @synthesize
@property(retain, nonatomic) NSNumber *miniBackgroundVerticalAdjustment;	// G=0x3020c40d; S=0x302ed5dd; @synthesize
@property(retain, nonatomic) NSValue *miniTitlePositionOffset;	// G=0x3020c3ad; S=0x302ed5bd; @synthesize
@property(retain, nonatomic) NSValue *titlePositionOffset;	// G=0x3020c37d; S=0x302ed5ad; @synthesize
- (id)anyBackgroundImage;	// 0x302ed505
- (id)backgroundImageForState:(unsigned)state isMini:(BOOL)mini;	// 0x3014f801
// declared property getter: - (id)backgroundVerticalAdjustment;	// 0x3020c3dd
- (void)dealloc;	// 0x302ed451
// declared property getter: - (id)miniBackgroundVerticalAdjustment;	// 0x3020c40d
// declared property getter: - (id)miniTitlePositionOffset;	// 0x3020c3ad
- (void)setBackgroundImage:(id)image forState:(unsigned)state isMini:(BOOL)mini;	// 0x3014f53d
// declared property setter: - (void)setBackgroundVerticalAdjustment:(id)adjustment;	// 0x302ed5cd
// declared property setter: - (void)setMiniBackgroundVerticalAdjustment:(id)adjustment;	// 0x302ed5dd
// declared property setter: - (void)setMiniTitlePositionOffset:(id)offset;	// 0x302ed5bd
// declared property setter: - (void)setTitlePositionOffset:(id)offset;	// 0x302ed5ad
// declared property getter: - (id)titlePositionOffset;	// 0x3020c37d
@end

