/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDate;

@interface ATVFavorite : NSObject {
@private
	NSDate *_dateAdded;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_itemID;	// 12 = 0xc
}
@property(copy) NSDate *dateAdded;	// G=0x30779799; S=0x307797e1; @synthesize=_dateAdded
@property(copy) NSString *itemID;	// G=0x307797c9; S=0x30779831; @synthesize=_itemID
@property(copy) NSString *title;	// G=0x307797b1; S=0x30779809; @synthesize=_title
+ (id)favoriteFromDictionary:(id)dictionary;	// 0x30779859
- (id)initWithDictionary:(id)dictionary;	// 0x30779639
- (id)_currentDsid;	// 0x307794a9
- (id)_currentStoreFront;	// 0x3077947d
// declared property getter: - (id)dateAdded;	// 0x30779799
- (void)dealloc;	// 0x307795cd
- (void)encodeWithDictionary:(id)dictionary;	// 0x30779701
- (BOOL)isSaved;	// 0x30779585
// declared property getter: - (id)itemID;	// 0x307797c9
- (void)remove;	// 0x30779525
- (BOOL)removeUponAcquisition;	// 0x30779479
- (void)save;	// 0x30779555
// declared property setter: - (void)setDateAdded:(id)added;	// 0x307797e1
// declared property setter: - (void)setItemID:(id)anId;	// 0x30779831
// declared property setter: - (void)setTitle:(id)title;	// 0x30779809
// declared property getter: - (id)title;	// 0x307797b1
@end

