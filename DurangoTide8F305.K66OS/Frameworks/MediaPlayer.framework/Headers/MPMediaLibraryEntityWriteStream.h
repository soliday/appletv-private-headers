/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMediaQueryCriteria;

@interface MPMediaLibraryEntityWriteStream : NSObject {
@private
	id _entityArray;	// 4 = 0x4
	MPMediaQueryCriteria *_queryCriteria;	// 8 = 0x8
	unsigned _index;	// 12 = 0xc
	unsigned _count;	// 16 = 0x10
	BOOL _cancelled;	// 20 = 0x14
}
@property(readonly, assign, nonatomic, getter=isCancelled) BOOL cancelled;	// G=0x3379c89d; 
@property(readonly, assign, nonatomic) unsigned count;	// G=0x3379c87d; 
@property(readonly, assign, nonatomic) unsigned index;	// G=0x3379c88d; 
- (id)initWithEntityStreamArray:(id)entityStreamArray queryCriteria:(id)criteria count:(unsigned)count;	// 0x3379ef3d
- (void)_writeCollectionWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQueryCriteria:(id)criteria;	// 0x337a1d29
- (void)cancel;	// 0x3379c8ad
// declared property getter: - (unsigned)count;	// 0x3379c87d
- (void)dealloc;	// 0x3379eee1
- (id)description;	// 0x3379ee91
// declared property getter: - (unsigned)index;	// 0x3379c88d
// declared property getter: - (BOOL)isCancelled;	// 0x3379c89d
- (void)writeCollectionWithIdentifier:(long long)identifier valuesForProperties:(id)properties;	// 0x3379c8bd
- (void)writeItemWithIdentifier:(long long)identifier valuesForProperties:(id)properties;	// 0x337a1dc9
@end

