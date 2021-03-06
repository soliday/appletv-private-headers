/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVOwnershipResponse : NSObject {
@private
	NSArray *_bundles;	// 4 = 0x4
	NSArray *_ownedBundles;	// 8 = 0x8
	NSArray *_unownedBundles;	// 12 = 0xc
}
@property(retain, nonatomic) NSArray *bundles;	// G=0x32b37cfd; S=0x32b37d0d; @synthesize=_bundles
@property(retain, nonatomic) NSArray *ownedBundles;	// G=0x32b37d31; S=0x32b37d41; @synthesize=_ownedBundles
@property(retain, nonatomic) NSArray *unownedBundles;	// G=0x32b37d65; S=0x32b37d75; @synthesize=_unownedBundles
// declared property getter: - (id)bundles;	// 0x32b37cfd
- (void)dealloc;	// 0x32b37a49
- (id)description;	// 0x32b37abd
- (BOOL)loadFromDictionary:(id)dictionary returningError:(id *)error;	// 0x32b37b61
// declared property getter: - (id)ownedBundles;	// 0x32b37d31
// declared property setter: - (void)setBundles:(id)bundles;	// 0x32b37d0d
// declared property setter: - (void)setOwnedBundles:(id)bundles;	// 0x32b37d41
// declared property setter: - (void)setUnownedBundles:(id)bundles;	// 0x32b37d75
// declared property getter: - (id)unownedBundles;	// 0x32b37d65
@end

