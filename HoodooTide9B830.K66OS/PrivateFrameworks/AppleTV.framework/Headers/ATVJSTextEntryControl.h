/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRImage, BRMerchant, NSString, ATVProxyViewController;

__attribute__((visibility("hidden")))
@interface ATVJSTextEntryControl : NSObject {
@private
	NSString *_loadingImageID;	// 4 = 0x4
	BRImage *_image;	// 8 = 0x8
	ATVProxyViewController *_proxyViewController;	// 12 = 0xc
	BRMerchant *_merchant;	// 16 = 0x10
	int _textEntryStyle;	// 20 = 0x14
	BOOL _hideText;	// 24 = 0x18
	NSString *_title;	// 28 = 0x1c
	NSString *_instructions;	// 32 = 0x20
	NSString *_label;	// 36 = 0x24
	NSString *_footnote;	// 40 = 0x28
	NSString *_defaultValue;	// 44 = 0x2c
	NSString *_imageURL;	// 48 = 0x30
	id _submitBlock;	// 52 = 0x34
	id _cancelBlock;	// 56 = 0x38
}
@property(copy, nonatomic) id cancelBlock;	// G=0x32b1d87d; S=0x32b1d88d; @synthesize=_cancelBlock
@property(retain, nonatomic) NSString *defaultValue;	// G=0x32b1d7e1; S=0x32b1d7f1; @synthesize=_defaultValue
@property(retain, nonatomic) NSString *footnote;	// G=0x32b1d7ad; S=0x32b1d7bd; @synthesize=_footnote
@property(assign, nonatomic) BOOL hideText;	// G=0x32b1d6f1; S=0x32b1d701; @synthesize=_hideText
@property(retain, nonatomic) NSString *imageURL;	// G=0x32b1d815; S=0x32b1d825; @synthesize=_imageURL
@property(retain, nonatomic) NSString *instructions;	// G=0x32b1d745; S=0x32b1d755; @synthesize=_instructions
@property(retain, nonatomic) NSString *label;	// G=0x32b1d779; S=0x32b1d789; @synthesize=_label
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x32b1d69d; S=0x32b1d6ad; @synthesize=_merchant
@property(readonly, assign, nonatomic) id onCancel;	// G=0x32b1d469; @dynamic
@property(readonly, assign, nonatomic) id onLoad;	// G=0x32b1cd75; @dynamic
@property(readonly, assign, nonatomic) id onLoadCompletion;	// G=0x32b1cf9d; @dynamic
@property(assign, nonatomic) ATVProxyViewController *proxyViewController;	// G=0x32b1d68d; S=0x32b1cd65; @synthesize=_proxyViewController
@property(copy, nonatomic) id submitBlock;	// G=0x32b1d849; S=0x32b1d859; @synthesize=_submitBlock
@property(assign, nonatomic) int textEntryStyle;	// G=0x32b1d6d1; S=0x32b1d6e1; @synthesize=_textEntryStyle
@property(retain, nonatomic) NSString *title;	// G=0x32b1d711; S=0x32b1d721; @synthesize=_title
- (void)_imageLoadFailed:(id)failed;	// 0x32b1d5f9
- (void)_imageLoaded:(id)loaded;	// 0x32b1d501
// declared property getter: - (id)cancelBlock;	// 0x32b1d87d
- (void)dealloc;	// 0x32b1cc21
// declared property getter: - (id)defaultValue;	// 0x32b1d7e1
// declared property getter: - (id)footnote;	// 0x32b1d7ad
// declared property getter: - (BOOL)hideText;	// 0x32b1d6f1
// declared property getter: - (id)imageURL;	// 0x32b1d815
// declared property getter: - (id)instructions;	// 0x32b1d745
// declared property getter: - (id)label;	// 0x32b1d779
// declared property getter: - (id)merchant;	// 0x32b1d69d
// declared property getter: - (id)onCancel;	// 0x32b1d469
// declared property getter: - (id)onLoad;	// 0x32b1cd75
// declared property getter: - (id)onLoadCompletion;	// 0x32b1cf9d
// declared property getter: - (id)proxyViewController;	// 0x32b1d68d
// declared property setter: - (void)setCancelBlock:(id)block;	// 0x32b1d88d
// declared property setter: - (void)setDefaultValue:(id)value;	// 0x32b1d7f1
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x32b1d7bd
// declared property setter: - (void)setHideText:(BOOL)text;	// 0x32b1d701
// declared property setter: - (void)setImageURL:(id)url;	// 0x32b1d825
// declared property setter: - (void)setInstructions:(id)instructions;	// 0x32b1d755
// declared property setter: - (void)setLabel:(id)label;	// 0x32b1d789
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x32b1d6ad
// declared property setter: - (void)setProxyViewController:(id)controller;	// 0x32b1cd65
// declared property setter: - (void)setSubmitBlock:(id)block;	// 0x32b1d859
// declared property setter: - (void)setTextEntryStyle:(int)style;	// 0x32b1d6e1
// declared property setter: - (void)setTitle:(id)title;	// 0x32b1d721
// declared property getter: - (id)submitBlock;	// 0x32b1d849
// declared property getter: - (int)textEntryStyle;	// 0x32b1d6d1
// declared property getter: - (id)title;	// 0x32b1d711
@end

