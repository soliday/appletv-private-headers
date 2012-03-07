/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class SSAuthenticationContext, NSURL, NSNumber, ISDialog;

__attribute__((visibility("hidden")))
@interface ISServerAuthenticationOperation : ISOperation {
@private
	NSNumber *_authenticatedAccountDSID;	// 60 = 0x3c
	SSAuthenticationContext *_authenticationContext;	// 64 = 0x40
	ISDialog *_dialog;	// 68 = 0x44
	NSURL *_redirectURL;	// 72 = 0x48
}
@property(retain) NSNumber *authenticatedAccountDSID;	// G=0x33351c7d; S=0x33351c91; @synthesize=_authenticatedAccountDSID
@property(retain) SSAuthenticationContext *authenticationContext;	// G=0x33351c45; S=0x33351c59; @synthesize=_authenticationContext
@property(retain) ISDialog *dialog;	// G=0x33351cb5; S=0x33351cc9; @synthesize=_dialog
@property(retain) NSURL *redirectURL;	// G=0x33351ced; S=0x33351d01; @synthesize=_redirectURL
- (BOOL)_copyAccountIdentifier:(id *)identifier returningError:(id *)error;	// 0x33351705
- (id)_copyAuthenticationContext;	// 0x333517ad
- (id)_copyButtonForDialogSkip;	// 0x3335192d
- (BOOL)_copySelectedButton:(id *)button returningError:(id *)error;	// 0x333519e1
- (BOOL)_handleSelectedButton:(id)button;	// 0x33351ad9
- (BOOL)_shouldAuthenticateForButton:(id)button;	// 0x33351bc5
// declared property getter: - (id)authenticatedAccountDSID;	// 0x33351c7d
// declared property getter: - (id)authenticationContext;	// 0x33351c45
- (void)dealloc;	// 0x333512c1
// declared property getter: - (id)dialog;	// 0x33351cb5
// declared property getter: - (id)redirectURL;	// 0x33351ced
- (void)run;	// 0x3335136d
// declared property setter: - (void)setAuthenticatedAccountDSID:(id)dsid;	// 0x33351c91
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x33351c59
// declared property setter: - (void)setDialog:(id)dialog;	// 0x33351cc9
// declared property setter: - (void)setRedirectURL:(id)url;	// 0x33351d01
@end
