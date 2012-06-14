/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileAccessClaim.h"
#import "Foundation-Structs.h"

@class NSURL, NSFileAccessNode;

__attribute__((visibility("hidden")))
@interface NSFileReadingClaim : NSFileAccessClaim {
@private
	NSURL *_url;	// 72 = 0x48
	BOOL _urlDidChange;	// 76 = 0x4c
	unsigned _options;	// 80 = 0x50
	NSFileAccessNode *_location;	// 84 = 0x54
	NSFileAccessNode *_rootNode;	// 88 = 0x58
	int _linkResolutionCount;	// 92 = 0x5c
}
- (id)initWithClient:(xpc_connection_s *)client messageParameters:(id)parameters replySender:(id)sender;	// 0x31dfca09
- (id)initWithPurposeID:(id)purposeID url:(id)url options:(unsigned)options claimer:(id)claimer;	// 0x31dfc989
- (BOOL)blocksClaim:(id)claim;	// 0x31dfd5d9
- (void)dealloc;	// 0x31dfcbc1
- (void)devalueSelf;	// 0x31dfd4b9
- (BOOL)evaluateSelfWithRootNode:(id)rootNode checkSubarbitrability:(BOOL)subarbitrability;	// 0x31dfce69
- (void)forwardUsingMessageSender:(id)sender crashHandler:(id)handler;	// 0x31dfcc0d
- (void)granted;	// 0x31dfcfed
- (void)invokeClaimer;	// 0x31dfd209
- (BOOL)isBlockedByReadingItemAtLocation:(id)location options:(unsigned)options;	// 0x31dfcf89
- (BOOL)isBlockedByWritingItemAtLocation:(id)location options:(unsigned)options;	// 0x31dfcf8d
- (void)itemAtLocation:(id)location wasReplacedByItemAtLocation:(id)location2;	// 0x31dfd581
@end
