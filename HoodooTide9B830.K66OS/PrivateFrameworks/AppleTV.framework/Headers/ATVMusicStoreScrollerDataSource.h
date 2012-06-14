/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreScrollerDataSource : NSObject {
@private
	NSArray *_controls;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
}
@property(retain, nonatomic) NSArray *controls;	// G=0x3296cf5d; S=0x3296ccd9; @synthesize=_controls
@property(retain, nonatomic) NSString *identifier;	// G=0x3296cf6d; S=0x3296cd2d; @synthesize=_identifier
- (void)_setControlIdentifiers;	// 0x3296cf7d
// declared property getter: - (id)controls;	// 0x3296cf5d
- (void)dealloc;	// 0x3296cc79
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x3296cdc5
- (long)grid:(id)grid indexForItemID:(id)itemID;	// 0x3296ce75
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x3296cda5
- (id)grid:(id)grid itemIDAtIndex:(long)index;	// 0x3296ce3d
// declared property getter: - (id)identifier;	// 0x3296cf6d
- (long)numberOfColumnsInGrid:(id)grid;	// 0x3296cda1
- (long)numberOfItemsInGrid:(id)grid;	// 0x3296cd81
// declared property setter: - (void)setControls:(id)controls;	// 0x3296ccd9
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x3296cd2d
@end

