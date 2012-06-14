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
@property(assign, nonatomic) BOOL gmmInstalled;	// G=0x31fa47c1; S=0x31fa47e5; @synthesize=_gmmInstalled
@property(assign, nonatomic) BOOL gmmInvokedViaMimeType;	// G=0x31fa4b25; S=0x31fa4b35; @synthesize=_gmmInvokedViaMimeType
@property(assign, nonatomic) BOOL gmmInvokedViaUrl;	// G=0x31fa4b45; S=0x31fa4b55; @synthesize=_gmmInvokedViaUrl
@property(assign, nonatomic) BOOL hasGmmInstalled;	// G=0x31fa4b05; S=0x31fa4b15; @synthesize=_hasGmmInstalled
- (void)dealloc;	// 0x31fa4795
- (id)description;	// 0x31fa4809
- (id)dictionaryRepresentation;	// 0x31fa4879
// declared property getter: - (BOOL)gmmInstalled;	// 0x31fa47c1
// declared property getter: - (BOOL)gmmInvokedViaMimeType;	// 0x31fa4b25
// declared property getter: - (BOOL)gmmInvokedViaUrl;	// 0x31fa4b45
// declared property getter: - (BOOL)hasGmmInstalled;	// 0x31fa4b05
- (BOOL)readFrom:(id)from;	// 0x31fa497d
// declared property setter: - (void)setGmmInstalled:(BOOL)installed;	// 0x31fa47e5
// declared property setter: - (void)setGmmInvokedViaMimeType:(BOOL)type;	// 0x31fa4b35
// declared property setter: - (void)setGmmInvokedViaUrl:(BOOL)url;	// 0x31fa4b55
// declared property setter: - (void)setHasGmmInstalled:(BOOL)installed;	// 0x31fa4b15
- (void)writeTo:(id)to;	// 0x31fa4a8d
@end

