/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSString;

@interface SSItemMedia : NSObject {
@private
	int _duration;	// 4 = 0x4
	int _fullDuration;	// 8 = 0x8
	long long _mediaFileSize;	// 12 = 0xc
	NSString *_mediaKind;	// 20 = 0x14
	BOOL _protected;	// 24 = 0x18
	NSURL *_url;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x31551a51; @synthesize=_url
@property(readonly, assign, nonatomic) int durationInMilliseconds;	// G=0x315519d5; @synthesize=_duration
@property(readonly, assign, nonatomic) int fullDurationInMilliseconds;	// G=0x315519e5; @synthesize=_fullDuration
@property(readonly, assign, nonatomic) long long mediaFileSize;	// G=0x315519f5; @synthesize=_mediaFileSize
@property(copy, nonatomic) NSString *mediaKind;	// G=0x31551a0d; S=0x31551a1d; @synthesize=_mediaKind
@property(readonly, assign, nonatomic, getter=isProtectedMedia) BOOL protectedMedia;	// G=0x31551a41; @synthesize=_protected
- (id)init;	// 0x315515d1
- (id)initWithStoreOfferDictionary:(id)storeOfferDictionary;	// 0x31551781
// declared property getter: - (id)URL;	// 0x31551a51
- (void)dealloc;	// 0x31551611
- (id)description;	// 0x31551671
// declared property getter: - (int)durationInMilliseconds;	// 0x315519d5
// declared property getter: - (int)fullDurationInMilliseconds;	// 0x315519e5
- (unsigned)hash;	// 0x315516e9
- (BOOL)isEqual:(id)equal;	// 0x31551709
// declared property getter: - (BOOL)isProtectedMedia;	// 0x31551a41
// declared property getter: - (long long)mediaFileSize;	// 0x315519f5
// declared property getter: - (id)mediaKind;	// 0x31551a0d
// declared property setter: - (void)setMediaKind:(id)kind;	// 0x31551a1d
@end

