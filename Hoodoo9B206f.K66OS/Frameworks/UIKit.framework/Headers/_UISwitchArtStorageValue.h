/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UISwitchArtStorageValue : NSObject {
@private
	int _count;	// 4 = 0x4
	UIImage *_onImage;	// 8 = 0x8
	UIImage *_offImage;	// 12 = 0xc
	UIImage *_labelImage;	// 16 = 0x10
	UIImage *_backgroundColorImage;	// 20 = 0x14
}
@property(retain, nonatomic) UIImage *backgroundColorImage;	// G=0x353db035; S=0x353db085; @synthesize=_backgroundColorImage
@property(assign, nonatomic) int count;	// G=0x353dbb51; S=0x353d98d5; @synthesize=_count
@property(retain, nonatomic) UIImage *labelImage;	// G=0x353daa2d; S=0x353dae4d; @synthesize=_labelImage
@property(retain, nonatomic) UIImage *offImage;	// G=0x353dbbe9; S=0x353db675; @synthesize=_offImage
@property(retain, nonatomic) UIImage *onImage;	// G=0x3549cf81; S=0x3549cfc1; @synthesize=_onImage
// declared property getter: - (id)backgroundColorImage;	// 0x353db035
// declared property getter: - (int)count;	// 0x353dbb51
- (void)dealloc;	// 0x353dbb61
// declared property getter: - (id)labelImage;	// 0x353daa2d
// declared property getter: - (id)offImage;	// 0x353dbbe9
// declared property getter: - (id)onImage;	// 0x3549cf81
// declared property setter: - (void)setBackgroundColorImage:(id)image;	// 0x353db085
// declared property setter: - (void)setCount:(int)count;	// 0x353d98d5
// declared property setter: - (void)setLabelImage:(id)image;	// 0x353dae4d
// declared property setter: - (void)setOffImage:(id)image;	// 0x353db675
// declared property setter: - (void)setOnImage:(id)image;	// 0x3549cfc1
@end

