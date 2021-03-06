/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class MicroPaymentClient, NSEntityDescription, NSMutableArray, NSArray;

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
@property(readonly, assign, nonatomic) NSArray *addedPayments;	// G=0x30402cf5; @synthesize=_addedPayments
@property(readonly, assign, nonatomic) NSArray *changedPayments;	// G=0x30402d05; @synthesize=_changedPayments
@property(readonly, assign, nonatomic) MicroPaymentClient *client;	// G=0x30402d15; @synthesize=_client
@property(retain, nonatomic) NSEntityDescription *entity;	// G=0x30402d25; S=0x30402d35; @synthesize=_entity
@property(retain, nonatomic) NSArray *existingPayments;	// G=0x30402d59; S=0x30402d69; @synthesize=_existingPayments
@property(readonly, assign, nonatomic) NSArray *removedPayments;	// G=0x30402d8d; @synthesize=_removedPayments
- (id)init;	// 0x3040246d
- (id)initWithMicroPaymentClient:(id)microPaymentClient;	// 0x30402481
- (void)_removeUnmergedPayments:(id)payments;	// 0x30402b89
// declared property getter: - (id)addedPayments;	// 0x30402cf5
// declared property getter: - (id)changedPayments;	// 0x30402d05
// declared property getter: - (id)client;	// 0x30402d15
- (void)dealloc;	// 0x30402555
// declared property getter: - (id)entity;	// 0x30402d25
// declared property getter: - (id)existingPayments;	// 0x30402d59
- (void)mergeResponse:(id)response withOptions:(int)options;	// 0x30402605
// declared property getter: - (id)removedPayments;	// 0x30402d8d
// declared property setter: - (void)setEntity:(id)entity;	// 0x30402d35
// declared property setter: - (void)setExistingPayments:(id)payments;	// 0x30402d69
@end

