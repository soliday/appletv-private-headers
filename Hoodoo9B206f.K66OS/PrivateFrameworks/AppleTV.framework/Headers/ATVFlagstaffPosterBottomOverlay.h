/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSString, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPosterBottomOverlay : BRControl {
@private
	NSString *_centerText;	// 48 = 0x30
	NSString *_leftText;	// 52 = 0x34
	NSString *_leftDetailedText;	// 56 = 0x38
	NSString *_rightText;	// 60 = 0x3c
	NSString *_rightDetailedText;	// 64 = 0x40
	BRAsyncImageControl *_centerImageControl;	// 68 = 0x44
}
@property(retain, nonatomic) BRAsyncImageControl *centerImageControl;	// G=0x36616531; S=0x366163a9; @synthesize=_centerImageControl
@property(copy, nonatomic) NSString *centerText;	// G=0x3661642d; S=0x3661643d; @synthesize=_centerText
@property(copy, nonatomic) NSString *leftDetailedText;	// G=0x36616495; S=0x366164a5; @synthesize=_leftDetailedText
@property(copy, nonatomic) NSString *leftText;	// G=0x36616461; S=0x36616471; @synthesize=_leftText
@property(copy, nonatomic) NSString *rightDetailedText;	// G=0x366164fd; S=0x3661650d; @synthesize=_rightDetailedText
@property(copy, nonatomic) NSString *rightText;	// G=0x366164c9; S=0x366164d9; @synthesize=_rightText
- (id)init;	// 0x36615d19
// declared property getter: - (id)centerImageControl;	// 0x36616531
// declared property getter: - (id)centerText;	// 0x3661642d
- (void)dealloc;	// 0x36615da1
- (void)drawInContext:(CGContextRef)context;	// 0x36615e51
- (void)layoutSubcontrols;	// 0x36616325
// declared property getter: - (id)leftDetailedText;	// 0x36616495
// declared property getter: - (id)leftText;	// 0x36616461
// declared property getter: - (id)rightDetailedText;	// 0x366164fd
// declared property getter: - (id)rightText;	// 0x366164c9
// declared property setter: - (void)setCenterImageControl:(id)control;	// 0x366163a9
// declared property setter: - (void)setCenterText:(id)text;	// 0x3661643d
// declared property setter: - (void)setLeftDetailedText:(id)text;	// 0x366164a5
// declared property setter: - (void)setLeftText:(id)text;	// 0x36616471
// declared property setter: - (void)setRightDetailedText:(id)text;	// 0x3661650d
// declared property setter: - (void)setRightText:(id)text;	// 0x366164d9
@end

