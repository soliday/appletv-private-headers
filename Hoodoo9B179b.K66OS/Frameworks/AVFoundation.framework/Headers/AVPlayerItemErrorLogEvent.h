/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVPlayerItemErrorLogEventInternal, NSDate, NSString;

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying> {
@private
	AVPlayerItemErrorLogEventInternal *_playerItemErrorLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x30b24419; 
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x30b243a5; 
@property(readonly, assign, nonatomic) NSString *errorComment;	// G=0x30b24645; 
@property(readonly, assign, nonatomic) NSString *errorDomain;	// G=0x30b245d1; 
@property(readonly, assign, nonatomic) int errorStatusCode;	// G=0x30b24575; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x30b24501; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x30b2448d; 
- (id)init;	// 0x30b241f5
- (id)initWithDictionary:(id)dictionary;	// 0x30b2428d
// declared property getter: - (id)URI;	// 0x30b24419
- (id)copyWithZone:(NSZone *)zone;	// 0x30b242e1
// declared property getter: - (id)date;	// 0x30b243a5
- (void)dealloc;	// 0x30b24335
// declared property getter: - (id)errorComment;	// 0x30b24645
// declared property getter: - (id)errorDomain;	// 0x30b245d1
// declared property getter: - (int)errorStatusCode;	// 0x30b24575
- (void)finalize;	// 0x30b242f1
// declared property getter: - (id)playbackSessionID;	// 0x30b24501
// declared property getter: - (id)serverAddress;	// 0x30b2448d
@end

