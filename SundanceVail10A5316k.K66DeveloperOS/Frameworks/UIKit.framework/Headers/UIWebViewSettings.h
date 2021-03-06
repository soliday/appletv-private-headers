/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSString;

@interface UIWebViewSettings : NSObject <NSCopying> {
@private
	unsigned _dataDetectorTypes;	// 4 = 0x4
	BOOL _allowsInlineMediaPlayback;	// 8 = 0x8
	BOOL _mediaPlaybackRequiresUserAction;	// 9 = 0x9
	BOOL _mediaPlaybackAllowsAirPlay;	// 10 = 0xa
	BOOL _suppressesIncrementalRendering;	// 11 = 0xb
	NSString *_customUserAgent;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL allowsInlineMediaPlayback;	// G=0x304b109d; S=0x304b10ad; @synthesize=_allowsInlineMediaPlayback
@property(copy, nonatomic) NSString *customUserAgent;	// G=0x304b111d; S=0x304b1131; @synthesize=_customUserAgent
@property(assign, nonatomic) unsigned dataDetectorTypes;	// G=0x304b107d; S=0x304b108d; @synthesize=_dataDetectorTypes
@property(assign, nonatomic) BOOL mediaPlaybackAllowsAirPlay;	// G=0x304b10dd; S=0x304b10ed; @synthesize=_mediaPlaybackAllowsAirPlay
@property(assign, nonatomic) BOOL mediaPlaybackRequiresUserAction;	// G=0x304b10bd; S=0x304b10cd; @synthesize=_mediaPlaybackRequiresUserAction
@property(assign, nonatomic) BOOL suppressesIncrementalRendering;	// G=0x304b10fd; S=0x304b110d; @synthesize=_suppressesIncrementalRendering
+ (id)defaultSettings;	// 0x304b0bcd
- (id)init;	// 0x304b0a9d
- (id)_encodeAsDictionary;	// 0x304b0ec5
- (id)_initWithDictionary:(id)dictionary;	// 0x304b0c05
// declared property getter: - (BOOL)allowsInlineMediaPlayback;	// 0x304b109d
- (id)copyWithZone:(NSZone *)zone;	// 0x304b102d
// declared property getter: - (id)customUserAgent;	// 0x304b111d
// declared property getter: - (unsigned)dataDetectorTypes;	// 0x304b107d
- (void)dealloc;	// 0x304b0b81
// declared property getter: - (BOOL)mediaPlaybackAllowsAirPlay;	// 0x304b10dd
// declared property getter: - (BOOL)mediaPlaybackRequiresUserAction;	// 0x304b10bd
// declared property setter: - (void)setAllowsInlineMediaPlayback:(BOOL)playback;	// 0x304b10ad
// declared property setter: - (void)setCustomUserAgent:(id)agent;	// 0x304b1131
// declared property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x304b108d
// declared property setter: - (void)setMediaPlaybackAllowsAirPlay:(BOOL)play;	// 0x304b10ed
// declared property setter: - (void)setMediaPlaybackRequiresUserAction:(BOOL)action;	// 0x304b10cd
// declared property setter: - (void)setSuppressesIncrementalRendering:(BOOL)rendering;	// 0x304b110d
// declared property getter: - (BOOL)suppressesIncrementalRendering;	// 0x304b10fd
@end

