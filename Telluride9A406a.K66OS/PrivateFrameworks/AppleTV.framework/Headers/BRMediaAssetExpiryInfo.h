/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@protocol BRMediaAsset;

@interface BRMediaAssetExpiryInfo : NSObject {
@private
	id<BRMediaAsset> _mediaAsset;	// 4 = 0x4
}
@property(retain) id expiryDate;	// G=0x3311092d; S=0x33110949; converted property
+ (id)expiryInfoForMediaAsset:(id)mediaAsset;	// 0x33110831
+ (void)setImplementationClass:(Class)aClass;	// 0x33110821
- (id)initWithMediaAsset:(id)mediaAsset;	// 0x33110879
- (id)asset;	// 0x331108cd
- (int)compare:(id)compare;	// 0x331109a1
- (void)dealloc;	// 0x331108dd
// converted property getter: - (id)expiryDate;	// 0x3311092d
- (id)expiryDescription;	// 0x331109d9
- (BOOL)hasBeenPlayed;	// 0x33110a79
- (BOOL)isExpired;	// 0x33110929
- (unsigned)rentalPlaybackDuration;	// 0x3311099d
- (id)rentalPlaybackDurationDescription;	// 0x33110a01
// converted property setter: - (void)setExpiryDate:(id)date;	// 0x33110949
@end

