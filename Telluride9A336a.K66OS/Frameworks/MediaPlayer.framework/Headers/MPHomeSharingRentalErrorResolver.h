/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVErrorResolver.h"
#import "SSRequestDelegate.h"

@class MPHomeSharingML3DataProvider, NSError, SSRentalCheckoutRequest;

@interface MPHomeSharingRentalErrorResolver : MPAVErrorResolver <SSRequestDelegate> {
@private
	unsigned long long _accountID;	// 8 = 0x8
	MPHomeSharingML3DataProvider *_dataProvider;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	unsigned long long _itemID;	// 24 = 0x18
	unsigned long long _rentalID;	// 32 = 0x20
	SSRentalCheckoutRequest *_request;	// 40 = 0x28
}
@property(retain, nonatomic) MPHomeSharingML3DataProvider *dataProvider;	// G=0x35be2fd1; S=0x35be2fe1; @synthesize=_dataProvider
@property(readonly, assign, nonatomic) unsigned long long itemID;	// G=0x35be3005; @synthesize=_itemID
- (id)initWithItemID:(unsigned long long)itemID rentalID:(unsigned long long)anId accountID:(unsigned long long)anId3;	// 0x35be28b9
- (BOOL)_errorIsFairPlayError:(id)error;	// 0x35be2ee5
// declared property getter: - (id)dataProvider;	// 0x35be2fd1
- (void)dealloc;	// 0x35be2935
// declared property getter: - (unsigned long long)itemID;	// 0x35be3005
- (void)request:(id)request didFailWithError:(id)error;	// 0x35be2c35
- (void)requestDidFinish:(id)request;	// 0x35be2d4d
- (void)resolveError:(id)error;	// 0x35be29d5
// declared property setter: - (void)setDataProvider:(id)provider;	// 0x35be2fe1
@end
