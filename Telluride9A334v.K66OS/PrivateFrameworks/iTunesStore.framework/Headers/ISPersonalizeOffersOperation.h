/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class ISPersonalizeOffersRequest, SSPersonalizeOffersResponse;

@interface ISPersonalizeOffersOperation : ISOperation {
@private
	ISPersonalizeOffersRequest *_request;	// 60 = 0x3c
	SSPersonalizeOffersResponse *_response;	// 64 = 0x40
}
@property(readonly, assign) ISPersonalizeOffersRequest *personalizeOffersReqeust;	// G=0x32734515; 
@property(readonly, assign) SSPersonalizeOffersResponse *response;	// G=0x3273454d; 
- (id)initWithPersonalizeOffersRequest:(id)personalizeOffersRequest;	// 0x32734461
- (void)_addDictionaryToResponse:(id)response;	// 0x3273472d
- (id)_copyResponseForURL:(id)url requestString:(id)string error:(id *)error;	// 0x32734b01
- (BOOL)_runWithURLDictionary:(id)urldictionary error:(id *)error;	// 0x32734cd5
- (void)dealloc;	// 0x327344b5
// declared property getter: - (id)personalizeOffersReqeust;	// 0x32734515
// declared property getter: - (id)response;	// 0x3273454d
- (void)run;	// 0x327345ad
@end
