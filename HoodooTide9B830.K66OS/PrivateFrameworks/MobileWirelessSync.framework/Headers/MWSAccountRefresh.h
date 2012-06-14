/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileWirelessSync.framework/MobileWirelessSync
 */

#import <NSObject.h> // Unknown library
#import "AccountRefreshProtocol.h"
#import "MobileWirelessSync-Structs.h"

@class NSString, NSSet;

@interface MWSAccountRefresh : NSObject <AccountRefreshProtocol> {
	NSString *_username;	// 4 = 0x4
	NSString *_accountId;	// 8 = 0x8
	NSSet *_subscribedCalendarIds;	// 12 = 0xc
}
+ (id)accountToRefreshForBasicAccount:(id)basicAccount;	// 0x31ed5099
- (id)init;	// 0x31ed4f11
- (BOOL)_hasSubscribedCalendarWithIdentifier:(id)identifier;	// 0x31ed510d
- (BOOL)_hasSubscribedCalendars;	// 0x31ed50e5
- (id)_initWithBasicAccount:(id)basicAccount;	// 0x31ed5275
- (BOOL)_isConfiguredSyncAccount;	// 0x31ed5401
- (CFStringRef)_mwsDataclassNameForDataclass:(id)dataclass;	// 0x31ed4f29
- (BOOL)_refreshDataclass:(id)dataclass;	// 0x31ed53a9
- (BOOL)_refreshSubscribedCalendarWithIdentifier:(id)identifier;	// 0x31ed5181
- (BOOL)_refreshSubscribedCalendars;	// 0x31ed5135
- (id)_username;	// 0x31ed4f19
- (void)dealloc;	// 0x31ed5201
- (id)defaultContainerIdentifierForDataclass:(id)dataclass;	// 0x31ed4f15
- (BOOL)refreshContainerListForDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x31ed5081
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x31ed4f9d
- (BOOL)refreshContainersForDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x31ed5011
@end

