/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSTimer.h> // Unknown library
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSCFTimer : NSTimer {
}
@property(retain) id fireDate;	// G=0x35e7748d; S=0x35e774bd; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x35dd4079
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x35e7746d
- (id)init;	// 0x35e776c1
- (id)initWithFireDate:(id)fireDate interval:(double)interval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x35dd40a1
- (unsigned long)_cfTypeID;	// 0x35e776bd
- (BOOL)allowsWeakReference;	// 0x35e773fd
- (void)finalize;	// 0x35e77429
- (void)fire;	// 0x35e774fd
// converted property getter: - (id)fireDate;	// 0x35e7748d
- (unsigned)hash;	// 0x35e773e5
- (void)invalidate;	// 0x35e77489
- (BOOL)isEqual:(id)equal;	// 0x35e773cd
- (BOOL)isValid;	// 0x35e77471
- (oneway void)release;	// 0x35e773f9
- (id)retain;	// 0x35e773e9
- (unsigned)retainCount;	// 0x35e77425
- (BOOL)retainWeakReference;	// 0x35e77411
// converted property setter: - (void)setFireDate:(id)date;	// 0x35e774bd
- (double)timeInterval;	// 0x35e77485
- (id)userInfo;	// 0x35e774e5
@end

