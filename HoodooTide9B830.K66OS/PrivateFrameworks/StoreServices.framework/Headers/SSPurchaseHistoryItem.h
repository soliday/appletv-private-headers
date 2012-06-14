/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSCoding.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSMutableDictionary;

@interface SSPurchaseHistoryItem : NSObject <SSCoding, NSCopying> {
	NSMutableDictionary *_properties;	// 4 = 0x4
}
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x3052ae51
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x3052af11
- (id)copyPropertyListEncoding;	// 0x3052adb9
- (id)copyWithZone:(NSZone *)zone;	// 0x3052ad45
- (void *)copyXPCEncoding;	// 0x3052ae1d
- (void)dealloc;	// 0x3052abbd
- (id)description;	// 0x3052afd5
- (unsigned)hash;	// 0x3052b03d
- (BOOL)isEqual:(id)equal;	// 0x3052b05d
- (void)setValue:(id)value forProperty:(id)property;	// 0x3052ac09
- (id)valueForProperty:(id)property;	// 0x3052acfd
@end
