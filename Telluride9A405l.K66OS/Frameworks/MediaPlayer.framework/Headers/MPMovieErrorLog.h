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

@interface MPMovieErrorLog : NSObject <NSCopying> {
@private
	MPMovieErrorLogInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMovieErrorLogInternal _internal;	// G=0x33bafcb5; S=0x33bafcc9; @synthesize
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x33bafb51; 
@property(readonly, assign, nonatomic) NSData *extendedLogData;	// G=0x33bafb11; 
@property(readonly, assign, nonatomic) unsigned extendedLogDataStringEncoding;	// G=0x33bafb31; 
- (id)_initWithAVItemErrorLog:(id)avitemErrorLog;	// 0x33bafa49
// declared property getter: - (MPMovieErrorLogInternal)_internal;	// 0x33bafcb5
- (id)copyWithZone:(NSZone *)zone;	// 0x33bafb01
- (void)dealloc;	// 0x33bafab5
// declared property getter: - (id)events;	// 0x33bafb51
// declared property getter: - (id)extendedLogData;	// 0x33bafb11
// declared property getter: - (unsigned)extendedLogDataStringEncoding;	// 0x33bafb31
// declared property setter: - (void)set_internal:(MPMovieErrorLogInternal)internal;	// 0x33bafcc9
@end

