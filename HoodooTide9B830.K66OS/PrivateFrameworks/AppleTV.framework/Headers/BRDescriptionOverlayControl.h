/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSTimer, NSAttributedString, NSString, BRMediaPlayer, BRImage;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface BRDescriptionOverlayControl : BRControl {
@private
	BRControl *_customOverlay;	// 48 = 0x30
	CGColorRef _fillColor;	// 52 = 0x34
	BRMediaPlayer *_player;	// 56 = 0x38
	id<BRMediaAsset> _asset;	// 60 = 0x3c
	NSString *_imageID;	// 64 = 0x40
	BRImage *_image;	// 68 = 0x44
	BRImage *_ratingImage;	// 72 = 0x48
	NSAttributedString *_title;	// 76 = 0x4c
	NSAttributedString *_publisher;	// 80 = 0x50
	NSAttributedString *_description;	// 84 = 0x54
	NSAttributedString *_pressAndHoldDescription;	// 88 = 0x58
	BOOL _showPressAndHoldDescription;	// 92 = 0x5c
	NSTimer *_fadeTimer;	// 96 = 0x60
}
- (id)init;	// 0x329cb8c1
- (void)_fadeOverlay:(id)overlay;	// 0x329cd371
- (void)_hideOverlay;	// 0x329cd299
- (void)_imageUpdated:(id)updated;	// 0x329cd1b1
- (id)_pressAndHoldDescriptionAttributes;	// 0x329cd0dd
- (BOOL)_pressAndHoldOptionAvailable;	// 0x329cd0fd
- (void)_setImage:(id)image;	// 0x329cd089
- (void)_showOverlay;	// 0x329cd311
- (void)_showOverlayWithTimeout:(float)timeout;	// 0x329cca7d
- (void)_updateCurrentMediaInfo;	// 0x329ccb19
- (id)accessibilityLabel;	// 0x329cc9d5
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x329cd499
- (void)dealloc;	// 0x329cb965
- (void)drawInContext:(CGContextRef)context;	// 0x329cbde9
- (BOOL)hasContent;	// 0x329cbb49
- (void)hideOverlay;	// 0x329cbbbd
- (BOOL)isAccessibilityElement;	// 0x329cca79
- (void)layoutSubcontrols;	// 0x329cbce1
- (void)setAsset:(id)asset;	// 0x329cbae5
- (void)setPlayer:(id)player;	// 0x329cbaa5
- (void)showOverlayWithLongTimeout;	// 0x329cbbcd
- (void)showOverlayWithLongTimeoutFromTouchRemote;	// 0x329cbc85
- (void)showOverlayWithShortTimeout;	// 0x329cbc29
@end

