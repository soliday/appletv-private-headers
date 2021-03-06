/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSCondition, NSThread, TSUMemoryWatcher, TSURetainedPointerKeyDictionary, TSUPointerKeyDictionary;
@protocol TSUFlushable;

__attribute__((visibility("hidden")))
@interface TSUFlushingManager : NSObject {
@private
	TSURetainedPointerKeyDictionary *_objects;	// 4 = 0x4
	set<TSUFlushableObjectInfo*,TSUFlushableObjectInfoPointerFlushingOrderLess,std::allocator<TSUFlushableObjectInfo*> > *_sortedObjects;	// 8 = 0x8
	set<TSUFlushableObjectInfo*,TSUFlushableObjectInfoPointerTimeStampLess,std::allocator<TSUFlushableObjectInfo*> > *_sortedNewObjects;	// 12 = 0xc
	TSUPointerKeyDictionary *_inactiveObjects;	// 16 = 0x10
	unsigned _clock;	// 20 = 0x14
	BOOL _alwaysFlushing;	// 24 = 0x18
	BOOL _stopFlushing;	// 25 = 0x19
	BOOL _stopFlushingWhenQueueEmpty;	// 26 = 0x1a
	BOOL _isFlushing;	// 27 = 0x1b
	id<TSUFlushable> _flushingObject;	// 28 = 0x1c
	BOOL _isWaitingForFlush;	// 32 = 0x20
	NSCondition *_cond;	// 36 = 0x24
	NSCondition *_isFlushingCond;	// 40 = 0x28
	TSUMemoryWatcher *_memoryWatcher;	// 44 = 0x2c
	NSThread *_bgThread;	// 48 = 0x30
}
+ (id)_singletonAlloc;	// 0x355cef05
+ (id)allocWithZone:(NSZone *)zone;	// 0x357b3361
+ (id)sharedManager;	// 0x355ced79
- (id)init;	// 0x355cef35
- (void)_backgroundThread:(id)thread;	// 0x357b40dd
- (void)_didUseObject:(id)object;	// 0x357b3f25
- (void)_flushAllEligible;	// 0x357b3b69
- (void)_startFlushingObjects;	// 0x357b3c85
- (void)_stopFlushingObjects;	// 0x357b3d55
- (void)addObject:(id)object;	// 0x355d32a1
- (void)advanceClock;	// 0x355d34ad
- (id)autorelease;	// 0x357b3355
- (BOOL)controlsActiveObject:(id)object;	// 0x357b3ebd
- (BOOL)controlsInactiveObject:(id)object;	// 0x357b3ef1
- (id)copyWithZone:(NSZone *)zone;	// 0x357b3359
- (void)dealloc;	// 0x357b45b5
- (void)didEnterBackground;	// 0x357b3b59
- (void)doneWithObject:(id)object;	// 0x357b3649
- (TSUFlushableObjectInfo *)eraseInfoForObject:(id)object;	// 0x355cf495
- (void)insertObjectInfo:(TSUFlushableObjectInfo *)info;	// 0x357b4009
- (BOOL)isNewObject:(TSUFlushableObjectInfo *)object;	// 0x355d8631
- (void)memoryLevelDecreased:(int)decreased was:(int)was;	// 0x357b440d
- (void)memoryLevelIncreased:(int)increased was:(int)was;	// 0x357b44e1
- (void)protectObject:(id)object;	// 0x357b33e9
- (void)release;	// 0x357b3351
- (void)removeObject:(id)object;	// 0x355cf291
- (id)retain;	// 0x357b3345
- (unsigned)retainCount;	// 0x357b3349
- (void)safeToFlush:(id)flush wasAccessed:(BOOL)accessed;	// 0x357b399d
- (void)stopProtectingObject:(id)object;	// 0x357b34dd
- (void)transferNewObjects;	// 0x355d34d1
- (void)unsafeToFlush:(id)flush;	// 0x357b373d
- (void)willEnterForeground;	// 0x357b335d
@end

