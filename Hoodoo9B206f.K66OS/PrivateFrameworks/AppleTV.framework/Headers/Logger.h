/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface Logger : NSObject {
@private
	NSMutableSet *traceAreas_;	// 4 = 0x4
	NSMutableArray *traceAreasStack_;	// 8 = 0x8
	BOOL logAll_;	// 12 = 0xc
	BOOL logEnabled_;	// 13 = 0xd
}
@property(assign, nonatomic) BOOL logAll;	// G=0x36931f7d; S=0x36931f8d; @synthesize=logAll_
@property(assign, nonatomic) BOOL logEnabled;	// G=0x36931f5d; S=0x36931f6d; @synthesize=logEnabled_
@property(retain, nonatomic) NSMutableSet *traceAreas;	// G=0x36931f9d; S=0x36931fad; @synthesize=traceAreas_
@property(retain, nonatomic) NSMutableArray *traceAreasStack;	// G=0x36931fd1; S=0x36931fe1; @synthesize=traceAreasStack_
+ (id)sharedInstance;	// 0x36931a15
- (id)init;	// 0x36931a5d
- (void)addTraceArea:(id)area;	// 0x36931c99
- (void)addTraceAreaWithSet:(id)set;	// 0x36931cc9
- (void)dealloc;	// 0x36931b05
- (void)log:(id)log function:(const char *)function line:(int)line message:(id)message;	// 0x36931e49
- (void)log:(id)log message:(id)message;	// 0x36931d51
// declared property getter: - (BOOL)logAll;	// 0x36931f7d
// declared property getter: - (BOOL)logEnabled;	// 0x36931f5d
- (void)popTraceAreas;	// 0x36931c29
- (void)pushTraceAreas;	// 0x36931b7d
- (void)removeAllTraceAreas;	// 0x36931d29
- (void)removeTraceArea:(id)area;	// 0x36931cf9
// declared property setter: - (void)setLogAll:(BOOL)all;	// 0x36931f8d
// declared property setter: - (void)setLogEnabled:(BOOL)enabled;	// 0x36931f6d
// declared property setter: - (void)setTraceAreas:(id)areas;	// 0x36931fad
// declared property setter: - (void)setTraceAreasStack:(id)stack;	// 0x36931fe1
// declared property getter: - (id)traceAreas;	// 0x36931f9d
// declared property getter: - (id)traceAreasStack;	// 0x36931fd1
@end

