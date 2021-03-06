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
@property(assign) id delegate;	// G=0x3276273d; S=0x32762741; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x327625f9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x327625f5
- (id)initToBuffer:(char *)buffer capacity:(unsigned)capacity;	// 0x32762635
- (id)initToFileAtPath:(id)path append:(BOOL)append;	// 0x32762665
- (id)initToMemory;	// 0x327625fd
- (id)initWithURL:(id)url append:(BOOL)append;	// 0x327626d9
- (BOOL)_isDeallocating;	// 0x327625a1
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x327628ad
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x32762895
- (BOOL)_tryRetain;	// 0x3276258d
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x327628b5
- (void)close;	// 0x32762739
// converted property getter: - (id)delegate;	// 0x3276273d
- (void)finalize;	// 0x327625b1
- (BOOL)hasSpaceAvailable;	// 0x32762889
- (unsigned)hash;	// 0x32762575
- (BOOL)isEqual:(id)equal;	// 0x3276255d
- (void)open;	// 0x32762735
- (id)propertyForKey:(id)key;	// 0x327627bd
- (oneway void)release;	// 0x32762589
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x32762825
- (id)retain;	// 0x32762579
- (unsigned)retainCount;	// 0x327625ad
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x327627f9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32762741
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x327627e9
- (id)streamError;	// 0x32762855
- (unsigned)streamStatus;	// 0x32762851
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x32762881
@end

