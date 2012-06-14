/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@protocol BRMediaCollection;

@interface BRMediaCollectionEditor : NSObject {
@private
	id<BRMediaCollection> _collection;	// 4 = 0x4
}
+ (id)editorForCollection:(id)collection;	// 0x329a64c5
+ (void)setImplementationClass:(Class)aClass;	// 0x329a6411
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x329a6421
- (void)addMediaObjectToCollection:(id)collection;	// 0x329a6511
- (void)clearCollection;	// 0x329a6519
- (id)collection;	// 0x329a651d
- (id)collectionCopyWithName:(id)name;	// 0x329a650d
- (void)dealloc;	// 0x329a6479
- (void)removeMediaObjectFromCollection:(id)collection;	// 0x329a6515
@end

