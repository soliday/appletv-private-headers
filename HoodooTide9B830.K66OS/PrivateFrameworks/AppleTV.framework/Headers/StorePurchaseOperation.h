/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class NSNumber, NSOrderedSet, ClientIdentity, SSPurchase, NSString;

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
@property(assign, getter=isBackgroundPurchase) BOOL backgroundPurchase;	// G=0x32b55b65; S=0x32b55bd9; 
@property(retain) ClientIdentity *clientIdentity;	// G=0x32b565b1; S=0x32b565c5; @synthesize=_clientIdentity
@property(assign) BOOL displayedErrorDialog;	// G=0x32b565e9; S=0x32b565f9; @synthesize=_displayedErrorDialog
@property(retain) NSOrderedSet *downloads;	// G=0x32b56609; S=0x32b5661d; @synthesize=_downloads
@property(assign) BOOL needsAuthentication;	// G=0x32b56641; S=0x32b56651; @synthesize=_needsAuthentication
@property(assign, getter=isPartOfBatchPurchase) BOOL partOfBatchPurchase;	// G=0x32b56661; S=0x32b56671; @synthesize=_partOfBatchPurchase
@property(readonly, assign) SSPurchase *purchase;	// G=0x32b55ba1; 
@property(assign) BOOL shouldCancelPurchaseBatch;	// G=0x32b56681; S=0x32b56691; @synthesize=_shouldCancelPurchaseBatch
@property(assign) BOOL triggeredQueueCheck;	// G=0x32b566a1; S=0x32b566b1; @synthesize=_triggeredQueueCheck
@property(retain) NSString *urlBagKey;	// G=0x32b566c1; S=0x32b566d5; @synthesize=_urlBagKey
- (id)init;	// 0x32b559d5
- (id)initWithPurchase:(id)purchase;	// 0x32b559e9
- (void)_handleDefaultResponse:(id)response;	// 0x32b56075
- (void)_handlePreOrderResponse:(id)response;	// 0x32b56079
- (int)_responseTypeForResponse:(id)response;	// 0x32b5607d
- (void)_runPurchaseOperation;	// 0x32b56149
- (id)authenticatedAccountDSID;	// 0x32b55c19
// declared property getter: - (id)clientIdentity;	// 0x32b565b1
- (void)dealloc;	// 0x32b55ac9
// declared property getter: - (BOOL)displayedErrorDialog;	// 0x32b565e9
// declared property getter: - (id)downloads;	// 0x32b56609
// declared property getter: - (BOOL)isBackgroundPurchase;	// 0x32b55b65
// declared property getter: - (BOOL)isPartOfBatchPurchase;	// 0x32b56661
// declared property getter: - (BOOL)needsAuthentication;	// 0x32b56641
// declared property getter: - (id)purchase;	// 0x32b55ba1
- (void)run;	// 0x32b55c99
- (void)run:(BOOL)run;	// 0x32b55eb1
// declared property setter: - (void)setBackgroundPurchase:(BOOL)purchase;	// 0x32b55bd9
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x32b565c5
// declared property setter: - (void)setDisplayedErrorDialog:(BOOL)dialog;	// 0x32b565f9
// declared property setter: - (void)setDownloads:(id)downloads;	// 0x32b5661d
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x32b56651
// declared property setter: - (void)setPartOfBatchPurchase:(BOOL)batchPurchase;	// 0x32b56671
// declared property setter: - (void)setShouldCancelPurchaseBatch:(BOOL)cancelPurchaseBatch;	// 0x32b56691
// declared property setter: - (void)setTriggeredQueueCheck:(BOOL)check;	// 0x32b566b1
// declared property setter: - (void)setUrlBagKey:(id)key;	// 0x32b566d5
// declared property getter: - (BOOL)shouldCancelPurchaseBatch;	// 0x32b56681
// declared property getter: - (BOOL)triggeredQueueCheck;	// 0x32b566a1
// declared property getter: - (id)urlBagKey;	// 0x32b566c1
@end

