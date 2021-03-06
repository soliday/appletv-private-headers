/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library


@interface BRAirportNetwork : NSObject {
@private
	WiFiNetwork *_wiFiNetworkRef;	// 4 = 0x4
	BOOL _isDirected;	// 8 = 0x8
}
@property(assign, getter=isDirected) BOOL directed;	// G=0x332c0669; S=0x332c0679; converted property
@property(readonly, assign) WiFiNetwork *wiFiNetworkRef;	// G=0x332c03d5; converted property
+ (BOOL)asyncNetworkWithName:(id)name error:(id *)error;	// 0x332c034d
+ (id)networkWithWiFiNetwork:(WiFiNetwork *)wiFiNetwork;	// 0x332c0371
- (id)init;	// 0x332c03e5
- (BOOL)asyncAssociateUsingPassword:(id)password error:(id *)error;	// 0x332c0689
- (void)dealloc;	// 0x332c0429
// converted property getter: - (BOOL)isDirected;	// 0x332c0669
- (id)name;	// 0x332c046d
- (int)securityType;	// 0x332c048d
// converted property setter: - (void)setDirected:(BOOL)directed;	// 0x332c0679
// converted property getter: - (WiFiNetwork *)wiFiNetworkRef;	// 0x332c03d5
@end

