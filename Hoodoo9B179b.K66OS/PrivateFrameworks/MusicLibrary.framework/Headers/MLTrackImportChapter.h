/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSData, NSURL, NSString;

@interface MLTrackImportChapter : NSObject <NSCopying> {
@private
	NSData *_imageData;	// 4 = 0x4
	NSString *_imageCacheKey;	// 8 = 0x8
	unsigned _startTimeInMilliseconds;	// 12 = 0xc
	NSString *_title;	// 16 = 0x10
	NSURL *_url;	// 20 = 0x14
	NSString *_urlTitle;	// 24 = 0x18
}
@property(copy, nonatomic) NSURL *URL;	// G=0x30040d99; S=0x30040da9; @synthesize=_url
@property(copy, nonatomic) NSString *URLTitle;	// G=0x30040dcd; S=0x30040ddd; @synthesize=_urlTitle
@property(copy, nonatomic) NSString *imageCacheKey;	// G=0x30040e01; S=0x30040e11; @synthesize=_imageCacheKey
@property(copy, nonatomic) NSData *imageData;	// G=0x30040d11; S=0x30040d21; @synthesize=_imageData
@property(assign, nonatomic) unsigned startTimeInMilliseconds;	// G=0x30040d45; S=0x30040d55; @synthesize=_startTimeInMilliseconds
@property(copy, nonatomic) NSString *title;	// G=0x30040d65; S=0x30040d75; @synthesize=_title
// declared property getter: - (id)URL;	// 0x30040d99
// declared property getter: - (id)URLTitle;	// 0x30040dcd
- (int)compare:(id)compare;	// 0x30040bc1
- (id)copyWithZone:(NSZone *)zone;	// 0x30040ad5
- (void)dealloc;	// 0x3004065d
- (id)description;	// 0x300406f9
// declared property getter: - (id)imageCacheKey;	// 0x30040e01
// declared property getter: - (id)imageData;	// 0x30040d11
- (BOOL)isEqualIgnoringTimesAndTitle:(id)title;	// 0x30040bf9
// declared property setter: - (void)setImageCacheKey:(id)key;	// 0x30040e11
// declared property setter: - (void)setImageData:(id)data;	// 0x30040d21
// declared property setter: - (void)setStartTimeInMilliseconds:(unsigned)milliseconds;	// 0x30040d55
// declared property setter: - (void)setTitle:(id)title;	// 0x30040d75
// declared property setter: - (void)setURL:(id)url;	// 0x30040da9
// declared property setter: - (void)setURLTitle:(id)title;	// 0x30040ddd
// declared property getter: - (unsigned)startTimeInMilliseconds;	// 0x30040d45
// declared property getter: - (id)title;	// 0x30040d65
@end

