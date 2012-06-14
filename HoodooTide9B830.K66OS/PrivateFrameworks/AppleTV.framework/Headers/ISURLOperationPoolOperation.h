/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class ISURLOperation, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ISURLOperationPoolOperation : ISOperation {
@private
	int _cancelCount;	// 60 = 0x3c
	BOOL _forwardImmediately;	// 64 = 0x40
	NSMutableArray *_operations;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) ISURLOperation *mainOperation;	// G=0x32b72c05; 
- (void)_forwardResponseFromOperation:(id)operation toOperation:(id)operation2;	// 0x32b72d91
- (void)addOperation:(id)operation;	// 0x32b72a25
- (void)cancelOperation:(id)operation;	// 0x32b72b2d
- (BOOL)containsOperation:(id)operation;	// 0x32b72ba9
- (void)dealloc;	// 0x32b729d9
// declared property getter: - (id)mainOperation;	// 0x32b72c05
- (void)run;	// 0x32b72c6d
@end

