/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSOutputStream.h"


__attribute__((visibility("hidden")))
@interface __NSCFOutputStream : NSOutputStream {
}
@property(assign) id delegate;	// G=0x31a2c73d; S=0x31a2c741; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x31a2c5f9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31a2c5f5
- (id)initToBuffer:(char *)buffer capacity:(unsigned)capacity;	// 0x31a2c635
- (id)initToFileAtPath:(id)path append:(BOOL)append;	// 0x31a2c665
- (id)initToMemory;	// 0x31a2c5fd
- (id)initWithURL:(id)url append:(BOOL)append;	// 0x31a2c6d9
- (BOOL)_isDeallocating;	// 0x31a2c5a1
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x31a2c8ad
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x31a2c895
- (BOOL)_tryRetain;	// 0x31a2c58d
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x31a2c8b5
- (void)close;	// 0x31a2c739
// converted property getter: - (id)delegate;	// 0x31a2c73d
- (void)finalize;	// 0x31a2c5b1
- (BOOL)hasSpaceAvailable;	// 0x31a2c889
- (unsigned)hash;	// 0x31a2c575
- (BOOL)isEqual:(id)equal;	// 0x31a2c55d
- (void)open;	// 0x31a2c735
- (id)propertyForKey:(id)key;	// 0x31a2c7bd
- (oneway void)release;	// 0x31a2c589
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x31a2c825
- (id)retain;	// 0x31a2c579
- (unsigned)retainCount;	// 0x31a2c5ad
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x31a2c7f9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31a2c741
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x31a2c7e9
- (id)streamError;	// 0x31a2c855
- (unsigned)streamStatus;	// 0x31a2c851
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x31a2c881
@end
