/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVGetAccountPropertiesTaskGroup.h"

@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
@private
	NSSet *_addressBookHomes;	// 76 = 0x4c
	NSSet *_directoryGatewayURLs;	// 80 = 0x50
}
@property(readonly, assign) NSSet *addressBookHomes;	// G=0x31799361; @synthesize=_addressBookHomes
@property(readonly, assign) NSSet *directoryGatewayURLs;	// G=0x31799351; @synthesize=_directoryGatewayURLs
- (id)_copyAccountPropertiesPropFindElements;	// 0x31799391
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x31799545
// declared property getter: - (id)addressBookHomes;	// 0x31799361
- (void)dealloc;	// 0x317994e9
- (id)description;	// 0x3179945d
- (id)directoryGatewayURL;	// 0x31799371
// declared property getter: - (id)directoryGatewayURLs;	// 0x31799351
- (id)homeSet;	// 0x31799341
@end
