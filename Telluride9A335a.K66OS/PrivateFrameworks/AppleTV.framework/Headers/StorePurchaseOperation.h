/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class SSPurchase, NSNumber, ClientIdentity, NSString, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface StorePurchaseOperation : ISOperation {
@private
	NSNumber *_accountID;	// 60 = 0x3c
	ClientIdentity *_clientIdentity;	// 64 = 0x40
	BOOL _displayedErrorDialog;	// 68 = 0x44
	NSOrderedSet *_downloads;	// 72 = 0x48
	BOOL _isBackgroundPurchase;	// 76 = 0x4c
	BOOL _needsAuthentication;	// 77 = 0x4d
	BOOL _partOfBatchPurchase;	// 78 = 0x4e
	SSPurchase *_purchase;	// 80 = 0x50
	BOOL _shouldCancelPurchaseBatch;	// 84 = 0x54
	BOOL _triggeredQueueCheck;	// 85 = 0x55
	NSString *_urlBagKey;	// 88 = 0x58
}
@property(assign, getter=isBackgroundPurchase) BOOL backgroundPurchase;	// G=0x343559e1; S=0x34355a55; 
@property(retain) ClientIdentity *clientIdentity;	// G=0x3435642d; S=0x34356441; @synthesize=_clientIdentity
@property(assign) BOOL displayedErrorDialog;	// G=0x34356465; S=0x34356475; @synthesize=_displayedErrorDialog
@property(retain) NSOrderedSet *downloads;	// G=0x34356485; S=0x34356499; @synthesize=_downloads
@property(assign) BOOL needsAuthentication;	// G=0x343564bd; S=0x343564cd; @synthesize=_needsAuthentication
@property(assign, getter=isPartOfBatchPurchase) BOOL partOfBatchPurchase;	// G=0x343564dd; S=0x343564ed; @synthesize=_partOfBatchPurchase
@property(readonly, assign) SSPurchase *purchase;	// G=0x34355a1d; 
@property(assign) BOOL shouldCancelPurchaseBatch;	// G=0x343564fd; S=0x3435650d; @synthesize=_shouldCancelPurchaseBatch
@property(assign) BOOL triggeredQueueCheck;	// G=0x3435651d; S=0x3435652d; @synthesize=_triggeredQueueCheck
@property(retain) NSString *urlBagKey;	// G=0x3435653d; S=0x34356551; @synthesize=_urlBagKey
- (id)init;	// 0x34355851
- (id)initWithPurchase:(id)purchase;	// 0x34355865
- (void)_handleDefaultResponse:(id)response;	// 0x34355ef1
- (void)_handlePreOrderResponse:(id)response;	// 0x34355ef5
- (int)_responseTypeForResponse:(id)response;	// 0x34355ef9
- (void)_runPurchaseOperation;	// 0x34355fc5
- (id)authenticatedAccountDSID;	// 0x34355a95
// declared property getter: - (id)clientIdentity;	// 0x3435642d
- (void)dealloc;	// 0x34355945
// declared property getter: - (BOOL)displayedErrorDialog;	// 0x34356465
// declared property getter: - (id)downloads;	// 0x34356485
// declared property getter: - (BOOL)isBackgroundPurchase;	// 0x343559e1
// declared property getter: - (BOOL)isPartOfBatchPurchase;	// 0x343564dd
// declared property getter: - (BOOL)needsAuthentication;	// 0x343564bd
// declared property getter: - (id)purchase;	// 0x34355a1d
- (void)run;	// 0x34355b15
- (void)run:(BOOL)run;	// 0x34355d2d
// declared property setter: - (void)setBackgroundPurchase:(BOOL)purchase;	// 0x34355a55
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x34356441
// declared property setter: - (void)setDisplayedErrorDialog:(BOOL)dialog;	// 0x34356475
// declared property setter: - (void)setDownloads:(id)downloads;	// 0x34356499
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x343564cd
// declared property setter: - (void)setPartOfBatchPurchase:(BOOL)batchPurchase;	// 0x343564ed
// declared property setter: - (void)setShouldCancelPurchaseBatch:(BOOL)cancelPurchaseBatch;	// 0x3435650d
// declared property setter: - (void)setTriggeredQueueCheck:(BOOL)check;	// 0x3435652d
// declared property setter: - (void)setUrlBagKey:(id)key;	// 0x34356551
// declared property getter: - (BOOL)shouldCancelPurchaseBatch;	// 0x343564fd
// declared property getter: - (BOOL)triggeredQueueCheck;	// 0x3435651d
// declared property getter: - (id)urlBagKey;	// 0x3435653d
@end
