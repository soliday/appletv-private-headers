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

@class NSData, NSError;

@interface SSPlayInfoResponse : NSObject <SSCoding, NSCopying> {
@private
	NSError *_error;	// 4 = 0x4
	NSData *_playInfoData;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSError *error;	// G=0x33ca05c1; @synthesize=_error
@property(readonly, assign, nonatomic) NSData *playInfoData;	// G=0x33ca05d1; @synthesize=_playInfoData
- (id)initWithPlayInfoData:(id)playInfoData error:(id)error;	// 0x33ca0549
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x33ca035d
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x33ca042d
- (id)copyPropertyListEncoding;	// 0x33ca0281
- (id)copyWithZone:(NSZone *)zone;	// 0x33ca01fd
- (void *)copyXPCEncoding;	// 0x33ca0329
- (void)dealloc;	// 0x33ca019d
- (id)description;	// 0x33ca0469
// declared property getter: - (id)error;	// 0x33ca05c1
// declared property getter: - (id)playInfoData;	// 0x33ca05d1
@end
