/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSData;

__attribute__((visibility("hidden")))
@interface DRMData : NSObject {
@private
	NSString *drmSystemID;	// 4 = 0x4
	NSData *data;	// 8 = 0x8
}
+ (void)initialize;	// 0x3071c80c
+ (id)netflixKeyEnvelopeID;	// 0x3071c678
+ (id)playReadyID;	// 0x3071c664
- (id)initWithBuffer:(id)buffer length:(unsigned)length;	// 0x3071c730
- (void)dealloc;	// 0x3071c6b4
- (id)getDRMSystemID;	// 0x3071c68c
- (id)getData;	// 0x3071c6a0
@end

