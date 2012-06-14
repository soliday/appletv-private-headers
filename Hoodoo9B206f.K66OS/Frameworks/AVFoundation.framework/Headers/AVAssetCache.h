/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVAssetCacheInternal, NSURL;

@interface AVAssetCache : NSObject {
@private
	AVAssetCacheInternal *_priv;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x326fcff1; 
@property(readonly, assign, nonatomic) long long currentSize;	// G=0x326fcf99; 
@property(assign, nonatomic) long long maxEntrySize;	// G=0x326fcee1; S=0x326fcf39; 
@property(assign, nonatomic) long long maxSize;	// G=0x326fce25; S=0x326fce7d; 
+ (id)assetCacheWithURL:(id)url;	// 0x326fcc75
- (id)initWithURL:(id)url;	// 0x326fccbd
// declared property getter: - (id)URL;	// 0x326fcff1
- (id)allKeys;	// 0x326fd0a1
// declared property getter: - (long long)currentSize;	// 0x326fcf99
- (void)dealloc;	// 0x326fcd71
- (void)finalize;	// 0x326fcde1
// declared property getter: - (long long)maxEntrySize;	// 0x326fcee1
// declared property getter: - (long long)maxSize;	// 0x326fce25
- (void)removeEntryForKey:(id)key;	// 0x326fd011
// declared property setter: - (void)setMaxEntrySize:(long long)size;	// 0x326fcf39
// declared property setter: - (void)setMaxSize:(long long)size;	// 0x326fce7d
- (long long)sizeOfEntryForKey:(id)key;	// 0x326fd04d
@end

