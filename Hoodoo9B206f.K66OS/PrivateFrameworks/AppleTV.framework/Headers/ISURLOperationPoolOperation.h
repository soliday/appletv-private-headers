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
@property(readonly, assign, nonatomic) ISURLOperation *mainOperation;	// G=0x3682ec61; 
- (void)_forwardResponseFromOperation:(id)operation toOperation:(id)operation2;	// 0x3682eded
- (void)addOperation:(id)operation;	// 0x3682ea81
- (void)cancelOperation:(id)operation;	// 0x3682eb89
- (BOOL)containsOperation:(id)operation;	// 0x3682ec05
- (void)dealloc;	// 0x3682ea35
// declared property getter: - (id)mainOperation;	// 0x3682ec61
- (void)run;	// 0x3682ecc9
@end

