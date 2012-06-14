/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSString, ATVFeedImageElement;

__attribute__((visibility("hidden")))
@interface ATVFeedBaseballScorePosterElement : ATVFeedElement {
@private
	NSString *_title;	// 28 = 0x1c
	NSString *_subTitle;	// 32 = 0x20
	ATVFeedImageElement *_leftImage;	// 36 = 0x24
	ATVFeedImageElement *_rightImage;	// 40 = 0x28
	NSString *_imageSeparatorText;	// 44 = 0x2c
	NSString *_leftScore;	// 48 = 0x30
	NSString *_leftScoreText;	// 52 = 0x34
	NSString *_rightScore;	// 56 = 0x38
	NSString *_rightScoreText;	// 60 = 0x3c
	ATVFeedImageElement *_backgroundImage;	// 64 = 0x40
	ATVFeedImageElement *_onBaseImage;	// 68 = 0x44
}
@property(retain, nonatomic) ATVFeedImageElement *backgroundImage;	// G=0x32b19025; S=0x32b19035; @synthesize=_backgroundImage
@property(retain, nonatomic) NSString *imageSeparatorText;	// G=0x32b18f21; S=0x32b18f31; @synthesize=_imageSeparatorText
@property(retain, nonatomic) ATVFeedImageElement *leftImage;	// G=0x32b18eb9; S=0x32b18ec9; @synthesize=_leftImage
@property(retain, nonatomic) NSString *leftScore;	// G=0x32b18f55; S=0x32b18f65; @synthesize=_leftScore
@property(retain, nonatomic) NSString *leftScoreText;	// G=0x32b18f89; S=0x32b18f99; @synthesize=_leftScoreText
@property(retain, nonatomic) ATVFeedImageElement *onBaseImage;	// G=0x32b19059; S=0x32b19069; @synthesize=_onBaseImage
@property(retain, nonatomic) ATVFeedImageElement *rightImage;	// G=0x32b18eed; S=0x32b18efd; @synthesize=_rightImage
@property(retain, nonatomic) NSString *rightScore;	// G=0x32b18fbd; S=0x32b18fcd; @synthesize=_rightScore
@property(retain, nonatomic) NSString *rightScoreText;	// G=0x32b18ff1; S=0x32b19001; @synthesize=_rightScoreText
@property(retain, nonatomic) NSString *subTitle;	// G=0x32b18e85; S=0x32b18e95; @synthesize=_subTitle
@property(retain, nonatomic) NSString *title;	// G=0x32b18e51; S=0x32b18e61; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x32b18a41
// declared property getter: - (id)backgroundImage;	// 0x32b19025
- (void)dealloc;	// 0x32b18d3d
// declared property getter: - (id)imageSeparatorText;	// 0x32b18f21
// declared property getter: - (id)leftImage;	// 0x32b18eb9
// declared property getter: - (id)leftScore;	// 0x32b18f55
// declared property getter: - (id)leftScoreText;	// 0x32b18f89
// declared property getter: - (id)onBaseImage;	// 0x32b19059
// declared property getter: - (id)rightImage;	// 0x32b18eed
// declared property getter: - (id)rightScore;	// 0x32b18fbd
// declared property getter: - (id)rightScoreText;	// 0x32b18ff1
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x32b19035
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0x32b18f31
// declared property setter: - (void)setLeftImage:(id)image;	// 0x32b18ec9
// declared property setter: - (void)setLeftScore:(id)score;	// 0x32b18f65
// declared property setter: - (void)setLeftScoreText:(id)text;	// 0x32b18f99
// declared property setter: - (void)setOnBaseImage:(id)image;	// 0x32b19069
// declared property setter: - (void)setRightImage:(id)image;	// 0x32b18efd
// declared property setter: - (void)setRightScore:(id)score;	// 0x32b18fcd
// declared property setter: - (void)setRightScoreText:(id)text;	// 0x32b19001
// declared property setter: - (void)setSubTitle:(id)title;	// 0x32b18e95
// declared property setter: - (void)setTitle:(id)title;	// 0x32b18e61
// declared property getter: - (id)subTitle;	// 0x32b18e85
// declared property getter: - (id)title;	// 0x32b18e51
@end

