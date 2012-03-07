/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GMMSetHttpCookieRequest : PBRequest {
	BOOL _hasGmmInstalled;	// 4 = 0x4
	BOOL _gmmInstalled;	// 5 = 0x5
	BOOL _gmmInvokedViaMimeType;	// 6 = 0x6
	BOOL _gmmInvokedViaUrl;	// 7 = 0x7
}
@property(assign, nonatomic) BOOL gmmInstalled;	// G=0x3384c7d1; S=0x3384c7f5; @synthesize=_gmmInstalled
@property(assign, nonatomic) BOOL gmmInvokedViaMimeType;	// G=0x3384cb35; S=0x3384cb45; @synthesize=_gmmInvokedViaMimeType
@property(assign, nonatomic) BOOL gmmInvokedViaUrl;	// G=0x3384cb55; S=0x3384cb65; @synthesize=_gmmInvokedViaUrl
@property(assign, nonatomic) BOOL hasGmmInstalled;	// G=0x3384cb15; S=0x3384cb25; @synthesize=_hasGmmInstalled
- (void)dealloc;	// 0x3384c7a5
- (id)description;	// 0x3384c819
- (id)dictionaryRepresentation;	// 0x3384c889
// declared property getter: - (BOOL)gmmInstalled;	// 0x3384c7d1
// declared property getter: - (BOOL)gmmInvokedViaMimeType;	// 0x3384cb35
// declared property getter: - (BOOL)gmmInvokedViaUrl;	// 0x3384cb55
// declared property getter: - (BOOL)hasGmmInstalled;	// 0x3384cb15
- (BOOL)readFrom:(id)from;	// 0x3384c98d
// declared property setter: - (void)setGmmInstalled:(BOOL)installed;	// 0x3384c7f5
// declared property setter: - (void)setGmmInvokedViaMimeType:(BOOL)type;	// 0x3384cb45
// declared property setter: - (void)setGmmInvokedViaUrl:(BOOL)url;	// 0x3384cb65
// declared property setter: - (void)setHasGmmInstalled:(BOOL)installed;	// 0x3384cb25
- (void)writeTo:(id)to;	// 0x3384ca9d
@end
