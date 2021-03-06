/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAResponse.h"

@class NSNumber, NSString, NSDictionary;

@interface AASetupAssistantSetupDelegatesResponse : AAResponse {
}
@property(readonly, assign, nonatomic) NSString *dsid;	// G=0x37267c11; 
@property(readonly, assign, nonatomic) NSDictionary *responseParameters;	// G=0x37267b55; 
@property(readonly, assign, nonatomic) NSNumber *status;	// G=0x37267aad; 
@property(readonly, assign, nonatomic) NSString *statusMessage;	// G=0x37267b01; 
// declared property getter: - (id)dsid;	// 0x37267c11
// declared property getter: - (id)responseParameters;	// 0x37267b55
- (id)responseParametersForServiceIdentifier:(id)serviceIdentifier;	// 0x37267ba9
// declared property getter: - (id)status;	// 0x37267aad
// declared property getter: - (id)statusMessage;	// 0x37267b01
@end

