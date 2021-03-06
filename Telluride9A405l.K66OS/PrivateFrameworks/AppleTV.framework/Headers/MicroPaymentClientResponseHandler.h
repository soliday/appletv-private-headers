/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray, NSEntityDescription, MicroPaymentClient;

__attribute__((visibility("hidden")))
@interface MicroPaymentClientResponseHandler : NSObject {
@private
	NSMutableArray *_addedPayments;	// 4 = 0x4
	NSMutableArray *_changedPayments;	// 8 = 0x8
	MicroPaymentClient *_client;	// 12 = 0xc
	NSEntityDescription *_entity;	// 16 = 0x10
	NSArray *_existingPayments;	// 20 = 0x14
	NSMutableArray *_removedPayments;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSArray *addedPayments;	// G=0x35f5c55d; @synthesize=_addedPayments
@property(readonly, assign, nonatomic) NSArray *changedPayments;	// G=0x35f5c56d; @synthesize=_changedPayments
@property(readonly, assign, nonatomic) MicroPaymentClient *client;	// G=0x35f5c57d; @synthesize=_client
@property(retain, nonatomic) NSEntityDescription *entity;	// G=0x35f5c58d; S=0x35f5c59d; @synthesize=_entity
@property(retain, nonatomic) NSArray *existingPayments;	// G=0x35f5c5c1; S=0x35f5c5d1; @synthesize=_existingPayments
@property(readonly, assign, nonatomic) NSArray *removedPayments;	// G=0x35f5c5f5; @synthesize=_removedPayments
- (id)init;	// 0x35f5bcd5
- (id)initWithMicroPaymentClient:(id)microPaymentClient;	// 0x35f5bce9
- (void)_removeUnmergedPayments:(id)payments;	// 0x35f5c3f1
// declared property getter: - (id)addedPayments;	// 0x35f5c55d
// declared property getter: - (id)changedPayments;	// 0x35f5c56d
// declared property getter: - (id)client;	// 0x35f5c57d
- (void)dealloc;	// 0x35f5bdbd
// declared property getter: - (id)entity;	// 0x35f5c58d
// declared property getter: - (id)existingPayments;	// 0x35f5c5c1
- (void)mergeResponse:(id)response withOptions:(int)options;	// 0x35f5be6d
// declared property getter: - (id)removedPayments;	// 0x35f5c5f5
// declared property setter: - (void)setEntity:(id)entity;	// 0x35f5c59d
// declared property setter: - (void)setExistingPayments:(id)payments;	// 0x35f5c5d1
@end

