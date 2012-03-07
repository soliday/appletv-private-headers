/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "NSCopying.h"
#import "CoreFoundation-Structs.h"


@interface NSBlock : NSObject <NSCopying> {
}
- (BOOL)_isDeallocating;	// 0x307ab9d9
- (BOOL)_tryRetain;	// 0x307ab9d5
- (id)copy;	// 0x306eb281
- (id)copyWithZone:(NSZone *)zone;	// 0x306eb59d
- (void)invoke;	// 0x307ab969
- (void)performAfterDelay:(double)delay;	// 0x307ab96d
@end
