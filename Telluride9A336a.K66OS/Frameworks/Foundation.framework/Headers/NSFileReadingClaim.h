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
- (id)initWithClient:(xpc_connection_s *)client messageParameters:(id)parameters replySender:(id)sender;	// 0x33759a19
- (id)initWithPurposeID:(id)purposeID url:(id)url options:(unsigned)options claimer:(id)claimer;	// 0x33759999
- (BOOL)blocksClaim:(id)claim;	// 0x3375a5e9
- (void)dealloc;	// 0x33759bd1
- (void)devalueSelf;	// 0x3375a4c9
- (BOOL)evaluateSelfWithRootNode:(id)rootNode checkSubarbitrability:(BOOL)subarbitrability;	// 0x33759e79
- (void)forwardUsingMessageSender:(id)sender crashHandler:(id)handler;	// 0x33759c1d
- (void)granted;	// 0x33759ffd
- (void)invokeClaimer;	// 0x3375a219
- (BOOL)isBlockedByReadingItemAtLocation:(id)location options:(unsigned)options;	// 0x33759f99
- (BOOL)isBlockedByWritingItemAtLocation:(id)location options:(unsigned)options;	// 0x33759f9d
- (void)itemAtLocation:(id)location wasReplacedByItemAtLocation:(id)location2;	// 0x3375a591
@end

