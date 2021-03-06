/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class MMRequest;

__attribute__((visibility("hidden")))
@interface MMTransaction : NSObject {
@private
	MMRequest *_request;	// 4 = 0x4
	BOOL _useSynchronous;	// 8 = 0x8
	BOOL _resultRequired;	// 9 = 0x9
}
@property(retain, nonatomic) MMRequest *request;	// G=0x30a0e18d; S=0x30a0e5ad; @synthesize=_request
@property(assign, nonatomic) BOOL resultRequired;	// G=0x30a0e14d; S=0x30a0e15d; @synthesize=_resultRequired
@property(assign, nonatomic) BOOL useSynchronous;	// G=0x30a0e16d; S=0x30a0e17d; @synthesize=_useSynchronous
- (id)initWithRequest:(id)request synchronousFlag:(BOOL)flag resultRequired:(BOOL)required delegate:(id)delegate;	// 0x30a0e541
- (void)dealloc;	// 0x30a0e4f5
- (void)dispatch;	// 0x30a0e4a1
- (int)errorType;	// 0x30a0e19d
- (int)httpStatusCode;	// 0x30a0e36d
- (BOOL)isSuccessful;	// 0x30a0e3f9
// declared property getter: - (id)request;	// 0x30a0e18d
- (id)result;	// 0x30a0e319
// declared property getter: - (BOOL)resultRequired;	// 0x30a0e14d
// declared property setter: - (void)setRequest:(id)request;	// 0x30a0e5ad
// declared property setter: - (void)setResultRequired:(BOOL)required;	// 0x30a0e15d
// declared property setter: - (void)setUseSynchronous:(BOOL)synchronous;	// 0x30a0e17d
- (int)transactionState;	// 0x30a0e391
// declared property getter: - (BOOL)useSynchronous;	// 0x30a0e16d
@end

