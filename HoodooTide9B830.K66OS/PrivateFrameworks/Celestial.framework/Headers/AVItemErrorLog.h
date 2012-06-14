/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSArray, AVItemErrorLogInternal;

@interface AVItemErrorLog : NSObject <NSCopying> {
@private
	AVItemErrorLogInternal *_playerItemErrorLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x3071cf6d; 
- (id)init;	// 0x3071cc49
- (id)initWithLogArray:(id)logArray;	// 0x3071cce1
- (id)copyWithZone:(NSZone *)zone;	// 0x3071ce19
- (void)dealloc;	// 0x3071ce6d
- (id)description;	// 0x3071cd35
// declared property getter: - (id)events;	// 0x3071cf6d
- (id)extendedLogData;	// 0x3071cedd
- (unsigned)extendedLogDataStringEncoding;	// 0x3071cf69
- (void)finalize;	// 0x3071ce29
@end

