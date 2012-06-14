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
@property(readonly, assign) ISPersonalizeOffersRequest *personalizeOffersReqeust;	// G=0x3012014d; 
@property(readonly, assign) SSPersonalizeOffersResponse *response;	// G=0x30120185; 
- (id)initWithPersonalizeOffersRequest:(id)personalizeOffersRequest;	// 0x30120099
- (void)_addDictionaryToResponse:(id)response;	// 0x30120365
- (id)_copyResponseForURL:(id)url requestString:(id)string error:(id *)error;	// 0x30120739
- (BOOL)_runWithURLDictionary:(id)urldictionary error:(id *)error;	// 0x3012090d
- (void)dealloc;	// 0x301200ed
// declared property getter: - (id)personalizeOffersReqeust;	// 0x3012014d
// declared property getter: - (id)response;	// 0x30120185
- (void)run;	// 0x301201e5
@end

