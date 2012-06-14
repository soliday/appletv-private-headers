/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library
#import "BulletinBoard-Structs.h"

@class NSMutableDictionary;

@interface BBObserverBulletinAttachmentInfo : NSObject {
	NSMutableDictionary *_imageSizePairs;	// 4 = 0x4
@private
	BOOL imagesFetched;	// 8 = 0x8
	BOOL sizesFetched;	// 9 = 0x9
}
@property(assign, nonatomic) BOOL imagesFetched;	// G=0x36d1d8cd; S=0x36d1d8dd; @synthesize
@property(assign, nonatomic) BOOL sizesFetched;	// G=0x36d1d8ed; S=0x36d1d8fd; @synthesize
- (id)init;	// 0x36d1d6b1
- (id)_pairForKey:(id)key create:(BOOL)create;	// 0x36d1d761
- (void)dealloc;	// 0x36d1d715
- (id)imageForKey:(id)key;	// 0x36d1d861
// declared property getter: - (BOOL)imagesFetched;	// 0x36d1d8cd
- (void)setImage:(id)image forKey:(id)key;	// 0x36d1d7fd
// declared property setter: - (void)setImagesFetched:(BOOL)fetched;	// 0x36d1d8dd
- (void)setSize:(CGSize)size forKey:(id)key;	// 0x36d1d82d
// declared property setter: - (void)setSizesFetched:(BOOL)fetched;	// 0x36d1d8fd
- (CGSize)sizeForKey:(id)key;	// 0x36d1d88d
// declared property getter: - (BOOL)sizesFetched;	// 0x36d1d8ed
@end

