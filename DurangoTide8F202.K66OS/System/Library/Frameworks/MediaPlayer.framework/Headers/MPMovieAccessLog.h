/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSData;

@interface MPMovieAccessLog : NSObject <NSCopying> {
	MPMovieAccessLogInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMovieAccessLogInternal _internal;	// G=0x31d66551; S=0x31d66561; @synthesize
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x31d6cb1d; 
@property(readonly, assign, nonatomic) NSData *extendedLogData;	// G=0x31d689f5; 
@property(readonly, assign, nonatomic) unsigned extendedLogDataStringEncoding;	// G=0x31d689d5; 
- (id)_initWithAVItemAccessLog:(id)avitemAccessLog;	// 0x31d68a71
// declared property getter: - (MPMovieAccessLogInternal)_internal;	// 0x31d66551
- (id)copyWithZone:(NSZone *)zone;	// 0x31d68a15
- (void)dealloc;	// 0x31d68a29
// declared property getter: - (id)events;	// 0x31d6cb1d
// declared property getter: - (id)extendedLogData;	// 0x31d689f5
// declared property getter: - (unsigned)extendedLogDataStringEncoding;	// 0x31d689d5
// declared property setter: - (void)set_internal:(MPMovieAccessLogInternal)internal;	// 0x31d66561
@end
