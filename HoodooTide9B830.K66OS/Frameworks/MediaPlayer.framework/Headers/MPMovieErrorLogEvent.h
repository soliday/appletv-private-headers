/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "NSCopying.h"

@class NSString, NSDate;

@interface MPMovieErrorLogEvent : NSObject <NSCopying> {
@private
	MPMovieErrorLogEventInternal _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x3463342d; 
@property(assign, nonatomic) MPMovieErrorLogEventInternal _internal;	// G=0x346334ed; S=0x34633501; @synthesize
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x3463340d; 
@property(readonly, assign, nonatomic) NSString *errorComment;	// G=0x346334cd; 
@property(readonly, assign, nonatomic) NSString *errorDomain;	// G=0x346334ad; 
@property(readonly, assign, nonatomic) int errorStatusCode;	// G=0x3463348d; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x3463346d; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x3463344d; 
// declared property getter: - (id)URI;	// 0x3463342d
- (id)_initWithAVItemErrorLogEvent:(id)avitemErrorLogEvent;	// 0x3463335d
// declared property getter: - (MPMovieErrorLogEventInternal)_internal;	// 0x346334ed
- (id)copyWithZone:(NSZone *)zone;	// 0x346333fd
// declared property getter: - (id)date;	// 0x3463340d
- (void)dealloc;	// 0x346333b1
// declared property getter: - (id)errorComment;	// 0x346334cd
// declared property getter: - (id)errorDomain;	// 0x346334ad
// declared property getter: - (int)errorStatusCode;	// 0x3463348d
// declared property getter: - (id)playbackSessionID;	// 0x3463346d
// declared property getter: - (id)serverAddress;	// 0x3463344d
// declared property setter: - (void)set_internal:(MPMovieErrorLogEventInternal)internal;	// 0x34633501
@end

