/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
 */

#import "SSPurchaseRequestDelegate.h"
#import "MCSSRequestDelegate.h"

@class SSPurchaseRequest;

@interface MCSSPurchaseRequestDelegate : MCSSRequestDelegate <SSPurchaseRequestDelegate> {
}
@property(readonly, assign, nonatomic) SSPurchaseRequest *request;	// @dynamic
+ (id)instanceWithPurchases:(id)purchases;	// 0x36e590b9
- (void)startCompletionBlock:(id)block;	// 0x36e5903d
@end

