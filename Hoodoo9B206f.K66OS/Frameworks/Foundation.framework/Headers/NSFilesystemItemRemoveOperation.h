/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOperation.h"

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface NSFilesystemItemRemoveOperation : NSOperation {
@private
	id _delegate;	// 12 = 0xc
	NSString *_removePath;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	void *_state;	// 24 = 0x18
	BOOL _filterUnderbars;	// 28 = 0x1c
}
@property(assign) id delegate;	// G=0x31d162e1; S=0x31d14fe9; converted property
@property(readonly, retain) NSError *error;	// G=0x31d1698d; converted property
+ (id)_errorWithErrno:(int)errno atPath:(id)path;	// 0x31d16521
+ (id)filesystemItemRemoveOperationWithPath:(id)path;	// 0x31d14f6d
- (id)initWithPath:(id)path;	// 0x31d14fbd
- (BOOL)_filtersUnderbars;	// 0x31d162f1
- (void)_setError:(id)error;	// 0x31d168f9
- (void)_setFilterUnderbars:(BOOL)underbars;	// 0x31d5bd75
- (void)dealloc;	// 0x31d2c2dd
// converted property getter: - (id)delegate;	// 0x31d162e1
// converted property getter: - (id)error;	// 0x31d1698d
- (void)main;	// 0x31d1616d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31d14fe9
@end

