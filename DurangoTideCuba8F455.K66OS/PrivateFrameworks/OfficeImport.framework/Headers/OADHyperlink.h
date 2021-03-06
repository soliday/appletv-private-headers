/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSString;

__attribute__((visibility("hidden")))
@interface OADHyperlink : NSObject {
@private
	NSURL *mTargetLocation;	// 4 = 0x4
	int mTargetMode;	// 8 = 0x8
	NSString *mTargetFrame;	// 12 = 0xc
	NSString *mAction;	// 16 = 0x10
	NSString *mTooltip;	// 20 = 0x14
	NSString *mInvalidUrl;	// 24 = 0x18
	BOOL mDoEndSound;	// 28 = 0x1c
	BOOL mIsVisited;	// 29 = 0x1d
	BOOL mDoAddToHistory;	// 30 = 0x1e
}
@property(retain) id action;	// G=0x32c82c69; S=0x32ba73b5; converted property
@property(assign, nonatomic) BOOL doAddToHistory;	// G=0x32cd62fd; S=0x32ba747d; @synthesize=mDoAddToHistory
@property(assign, nonatomic) BOOL doEndSound;	// G=0x32cd631d; S=0x32ba745d; @synthesize=mDoEndSound
@property(retain) id invalidUrl;	// G=0x32cd62ed; S=0x32ba7425; converted property
@property(assign, nonatomic) BOOL isVisited;	// G=0x32cd630d; S=0x32ba746d; @synthesize=mIsVisited
@property(retain) id targetFrame;	// G=0x32cd62cd; S=0x32ba737d; converted property
@property(retain) id targetLocation;	// G=0x32cd62ad; S=0x32ba7335; converted property
@property(assign) int targetMode;	// G=0x32cd62bd; S=0x32ba736d; converted property
@property(retain) id tooltip;	// G=0x32cd62dd; S=0x32ba73ed; converted property
- (id)init;	// 0x32ba72d5
// converted property getter: - (id)action;	// 0x32c82c69
- (void)dealloc;	// 0x32ba91e5
// declared property getter: - (BOOL)doAddToHistory;	// 0x32cd62fd
// declared property getter: - (BOOL)doEndSound;	// 0x32cd631d
- (unsigned)hash;	// 0x32cd632d
// converted property getter: - (id)invalidUrl;	// 0x32cd62ed
- (BOOL)isEqual:(id)equal;	// 0x32ba74c5
// declared property getter: - (BOOL)isVisited;	// 0x32cd630d
// converted property setter: - (void)setAction:(id)action;	// 0x32ba73b5
// declared property setter: - (void)setDoAddToHistory:(BOOL)history;	// 0x32ba747d
// declared property setter: - (void)setDoEndSound:(BOOL)sound;	// 0x32ba745d
// converted property setter: - (void)setInvalidUrl:(id)url;	// 0x32ba7425
// declared property setter: - (void)setIsVisited:(BOOL)visited;	// 0x32ba746d
// converted property setter: - (void)setTargetFrame:(id)frame;	// 0x32ba737d
// converted property setter: - (void)setTargetLocation:(id)location;	// 0x32ba7335
// converted property setter: - (void)setTargetMode:(int)mode;	// 0x32ba736d
// converted property setter: - (void)setTooltip:(id)tooltip;	// 0x32ba73ed
// converted property getter: - (id)targetFrame;	// 0x32cd62cd
// converted property getter: - (id)targetLocation;	// 0x32cd62ad
// converted property getter: - (int)targetMode;	// 0x32cd62bd
// converted property getter: - (id)tooltip;	// 0x32cd62dd
@end

