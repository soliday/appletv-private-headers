/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class MicroPaymentClient, NSMutableArray, NSArray, NSEntityDescription;

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
@property(readonly, assign, nonatomic) NSArray *addedPayments;	// G=0x333652e9; @synthesize=_addedPayments
@property(readonly, assign, nonatomic) NSArray *changedPayments;	// G=0x333652f9; @synthesize=_changedPayments
@property(readonly, assign, nonatomic) MicroPaymentClient *client;	// G=0x33365309; @synthesize=_client
@property(retain, nonatomic) NSEntityDescription *entity;	// G=0x33365319; S=0x33365329; @synthesize=_entity
@property(retain, nonatomic) NSArray *existingPayments;	// G=0x3336534d; S=0x3336535d; @synthesize=_existingPayments
@property(readonly, assign, nonatomic) NSArray *removedPayments;	// G=0x33365381; @synthesize=_removedPayments
- (id)init;	// 0x33364a61
- (id)initWithMicroPaymentClient:(id)microPaymentClient;	// 0x33364a75
- (void)_removeUnmergedPayments:(id)payments;	// 0x3336517d
// declared property getter: - (id)addedPayments;	// 0x333652e9
// declared property getter: - (id)changedPayments;	// 0x333652f9
// declared property getter: - (id)client;	// 0x33365309
- (void)dealloc;	// 0x33364b49
// declared property getter: - (id)entity;	// 0x33365319
// declared property getter: - (id)existingPayments;	// 0x3336534d
- (void)mergeResponse:(id)response withOptions:(int)options;	// 0x33364bf9
// declared property getter: - (id)removedPayments;	// 0x33365381
// declared property setter: - (void)setEntity:(id)entity;	// 0x33365329
// declared property setter: - (void)setExistingPayments:(id)payments;	// 0x3336535d
@end

