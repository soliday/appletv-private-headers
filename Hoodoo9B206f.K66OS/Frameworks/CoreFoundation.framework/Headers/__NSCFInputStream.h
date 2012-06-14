/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSInputStream.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFInputStream : NSInputStream {
}
@property(assign) id delegate;	// G=0x31a2c3b9; S=0x31a2c3bd; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x31a2c2e9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31a2c2e5
- (id)initWithData:(id)data;	// 0x31a2c2ed
- (id)initWithFileAtPath:(id)path;	// 0x31a2c319
- (id)initWithURL:(id)url;	// 0x31a2c381
- (BOOL)_isDeallocating;	// 0x31a2c291
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x31a2c54d
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x31a2c535
- (BOOL)_tryRetain;	// 0x31a2c27d
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x31a2c555
- (void)close;	// 0x31a2c3b5
// converted property getter: - (id)delegate;	// 0x31a2c3b9
- (void)finalize;	// 0x31a2c2a1
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x31a2c505
- (BOOL)hasBytesAvailable;	// 0x31a2c529
- (unsigned)hash;	// 0x31a2c265
- (BOOL)isEqual:(id)equal;	// 0x31a2c24d
- (void)open;	// 0x31a2c3b1
- (id)propertyForKey:(id)key;	// 0x31a2c439
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x31a2c4fd
- (oneway void)release;	// 0x31a2c279
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x31a2c4a1
- (id)retain;	// 0x31a2c269
- (unsigned)retainCount;	// 0x31a2c29d
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x31a2c475
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31a2c3bd
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x31a2c465
- (id)streamError;	// 0x31a2c4d1
- (unsigned)streamStatus;	// 0x31a2c4cd
@end

