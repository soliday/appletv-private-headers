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
@interface NSFileReadingWritingClaim : NSFileAccessClaim {
@private
	NSURL *_readingURL;	// 72 = 0x48
	BOOL _readingURLDidChange;	// 76 = 0x4c
	unsigned _readingOptions;	// 80 = 0x50
	NSURL *_writingURL;	// 84 = 0x54
	BOOL _writingURLDidChange;	// 88 = 0x58
	unsigned _writingOptions;	// 92 = 0x5c
	NSFileAccessNode *_readingLocation;	// 96 = 0x60
	NSFileAccessNode *_writingLocation;	// 100 = 0x64
	NSFileAccessNode *_rootNode;	// 104 = 0x68
	int _readingLinkResolutionCount;	// 108 = 0x6c
}
- (id)initWithClient:(xpc_connection_s *)client messageParameters:(id)parameters replySender:(id)sender;	// 0x31dfe1d5
- (id)initWithPurposeID:(id)purposeID readingURL:(id)url options:(unsigned)options writingURL:(id)url4 options:(unsigned)options5 claimer:(id)claimer;	// 0x31dfe12d
- (BOOL)blocksClaim:(id)claim;	// 0x31dff4e1
- (void)dealloc;	// 0x31dfe41d
- (void)devalueSelf;	// 0x31dff2f9
- (BOOL)evaluateSelfWithRootNode:(id)rootNode checkSubarbitrability:(BOOL)subarbitrability;	// 0x31dfe78d
- (void)forwardUsingMessageSender:(id)sender crashHandler:(id)handler;	// 0x31dfe47d
- (void)granted;	// 0x31dfea85
- (void)invokeClaimer;	// 0x31dfefb1
- (BOOL)isBlockedByReadingItemAtLocation:(id)location options:(unsigned)options;	// 0x31dfe971
- (BOOL)isBlockedByWritingItemAtLocation:(id)location options:(unsigned)options;	// 0x31dfe9dd
- (void)itemAtLocation:(id)location wasReplacedByItemAtLocation:(id)location2;	// 0x31dff45d
@end

