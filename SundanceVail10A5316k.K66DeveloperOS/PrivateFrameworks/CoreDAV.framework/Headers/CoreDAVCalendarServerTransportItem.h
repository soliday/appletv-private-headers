/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithHrefChildItem, CoreDAVLeafItem;

@interface CoreDAVCalendarServerTransportItem : CoreDAVItem {
	CoreDAVLeafItem *_apsBundleID;	// 24 = 0x18
	CoreDAVLeafItem *_courierServer;	// 28 = 0x1c
	CoreDAVItemWithHrefChildItem *_subscriptionURL;	// 32 = 0x20
	CoreDAVItemWithHrefChildItem *_tokenURL;	// 36 = 0x24
	CoreDAVLeafItem *_apsEnv;	// 40 = 0x28
	CoreDAVLeafItem *_refreshInterval;	// 44 = 0x2c
	CoreDAVLeafItem *_xmppServer;	// 48 = 0x30
	CoreDAVLeafItem *_xmppURI;	// 52 = 0x34
}
@property(retain) CoreDAVLeafItem *apsBundleID;	// G=0x35f7626d; S=0x35f76281; @synthesize=_apsBundleID
@property(retain) CoreDAVLeafItem *apsEnv;	// G=0x35f762fd; S=0x35f76311; @synthesize=_apsEnv
@property(retain) CoreDAVLeafItem *courierServer;	// G=0x35f76291; S=0x35f762a5; @synthesize=_courierServer
@property(retain) CoreDAVLeafItem *refreshInterval;	// G=0x35f76321; S=0x35f76335; @synthesize=_refreshInterval
@property(retain) CoreDAVItemWithHrefChildItem *subscriptionURL;	// G=0x35f762b5; S=0x35f762c9; @synthesize=_subscriptionURL
@property(retain) CoreDAVItemWithHrefChildItem *tokenURL;	// G=0x35f762d9; S=0x35f762ed; @synthesize=_tokenURL
@property(retain) CoreDAVLeafItem *xmppServer;	// G=0x35f76345; S=0x35f76359; @synthesize=_xmppServer
@property(retain) CoreDAVLeafItem *xmppURI;	// G=0x35f76369; S=0x35f7637d; @synthesize=_xmppURI
+ (id)copyParseRules;	// 0x35f75c99
- (id)init;	// 0x35f75971
// declared property getter: - (id)apsBundleID;	// 0x35f7626d
// declared property getter: - (id)apsEnv;	// 0x35f762fd
// declared property getter: - (id)courierServer;	// 0x35f76291
- (void)dealloc;	// 0x35f7599d
- (id)description;	// 0x35f75a79
// declared property getter: - (id)refreshInterval;	// 0x35f76321
// declared property setter: - (void)setApsBundleID:(id)anId;	// 0x35f76281
// declared property setter: - (void)setApsEnv:(id)env;	// 0x35f76311
// declared property setter: - (void)setCourierServer:(id)server;	// 0x35f762a5
// declared property setter: - (void)setRefreshInterval:(id)interval;	// 0x35f76335
// declared property setter: - (void)setSubscriptionURL:(id)url;	// 0x35f762c9
// declared property setter: - (void)setTokenURL:(id)url;	// 0x35f762ed
// declared property setter: - (void)setXmppServer:(id)server;	// 0x35f76359
// declared property setter: - (void)setXmppURI:(id)uri;	// 0x35f7637d
// declared property getter: - (id)subscriptionURL;	// 0x35f762b5
// declared property getter: - (id)tokenURL;	// 0x35f762d9
// declared property getter: - (id)xmppServer;	// 0x35f76345
// declared property getter: - (id)xmppURI;	// 0x35f76369
@end
