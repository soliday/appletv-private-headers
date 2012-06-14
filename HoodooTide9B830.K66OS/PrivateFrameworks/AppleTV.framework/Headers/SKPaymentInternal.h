/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SKPaymentInternal : NSObject <NSCopying> {
@private
	NSString *_productIdentifier;	// 4 = 0x4
	int _quantity;	// 8 = 0x8
	NSData *_requestData;	// 12 = 0xc
	NSDictionary *_requestParameters;	// 16 = 0x10
}
- (id)init;	// 0x32b755e1
- (id)copyWithZone:(NSZone *)zone;	// 0x32b756b5
- (void)dealloc;	// 0x32b75621
@end

