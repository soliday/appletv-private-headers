/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface OADBlipEffect : NSObject <NSCopying> {
@private
	int mType;	// 4 = 0x4
}
- (id)initWithType:(int)type;	// 0x311aaeb5
- (id)copyWithZone:(NSZone *)zone;	// 0x31381731
- (unsigned)hash;	// 0x31381749
- (BOOL)isEqual:(id)equal;	// 0x31381829
- (void)setStyleColor:(id)color;	// 0x31381745
- (int)type;	// 0x31381735
@end

