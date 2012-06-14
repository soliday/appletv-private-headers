/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVErrorResolver.h"
#import "SSRequestDelegate.h"

@class MPHomeSharingML3DataProvider, SSRentalCheckoutRequest, NSError;

@interface MPHomeSharingRentalErrorResolver : MPAVErrorResolver <SSRequestDelegate> {
@private
	unsigned long long _accountID;	// 8 = 0x8
	MPHomeSharingML3DataProvider *_dataProvider;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	unsigned long long _itemID;	// 24 = 0x18
	unsigned long long _rentalID;	// 32 = 0x20
	SSRentalCheckoutRequest *_request;	// 40 = 0x28
}
@property(retain, nonatomic) MPHomeSharingML3DataProvider *dataProvider;	// G=0x346df511; S=0x346df521; @synthesize=_dataProvider
@property(readonly, assign, nonatomic) unsigned long long itemID;	// G=0x346df545; @synthesize=_itemID
- (id)initWithItemID:(unsigned long long)itemID rentalID:(unsigned long long)anId accountID:(unsigned long long)anId3;	// 0x346dedf9
- (BOOL)_errorIsFairPlayError:(id)error;	// 0x346df425
// declared property getter: - (id)dataProvider;	// 0x346df511
- (void)dealloc;	// 0x346dee75
// declared property getter: - (unsigned long long)itemID;	// 0x346df545
- (void)request:(id)request didFailWithError:(id)error;	// 0x346df175
- (void)requestDidFinish:(id)request;	// 0x346df28d
- (void)resolveError:(id)error;	// 0x346def15
// declared property setter: - (void)setDataProvider:(id)provider;	// 0x346df521
@end

