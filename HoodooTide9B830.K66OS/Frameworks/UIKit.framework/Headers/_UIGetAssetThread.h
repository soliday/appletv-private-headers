/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSThread.h> // Unknown library

@class ALAssetsLibrary, NSCondition, ALAsset, NSURL;

__attribute__((visibility("hidden")))
@interface _UIGetAssetThread : NSThread {
@private
	NSURL *_url;	// 52 = 0x34
	ALAssetsLibrary *_library;	// 56 = 0x38
	NSCondition *_condition;	// 60 = 0x3c
	ALAsset *_asset;	// 64 = 0x40
}
@property(retain) ALAsset *asset;	// G=0x3037fc71; S=0x3037fc85; @synthesize=_asset
@property(retain) NSCondition *condition;	// G=0x3037fca9; S=0x3037fcbd; @synthesize=_condition
- (id)initWithURL:(id)url assetsLibrary:(id)library;	// 0x3037f9c1
// declared property getter: - (id)asset;	// 0x3037fc71
// declared property getter: - (id)condition;	// 0x3037fca9
- (void)dealloc;	// 0x3037fa61
- (void)main;	// 0x3037fae9
// declared property setter: - (void)setAsset:(id)asset;	// 0x3037fc85
// declared property setter: - (void)setCondition:(id)condition;	// 0x3037fcbd
@end

