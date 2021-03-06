/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface __NSHostExtraIvars : NSObject {
@private
	NSString *thingToResolve;	// 4 = 0x4
	int resolveType;	// 8 = 0x8
	dispatch_queue_s *resolveQueue;	// 12 = 0xc
	dispatch_queue_s *cacheAccessQueue;	// 16 = 0x10
	dispatch_queue_s *callbackQueue;	// 20 = 0x14
	BOOL startedResolving;	// 24 = 0x18
}
@property(readonly, assign) dispatch_queue_s *cacheAccessQueue;	// G=0x35e47f29; @synthesize
@property(readonly, assign) dispatch_queue_s *callbackQueue;	// G=0x35e47f39; @synthesize
@property(readonly, assign) dispatch_queue_s *resolveQueue;	// G=0x35e47f19; @synthesize
@property(assign, nonatomic) int resolveType;	// G=0x35e47ec5; S=0x35e47ed5; @synthesize
@property(assign) BOOL startedResolving;	// G=0x35e47f49; S=0x35e47f59; @synthesize
@property(retain, nonatomic) NSString *thingToResolve;	// G=0x35e47ee5; S=0x35e47ef5; @synthesize
- (id)init;	// 0x35e47d61
// declared property getter: - (dispatch_queue_s *)cacheAccessQueue;	// 0x35e47f29
// declared property getter: - (dispatch_queue_s *)callbackQueue;	// 0x35e47f39
- (void)cleanup;	// 0x35e47de5
- (void)dealloc;	// 0x35e47e65
- (void)finalize;	// 0x35e47e25
// declared property getter: - (dispatch_queue_s *)resolveQueue;	// 0x35e47f19
// declared property getter: - (int)resolveType;	// 0x35e47ec5
// declared property setter: - (void)setResolveType:(int)type;	// 0x35e47ed5
// declared property setter: - (void)setStartedResolving:(BOOL)resolving;	// 0x35e47f59
// declared property setter: - (void)setThingToResolve:(id)resolve;	// 0x35e47ef5
// declared property getter: - (BOOL)startedResolving;	// 0x35e47f49
// declared property getter: - (id)thingToResolve;	// 0x35e47ee5
@end

