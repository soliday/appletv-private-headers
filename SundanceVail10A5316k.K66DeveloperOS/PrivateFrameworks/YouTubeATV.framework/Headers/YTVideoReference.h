/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import <NSObject.h> // Unknown library

@class NSURL;

@interface YTVideoReference : NSObject {
	NSURL *_contentURL;	// 4 = 0x4
	unsigned _duration;	// 8 = 0x8
	int _profile;	// 12 = 0xc
}
@property(readonly, retain) NSURL *contentURL;	// G=0x35e6955d; converted property
@property(readonly, assign) unsigned duration;	// G=0x35e6956d; converted property
@property(readonly, assign) int profile;	// G=0x35e6957d; converted property
- (id)initFromArchiveDictionary:(id)archiveDictionary;	// 0x35e692b1
- (id)initWithContentURL:(id)contentURL duration:(unsigned)duration profile:(int)profile;	// 0x35e69221
- (id)archiveDictionary;	// 0x35e693e9
// converted property getter: - (id)contentURL;	// 0x35e6955d
- (void)dealloc;	// 0x35e6939d
- (id)description;	// 0x35e694b9
// converted property getter: - (unsigned)duration;	// 0x35e6956d
// converted property getter: - (int)profile;	// 0x35e6957d
@end

