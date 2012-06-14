/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol BBAssertionDelegate;

@interface BBAssertion : NSObject {
@private
	id<BBAssertionDelegate> _delegate;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
	unsigned _transactionID;	// 12 = 0xc
}
@property(readonly, retain) NSString *identifier;	// G=0x3427909d; converted property
@property(readonly, assign) unsigned transactionID;	// G=0x342790ad; converted property
- (id)initWithDelegate:(id)delegate identifier:(id)identifier;	// 0x34278f79
- (void)dealloc;	// 0x34278ff1
// converted property getter: - (id)identifier;	// 0x3427909d
- (void)increaseOrIgnoreTransactionID:(unsigned)anId;	// 0x34279085
// converted property getter: - (unsigned)transactionID;	// 0x342790ad
@end

