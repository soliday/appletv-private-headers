/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DAAccount.h> // Unknown library
#import "DACalDAV-Structs.h"

@class NSSet, NSURL, NSDictionary, DACoreDAVTaskManager, NSTimeZone, NSMutableDictionary, NSMutableSet, CalDAVPrincipalSearchPropertySet, CoreDAVDiscoveryTaskGroup, DACoreDAVLogger, CalDAVServerVersion, NSDate, MobileCalDAVPrincipal, MobileCalDAVAccountRefreshActor, CalDAVRefreshContext, NSString;

@interface MobileCalDAVAccount : DAAccount {
	DACoreDAVTaskManager *_taskManager;	// 64 = 0x40
	NSMutableDictionary *_principals;	// 68 = 0x44
	MobileCalDAVPrincipal *_mainPrincipal;	// 72 = 0x48
	int _preferredEventDaysToSync;	// 76 = 0x4c
	int _preferredToDoDaysToSync;	// 80 = 0x50
	NSMutableSet *_calendars;	// 84 = 0x54
	BOOL _subscribedCalendarsChanged;	// 88 = 0x58
	NSString *_collectionSetName;	// 92 = 0x5c
	CalDAVPrincipalSearchPropertySet *_searchPropertySet;	// 96 = 0x60
	CoreDAVDiscoveryTaskGroup *_checkValidityTaskGroup;	// 100 = 0x64
	MobileCalDAVAccountRefreshActor *_actor;	// 104 = 0x68
	BOOL _isRefreshing;	// 108 = 0x6c
	BOOL _isSpinning;	// 109 = 0x6d
	BOOL _needsAccountPropertyRefresh;	// 110 = 0x6e
	CalDAVRefreshContext *_refreshContext;	// 112 = 0x70
	NSMutableSet *_searchTaskSet;	// 116 = 0x74
	DACoreDAVLogger *_curLogger;	// 120 = 0x78
	CalDAVServerVersion *_serverVersion;	// 124 = 0x7c
	NSMutableDictionary *_itemIDsToMoveActions;	// 128 = 0x80
	NSMutableSet *_movedItemURLStrings;	// 132 = 0x84
@private
	BOOL _searchQueriesShouldCancel;	// 136 = 0x88
}
@property(assign) int calDAVAccountVersion;	// G=0x3606de75; S=0x3606dea9; 
@property(readonly, assign) NSSet *calendars;	// G=0x3606e98d; 
@property(retain) NSURL *collectionSetURL;	// G=0x3606e5c9; S=0x3606e60d; 
@property(retain) id host;	// G=0x3606e11d; S=0x3606e159; converted property
@property(assign) BOOL isRefreshing;	// G=0x36072391; S=0x360723a1; @synthesize=_isRefreshing
@property(assign) BOOL isWritable;	// G=0x3606e69d; S=0x3606e709; 
@property(readonly, assign) NSMutableDictionary *itemIDsToMoveActions;	// G=0x36072409; @synthesize=_itemIDsToMoveActions
@property(retain) MobileCalDAVPrincipal *mainPrincipal;	// G=0x36072429; S=0x3607243d; @synthesize=_mainPrincipal
@property(readonly, assign) NSSet *movedItemURLStrings;	// G=0x36072419; @synthesize=_movedItemURLStrings
@property(assign) BOOL needsAccountPropertyRefresh;	// G=0x360723e9; S=0x360723f9; @synthesize=_needsAccountPropertyRefresh
@property(readonly, assign) NSDate *ocurrenceCacheEndDate;	// G=0x3606f371; 
@property(readonly, assign) NSDate *ocurrenceCacheStartDate;	// G=0x3606f339; 
@property(assign) int overriddenPort;	// G=0x3606e071; S=0x3606e011; 
@property(retain) NSString *overriddenScheme;	// G=0x3606e101; S=0x3606e0a5; 
@property(retain) NSString *overriddenServer;	// G=0x3606dff5; S=0x3606df99; 
@property(assign) int port;	// G=0x3606e2e9; S=0x3606e2a5; converted property
@property(assign) int preferredEventDaysToSync;	// G=0x36072471; S=0x36072481; @synthesize=_preferredEventDaysToSync
@property(assign) int preferredToDoDaysToSync;	// G=0x36072491; S=0x360724a1; @synthesize=_preferredToDoDaysToSync
@property(retain) id principalURL;	// G=0x3606e399; S=0x3606e3b9; converted property
@property(readonly, assign) NSDictionary *principals;	// G=0x36072461; @synthesize=_principals
@property(retain) CalDAVRefreshContext *refreshContext;	// G=0x360723b1; S=0x360723c5; @synthesize=_refreshContext
@property(retain) id scheme;	// G=0x3606e1e1; S=0x3606e21d; converted property
@property(retain) id searchPropertySet;	// G=0x3606e649; S=0x3606e659; 
@property(assign) BOOL searchQueriesShouldCancel;	// G=0x360724b1; S=0x360724c1; @synthesize=_searchQueriesShouldCancel
@property(assign) CalDAVServerVersion *serverVersion;	// G=0x3606f169; S=0x3606f1d9; 
@property(readonly, assign) BOOL shouldFilterEventSyncTimeRange;	// G=0x3606f3a9; 
@property(readonly, assign) BOOL shouldFilterSyncTimeRangeForInbox;	// G=0x3606f441; 
@property(readonly, assign) BOOL shouldFilterTodoSyncTimeRange;	// G=0x3606f3f5; 
@property(retain, nonatomic) NSDictionary *subscribedCalendars;	// G=0x3606de55; S=0x3606ddb9; 
@property(readonly, assign) BOOL supportsEvents;	// G=0x3606f529; 
@property(readonly, assign) BOOL supportsReminders;	// G=0x3606f4ad; 
@property(readonly, retain) DACoreDAVTaskManager *taskManager;	// G=0x3606f531; converted property
@property(assign) BOOL useSSL;	// G=0x3606e369; S=0x3606e335; converted property
@property(retain) id username;	// G=0x3606deed; S=0x3606df0d; converted property
@property(readonly, assign) NSTimeZone *viewedTimeZone;	// G=0x3606f31d; 
@property(assign) BOOL wasMigrated;	// G=0x3606e74d; S=0x3606e801; 
+ (Class)accountClass;	// 0x3606d041
+ (Class)clientClass;	// 0x3606d05d
+ (id)defaultProperties;	// 0x3606c791
+ (id)supportedDataclasses;	// 0x3606d079
- (id)init;	// 0x3606c8d1
- (id)initWithProperties:(id)properties;	// 0x3606c289
- (id)_calendarConstraintsPath;	// 0x3606f689
- (id)_calendarConstraintsResource;	// 0x3606f585
- (id)_collectActionsFromMoveDictionary:(CFDictionaryRef)moveDictionary forDataclass:(id)dataclass outShouldSave:(BOOL *)anOut;	// 0x3607047d
- (void)_collectMoveActions;	// 0x36070929
- (BOOL)_needsNewAccountIDForOldVersion:(int)oldVersion;	// 0x3606d875
- (id)_oldURLsForKeychain;	// 0x3606d609
- (id)_powerAssertionContext;	// 0x36071de9
- (id)_powerAssertionGroupIdentifier;	// 0x36071ded
- (void)_setSpinning:(BOOL)spinning;	// 0x3606fd45
- (void)_updateCalendarStore:(BOOL)store;	// 0x3606fa35
- (BOOL)_updateCalendarStoreProperties:(void *)properties;	// 0x3606f755
- (void)_upgradeAccountToTelluride;	// 0x3606d111
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x3606d881
- (BOOL)accountNeedsUpgrade;	// 0x3606dcc1
- (void)addCalendar:(id)calendar;	// 0x3606e8c9
- (void)addPrincipal:(id)principal;	// 0x3606f0d5
// declared property getter: - (int)calDAVAccountVersion;	// 0x3606de75
// declared property getter: - (id)calendars;	// 0x3606e98d
- (void)cancelAllSearchQueries;	// 0x360716bd
- (void)cancelRefresh;	// 0x3606fda9
- (void)cancelSearchQuery:(id)query;	// 0x36071575
- (void)checkValidityWithConsumer:(id)consumer;	// 0x36071ba9
// declared property getter: - (id)collectionSetURL;	// 0x3606e5c9
- (void *)copyCalStore;	// 0x3606f701
- (void)coreDAVLogDiagnosticMessage:(id)message atLevel:(int)level;	// 0x3607231d
- (int)coreDAVLogLevel;	// 0x360722fd
- (void)coreDAVLogTransmittedDataPartial:(id)partial;	// 0x3607236d
- (int)coreDAVOutputLevel;	// 0x36072315
- (void)coreDAVTransmittedDataFinished;	// 0x3607238d
- (void)dealloc;	// 0x3606c911
- (void)discoveryTask:(id)task gotAccountInfo:(id)info error:(id)error;	// 0x360717fd
- (void)dropPowerAssertions;	// 0x36071f01
// converted property getter: - (id)host;	// 0x3606e11d
- (BOOL)isCalDAVAccount;	// 0x36071fa1
- (BOOL)isEqualToAccount:(id)account;	// 0x36071fa5
// declared property getter: - (BOOL)isRefreshing;	// 0x36072391
// declared property getter: - (BOOL)isWritable;	// 0x3606e69d
// declared property getter: - (id)itemIDsToMoveActions;	// 0x36072409
- (id)localizedIdenticalAccountFailureMessage;	// 0x360721d5
- (id)localizedInvalidPasswordMessage;	// 0x3607224d
// declared property getter: - (id)mainPrincipal;	// 0x36072429
// declared property getter: - (id)movedItemURLStrings;	// 0x36072419
// declared property getter: - (BOOL)needsAccountPropertyRefresh;	// 0x360723e9
// declared property getter: - (id)ocurrenceCacheEndDate;	// 0x3606f371
// declared property getter: - (id)ocurrenceCacheStartDate;	// 0x3606f339
// declared property getter: - (int)overriddenPort;	// 0x3606e071
// declared property getter: - (id)overriddenScheme;	// 0x3606e101
// declared property getter: - (id)overriddenServer;	// 0x3606dff5
- (void)performSearchQuery:(id)query;	// 0x360711e1
// converted property getter: - (int)port;	// 0x3606e2e9
// declared property getter: - (int)preferredEventDaysToSync;	// 0x36072471
// declared property getter: - (int)preferredToDoDaysToSync;	// 0x36072491
// converted property getter: - (id)principalURL;	// 0x3606e399
// declared property getter: - (id)principals;	// 0x36072461
- (id)properties;	// 0x3606cb91
- (void)reattainPowerAssertions;	// 0x36071f51
- (void)refreshActor:(id)actor didCompleteWithError:(id)error;	// 0x3606fe81
// declared property getter: - (id)refreshContext;	// 0x360723b1
- (void)refreshWithContext:(id)context;	// 0x36070c2d
- (void)releasePowerAssertion;	// 0x36071e61
- (void)reloadCalendars;	// 0x3606f00d
- (void)removeCalendar:(id)calendar;	// 0x3606e921
- (void)removePrincipal:(id)principal;	// 0x3606f12d
- (void)retainPowerAssertion;	// 0x36071dfd
// converted property getter: - (id)scheme;	// 0x3606e1e1
// declared property getter: - (id)searchPropertySet;	// 0x3606e649
- (BOOL)searchQueriesRunning;	// 0x360717c9
// declared property getter: - (BOOL)searchQueriesShouldCancel;	// 0x360724b1
- (id)serverBaseURL;	// 0x3606e4e1
// declared property getter: - (id)serverVersion;	// 0x3606f169
- (void)setAccountDescription:(id)description;	// 0x3606e585
// declared property setter: - (void)setCalDAVAccountVersion:(int)version;	// 0x3606dea9
// declared property setter: - (void)setCollectionSetURL:(id)url;	// 0x3606e60d
// converted property setter: - (void)setHost:(id)host;	// 0x3606e159
// declared property setter: - (void)setIsRefreshing:(BOOL)refreshing;	// 0x360723a1
// declared property setter: - (void)setIsWritable:(BOOL)writable;	// 0x3606e709
// declared property setter: - (void)setMainPrincipal:(id)principal;	// 0x3607243d
// declared property setter: - (void)setNeedsAccountPropertyRefresh:(BOOL)refresh;	// 0x360723f9
// declared property setter: - (void)setOverriddenPort:(int)port;	// 0x3606e011
// declared property setter: - (void)setOverriddenScheme:(id)scheme;	// 0x3606e0a5
// declared property setter: - (void)setOverriddenServer:(id)server;	// 0x3606df99
// converted property setter: - (void)setPort:(int)port;	// 0x3606e2a5
// declared property setter: - (void)setPreferredEventDaysToSync:(int)sync;	// 0x36072481
// declared property setter: - (void)setPreferredToDoDaysToSync:(int)sync;	// 0x360724a1
// converted property setter: - (void)setPrincipalURL:(id)url;	// 0x3606e3b9
// declared property setter: - (void)setRefreshContext:(id)context;	// 0x360723c5
// converted property setter: - (void)setScheme:(id)scheme;	// 0x3606e21d
// declared property setter: - (void)setSearchPropertySet:(id)set;	// 0x3606e659
// declared property setter: - (void)setSearchQueriesShouldCancel:(BOOL)cancel;	// 0x360724c1
// declared property setter: - (void)setServerVersion:(id)version;	// 0x3606f1d9
// declared property setter: - (void)setSubscribedCalendars:(id)calendars;	// 0x3606ddb9
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x3606e335
// converted property setter: - (void)setUsername:(id)username;	// 0x3606df0d
// declared property setter: - (void)setWasMigrated:(BOOL)migrated;	// 0x3606e801
// declared property getter: - (BOOL)shouldFilterEventSyncTimeRange;	// 0x3606f3a9
// declared property getter: - (BOOL)shouldFilterSyncTimeRangeForInbox;	// 0x3606f441
// declared property getter: - (BOOL)shouldFilterTodoSyncTimeRange;	// 0x3606f3f5
- (BOOL)shouldLogTransmittedData;	// 0x36072361
- (void)shutdown;	// 0x360717f9
- (id)spinnerIdentifiers;	// 0x3606fce5
- (id)stateString;	// 0x3606d0a9
// declared property getter: - (id)subscribedCalendars;	// 0x3606de55
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x3606d099
// declared property getter: - (BOOL)supportsEvents;	// 0x3606f529
// declared property getter: - (BOOL)supportsReminders;	// 0x3606f4ad
- (void)task:(id)task didFinishWithError:(id)error;	// 0x36070ec9
// converted property getter: - (id)taskManager;	// 0x3606f531
- (BOOL)upgradeAccount;	// 0x3606dc39
// converted property getter: - (BOOL)useSSL;	// 0x3606e369
// converted property getter: - (id)username;	// 0x3606deed
- (BOOL)usesTokenAuth;	// 0x3606f52d
// declared property getter: - (id)viewedTimeZone;	// 0x3606f31d
// declared property getter: - (BOOL)wasMigrated;	// 0x3606e74d
- (id)wellKnownPaths;	// 0x36071a11
@end

