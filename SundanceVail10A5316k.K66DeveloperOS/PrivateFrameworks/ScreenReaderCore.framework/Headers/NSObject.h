/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library


@interface NSObject (SCRCThread)
+ (double)performSelector:(SEL)selector withThreadKey:(id)threadKey count:(unsigned long)count objects:(id)objects;	// 0x3347bc71
+ (double)performSelector:(SEL)selector withThreadKey:(id)threadKey waitTime:(double)time cancelMask:(unsigned long)mask count:(unsigned long)count objects:(id)objects;	// 0x3347d821
- (id)_getRetainedValueForKeyPath:(id)keyPath forThreadKey:(id)threadKey waitTime:(double)time copy:(BOOL)copy;	// 0x3347dd29
- (id)_getRetainedValueForKeyPathOnMainThread:(id)keyPathOnMainThread copy:(BOOL)copy;	// 0x3347c9e1
- (void)_scr_safeGetValueForBlock:(id)block lock:(id)lock;	// 0x3347dc69
- (void)_scr_safeGetValueForKeyPath:(id)keyPath;	// 0x3347caed
- (void)_scr_safeGetValueForKeyPath:(id)keyPath lock:(id)lock;	// 0x3347cb01
- (void)_scr_safeGetValueForSelector:(id)selector lock:(id)lock;	// 0x3347daf9
- (id)copyValueForKeyPath:(id)keyPath forThreadKey:(id)threadKey;	// 0x3347df05
- (id)copyValueForKeyPath:(id)keyPath forThreadKey:(id)threadKey waitTime:(double)time;	// 0x3347df2d
- (id)copyValueForKeyPathOnMainThread:(id)keyPathOnMainThread;	// 0x3347ce6d
- (id)performSelector:(SEL)selector withObjectsAsArray:(id)objectsAsArray;	// 0x3347d871
- (double)performSelector:(SEL)selector withThreadKey:(id)threadKey count:(unsigned long)count objects:(id)objects;	// 0x3347a591
- (double)performSelector:(SEL)selector withThreadKey:(id)threadKey waitTime:(double)time cancelMask:(unsigned long)mask count:(unsigned long)count objects:(id)objects;	// 0x3347c539
- (id)threadDescription;	// 0x3347d805
- (id)valueForBlock:(id)block forThreadKey:(id)threadKey waitTime:(double)time;	// 0x3347e151
- (id)valueForKeyPath:(id)keyPath forThreadKey:(id)threadKey;	// 0x3347dea1
- (id)valueForKeyPath:(id)keyPath forThreadKey:(id)threadKey waitTime:(double)time;	// 0x3347dec9
- (id)valueForKeyPathOnMainThread:(id)keyPathOnMainThread;	// 0x3347c9b1
- (id)valueForSelector:(SEL)selector forThreadKey:(id)threadKey waitTime:(double)time copyValue:(BOOL)value withObjects:(id)objects;	// 0x3347df59
@end
