/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRBackgroundTask.h> // Unknown library

@class BRURLDocument, NSOperationQueue, NSURL, BRMerchant;
@protocol ATVUpdatable;

@interface ATVPeriodicItemUpdateTask : BRBackgroundTask {
@private
	NSURL *_url;	// 44 = 0x2c
	BRMerchant *_merchant;	// 48 = 0x30
	id<ATVUpdatable> _updatableItem;	// 52 = 0x34
	NSOperationQueue *_callersQueue;	// 56 = 0x38
	BRURLDocument *_currentDocument;	// 60 = 0x3c
}
@property(retain) BRMerchant *merchant;	// G=0x306d83ad; S=0x306d83f1; @synthesize=_merchant
@property(assign) id<ATVUpdatable> updatableItem;	// G=0x306d7fb9; S=0x306d81e5; @synthesize=_updatableItem
@property(retain) NSURL *url;	// G=0x306d8395; S=0x306d83c5; @synthesize=_url
- (id)initWithInterval:(double)interval delay:(double)delay userInfo:(id)info taskType:(int)type;	// 0x306d8171
- (void)_urlDocReady:(id)ready;	// 0x306d7fc9
- (void)dealloc;	// 0x306d80dd
// declared property getter: - (id)merchant;	// 0x306d83ad
- (BOOL)perform:(id)perform;	// 0x306d81f9
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x306d83f1
// declared property setter: - (void)setUpdatableItem:(id)item;	// 0x306d81e5
// declared property setter: - (void)setUrl:(id)url;	// 0x306d83c5
// declared property getter: - (id)updatableItem;	// 0x306d7fb9
// declared property getter: - (id)url;	// 0x306d8395
@end

