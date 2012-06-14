/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NflxhlsAuthenticationPrimer, NSCondition;

__attribute__((visibility("hidden")))
@interface HTTPServer : NSObject {
@private
	NflxhlsAuthenticationPrimer *primer;	// 4 = 0x4
	BOOL serverRunning;	// 8 = 0x8
	BOOL serverStopping;	// 9 = 0x9
	NSCondition *stopCondition;	// 12 = 0xc
	BOOL serverRunning_;	// 16 = 0x10
}
@property(assign) BOOL serverRunning;	// G=0x368f10e1; S=0x368f10f1; @synthesize=serverRunning_
+ (void)cleanUp;	// 0x368f0cc5
+ (id)instance;	// 0x368f0c7d
- (id)init;	// 0x368f08ed
- (void)dealloc;	// 0x368f0951
- (void)debugHTTP:(BOOL)http;	// 0x368f0d01
- (void)httpServerMain:(id)main;	// 0x368f0d29
// declared property getter: - (BOOL)serverRunning;	// 0x368f10e1
// declared property setter: - (void)setServerRunning:(BOOL)running;	// 0x368f10f1
- (void)start;	// 0x368f099d
- (void)stop;	// 0x368f0b45
@end

