/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSCachedURLResponseInternal;

@interface NSCachedURLResponse : NSObject <NSCoding, NSCopying> {
@private
	NSCachedURLResponseInternal *_internal;	// 4 = 0x4
}
- (id)initWithCoder:(id)coder;	// 0x310a46a5
- (id)initWithResponse:(id)response data:(id)data;	// 0x310a4509
- (id)initWithResponse:(id)response data:(id)data userInfo:(id)info storagePolicy:(unsigned)policy;	// 0x31031cb5
- (CFCachedURLResponseRef)_CFCachedURLResponse;	// 0x31031edd
- (void)_deallocInternalCFCachedURLResponse;	// 0x310a43f9
- (id)_initWithCFCachedURLResponse:(CFCachedURLResponseRef)cfcachedURLResponse;	// 0x31008f09
- (void)_reestablishInternalCFCachedURLResponse:(CFCachedURLResponseRef)response;	// 0x310a3ac5
- (id)copyWithZone:(NSZone *)zone;	// 0x310a44f5
- (id)data;	// 0x310a4891
- (void)dealloc;	// 0x31009141
- (void)encodeWithCoder:(id)coder;	// 0x310a4435
- (id)response;	// 0x31034f2d
- (unsigned)storagePolicy;	// 0x31009099
- (id)userInfo;	// 0x310a48b5
@end

