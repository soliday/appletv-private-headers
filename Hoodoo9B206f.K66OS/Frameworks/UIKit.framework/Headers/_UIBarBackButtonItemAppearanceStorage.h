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
@property(retain, nonatomic) NSNumber *backgroundVerticalAdjustment;	// G=0x354a45b9; S=0x3558bdb9; @synthesize
@property(retain, nonatomic) NSNumber *miniBackgroundVerticalAdjustment;	// G=0x354a45e9; S=0x3558bddd; @synthesize
@property(retain, nonatomic) NSValue *miniTitlePositionOffset;	// G=0x354a4589; S=0x3558bd95; @synthesize
@property(retain, nonatomic) NSValue *titlePositionOffset;	// G=0x354a4559; S=0x3558bd71; @synthesize
- (id)anyBackgroundImage;	// 0x3558bc15
- (id)backgroundImageForState:(unsigned)state isMini:(BOOL)mini;	// 0x353d78ed
// declared property getter: - (id)backgroundVerticalAdjustment;	// 0x354a45b9
- (void)dealloc;	// 0x3558bcc1
// declared property getter: - (id)miniBackgroundVerticalAdjustment;	// 0x354a45e9
// declared property getter: - (id)miniTitlePositionOffset;	// 0x354a4589
- (void)setBackgroundImage:(id)image forState:(unsigned)state isMini:(BOOL)mini;	// 0x353d764d
// declared property setter: - (void)setBackgroundVerticalAdjustment:(id)adjustment;	// 0x3558bdb9
// declared property setter: - (void)setMiniBackgroundVerticalAdjustment:(id)adjustment;	// 0x3558bddd
// declared property setter: - (void)setMiniTitlePositionOffset:(id)offset;	// 0x3558bd95
// declared property setter: - (void)setTitlePositionOffset:(id)offset;	// 0x3558bd71
// declared property getter: - (id)titlePositionOffset;	// 0x354a4559
@end

