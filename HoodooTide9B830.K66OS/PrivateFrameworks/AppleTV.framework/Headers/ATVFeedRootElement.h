/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSURL, ATVFeedDocument, NSString;

@interface ATVFeedRootElement : ATVFeedElement {
@private
	ATVFeedDocument *_owner;	// 28 = 0x1c
	BOOL _isVolatile;	// 32 = 0x20
	NSString *_onVolatileReload;	// 36 = 0x24
	NSURL *_originalURL;	// 40 = 0x28
	float _refreshInterval;	// 44 = 0x2c
	NSString *_onRefresh;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL isVolatile;	// G=0x32ad67b5; S=0x32ad67c5; @synthesize=_isVolatile
@property(copy, nonatomic) NSString *onRefresh;	// G=0x32ad685d; S=0x32ad686d; @synthesize=_onRefresh
@property(copy, nonatomic) NSString *onVolatileReload;	// G=0x32ad67d5; S=0x32ad67e5; @synthesize=_onVolatileReload
@property(retain, nonatomic) NSURL *originalURL;	// G=0x32ad6809; S=0x32ad6819; @synthesize=_originalURL
@property(assign, nonatomic) ATVFeedDocument *owner;	// G=0x32ad6795; S=0x32ad6785; 
@property(assign, nonatomic) float refreshInterval;	// G=0x32ad683d; S=0x32ad684d; @synthesize=_refreshInterval
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x32ad65f5
- (void)dealloc;	// 0x32ad6711
// declared property getter: - (BOOL)isVolatile;	// 0x32ad67b5
// declared property getter: - (id)onRefresh;	// 0x32ad685d
// declared property getter: - (id)onVolatileReload;	// 0x32ad67d5
// declared property getter: - (id)originalURL;	// 0x32ad6809
// declared property getter: - (id)owner;	// 0x32ad6795
- (id)ownerDocument;	// 0x32ad67a5
// declared property getter: - (float)refreshInterval;	// 0x32ad683d
// declared property setter: - (void)setIsVolatile:(BOOL)aVolatile;	// 0x32ad67c5
// declared property setter: - (void)setOnRefresh:(id)refresh;	// 0x32ad686d
// declared property setter: - (void)setOnVolatileReload:(id)reload;	// 0x32ad67e5
// declared property setter: - (void)setOriginalURL:(id)url;	// 0x32ad6819
// declared property setter: - (void)setOwner:(id)owner;	// 0x32ad6785
// declared property setter: - (void)setRefreshInterval:(float)interval;	// 0x32ad684d
@end

