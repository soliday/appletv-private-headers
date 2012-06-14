/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class UIImage, NSString, UIImageView;

@interface MPVideoBackgroundView : UIView {
	int _interfaceOrientation;	// 48 = 0x30
	UIView *_imageView;	// 52 = 0x34
	UIImageView *_iconView;	// 56 = 0x38
	UIImageView *_backgroundPlaceholderImageView;	// 60 = 0x3c
	UIView *_backgroundPlaceholderPosterImageView;	// 64 = 0x40
	UIView *_backgroundPlaceholderView;	// 68 = 0x44
	UIImageView *_customBackgroundImageView;	// 72 = 0x48
	NSString *_destinationName;	// 76 = 0x4c
	int _destinationPlaceholderStyle;	// 80 = 0x50
	BOOL _showDestinationPlaceholder;	// 84 = 0x54
	id _layoutSubviewsPostflightHandler;	// 88 = 0x58
}
@property(retain, nonatomic) UIImage *backgroundPlaceholderImage;	// G=0x30377b25; S=0x30377939; 
@property(retain, nonatomic) UIView *backgroundPlaceholderPosterImageView;	// G=0x3037804d; S=0x30377a91; @synthesize=_backgroundPlaceholderPosterImageView
@property(readonly, assign, nonatomic) UIView *backgroundPlaceholderView;	// G=0x30377b45; 
@property(copy, nonatomic) NSString *destinationName;	// G=0x3037805d; S=0x30377c49; @synthesize=_destinationName
@property(assign, nonatomic) int destinationPlaceholderStyle;	// G=0x3037806d; S=0x30377ca1; @synthesize=_destinationPlaceholderStyle
@property(assign, nonatomic) int interfaceOrientation;	// G=0x3037807d; S=0x303772c1; @synthesize=_interfaceOrientation
@property(copy, nonatomic) id layoutSubviewsPostflightHandler;	// G=0x3037808d; S=0x3037809d; @synthesize=_layoutSubviewsPostflightHandler
- (id)initWithFrame:(CGRect)frame;	// 0x30376f45
- (void)_createInformationalTitleView:(id *)view systemFont:(id)font lineBreakMode:(int)mode;	// 0x3037763d
- (void)_tvOutCapabilityDidChangeNotification:(id)_tvOutCapability;	// 0x30377d21
- (void)_updateDestinationBackgroundViewAnimated:(BOOL)animated;	// 0x30377d35
// declared property getter: - (id)backgroundPlaceholderImage;	// 0x30377b25
// declared property getter: - (id)backgroundPlaceholderPosterImageView;	// 0x3037804d
// declared property getter: - (id)backgroundPlaceholderView;	// 0x30377b45
- (void)dealloc;	// 0x30376fcd
// declared property getter: - (id)destinationName;	// 0x3037805d
// declared property getter: - (int)destinationPlaceholderStyle;	// 0x3037806d
// declared property getter: - (int)interfaceOrientation;	// 0x3037807d
- (void)layoutSubviews;	// 0x30377121
// declared property getter: - (id)layoutSubviewsPostflightHandler;	// 0x3037808d
- (id)qtIcon;	// 0x303772e1
// declared property setter: - (void)setBackgroundPlaceholderImage:(id)image;	// 0x30377939
// declared property setter: - (void)setBackgroundPlaceholderPosterImageView:(id)view;	// 0x30377a91
- (void)setCustomBackgroundImage:(id)image;	// 0x303777b9
// declared property setter: - (void)setDestinationName:(id)name;	// 0x30377c49
// declared property setter: - (void)setDestinationPlaceholderStyle:(int)style;	// 0x30377ca1
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x303772c1
// declared property setter: - (void)setLayoutSubviewsPostflightHandler:(id)handler;	// 0x3037809d
- (void)setShowDestinationPlaceholder:(BOOL)placeholder animated:(BOOL)animated;	// 0x30377cd1
- (void)setShowQTAudioOnlyUI:(BOOL)ui;	// 0x30377319
@end

