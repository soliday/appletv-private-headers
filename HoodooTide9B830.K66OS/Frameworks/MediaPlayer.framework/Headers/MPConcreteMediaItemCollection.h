/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaItemCollection.h"
#import "MediaPlayer-Structs.h"

@class MPMediaItem, MPMediaQuery;

@interface MPConcreteMediaItemCollection : MPMediaItemCollection {
@private
	long long _identifier;	// 20 = 0x14
	MPMediaQuery *_itemsQuery;	// 28 = 0x1c
	int _grouping;	// 32 = 0x20
	MPMediaItem *_representativeItem;	// 36 = 0x24
}
@property(readonly, retain) MPMediaQuery *itemsQuery;	// G=0x346b48dd; converted property
@property(readonly, retain) MPMediaItem *representativeItem;	// G=0x346b4935; converted property
- (id)initWithCoder:(id)coder;	// 0x346b437d
- (id)initWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQuery:(id)query grouping:(int)grouping representativeItemIdentifier:(long long)identifier5;	// 0x346b4185
- (id)copyWithZone:(NSZone *)zone;	// 0x346b436d
- (unsigned)count;	// 0x346b4b3d
- (void)dealloc;	// 0x346b430d
- (void)encodeWithCoder:(id)coder;	// 0x346b443d
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x346b44ed
- (unsigned)hash;	// 0x346b42fd
- (BOOL)isEqual:(id)equal;	// 0x346b4279
- (id)items;	// 0x346b4915
// converted property getter: - (id)itemsQuery;	// 0x346b48dd
- (id)mediaLibrary;	// 0x346b468d
- (int)mediaTypes;	// 0x346b4b65
- (unsigned long long)persistentID;	// 0x346b46ad
// converted property getter: - (id)representativeItem;	// 0x346b4935
- (id)valueForProperty:(id)property;	// 0x346b46c5
@end

