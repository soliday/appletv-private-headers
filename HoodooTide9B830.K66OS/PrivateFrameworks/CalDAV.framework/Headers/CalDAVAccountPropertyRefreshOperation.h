/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVOperation.h"

@protocol CalDAVAccountPropertyRefreshDelegate;

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {
	BOOL _fetchPrincipalSearchProperties;	// 56 = 0x38
}
@property(assign, nonatomic) id<CalDAVAccountPropertyRefreshDelegate> delegate;	// @dynamic
@property(assign) BOOL fetchPrincipalSearchProperties;	// G=0x314799ad; S=0x314799bd; @synthesize=_fetchPrincipalSearchProperties
// declared property getter: - (BOOL)fetchPrincipalSearchProperties;	// 0x314799ad
- (void)getAccountPropertiesTask:(id)task completedWithError:(id)error;	// 0x31479abd
- (void)refreshProperties;	// 0x314799cd
// declared property setter: - (void)setFetchPrincipalSearchProperties:(BOOL)properties;	// 0x314799bd
@end

