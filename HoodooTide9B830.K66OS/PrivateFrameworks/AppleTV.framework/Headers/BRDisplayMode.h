/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class CADisplayMode;

@interface BRDisplayMode : NSObject {
@private
	CADisplayMode *_displayMode;	// 4 = 0x4
	double _refreshRate;	// 8 = 0x8
	BOOL _isVirtual;	// 16 = 0x10
}
@property(readonly, retain) CADisplayMode *displayMode;	// G=0x329af7b1; converted property
@property(readonly, assign) BOOL isVirtual;	// G=0x329af829; converted property
@property(readonly, assign) double refreshRate;	// G=0x329af811; converted property
- (id)initWithDisplayMode:(id)displayMode refreshRate:(double)rate isVirtual:(BOOL)aVirtual;	// 0x329af5a5
- (unsigned long)bitsPerPixel;	// 0x329af809
- (void)dealloc;	// 0x329af639
- (id)description;	// 0x329af745
// converted property getter: - (id)displayMode;	// 0x329af7b1
- (unsigned long)height;	// 0x329af7e9
- (BOOL)interlaced;	// 0x329af80d
- (BOOL)isEqual:(id)equal;	// 0x329af685
// converted property getter: - (BOOL)isVirtual;	// 0x329af829
// converted property getter: - (double)refreshRate;	// 0x329af811
- (BOOL)safe;	// 0x329af7c1
- (BOOL)safeForHardware;	// 0x329af7c5
- (unsigned long)width;	// 0x329af7c9
@end

