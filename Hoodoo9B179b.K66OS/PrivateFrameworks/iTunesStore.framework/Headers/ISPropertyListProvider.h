/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "NSCopying.h"
#import "ISDataProvider.h"
#import "iTunesStore-Structs.h"


@interface ISPropertyListProvider : ISDataProvider <NSCopying> {
	BOOL _shouldPostFooterSectionChanged;	// 40 = 0x28
	BOOL _shouldProcessAccount;	// 41 = 0x29
	BOOL _shouldProcessAuthenticationDialogs;	// 42 = 0x2a
	BOOL _shouldProcessDialogs;	// 43 = 0x2b
	BOOL _shouldProcessProtocol;	// 44 = 0x2c
	BOOL _shouldTriggerDownloads;	// 45 = 0x2d
}
@property(assign) BOOL shouldPostFooterSectionChanged;	// G=0x3694fd21; S=0x3694fd31; @synthesize=_shouldPostFooterSectionChanged
@property(assign) BOOL shouldProcessAccount;	// G=0x3694fd41; S=0x3694fd51; @synthesize=_shouldProcessAccount
@property(assign) BOOL shouldProcessAuthenticationDialogs;	// G=0x3694fd61; S=0x3694fd71; @synthesize=_shouldProcessAuthenticationDialogs
@property(assign) BOOL shouldProcessDialogs;	// G=0x3694fd81; S=0x3694fd91; @synthesize=_shouldProcessDialogs
@property(assign) BOOL shouldProcessProtocol;	// G=0x3694fda1; S=0x3694fdb1; @synthesize=_shouldProcessProtocol
@property(assign) BOOL shouldTriggerDownloads;	// G=0x3694fdc1; S=0x3694fdd1; @synthesize=_shouldTriggerDownloads
- (id)init;	// 0x3694ed01
- (void)_checkDownloadQueues;	// 0x3694f469
- (void)_performActionsForResponse:(id)response;	// 0x3694f4cd
- (BOOL)_processFailureTypeFromPropertyList:(id)propertyList error:(id *)error;	// 0x3694faad
- (BOOL)_runAuthorizationDialog:(id)dialog returningError:(id *)error;	// 0x3694fb65
- (void)_selectFooterSection:(id)section;	// 0x3694f995
- (id)copyWithZone:(NSZone *)zone;	// 0x3694ed85
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x3694f379
- (BOOL)processDialogFromPropertyList:(id)propertyList returningError:(id *)error;	// 0x3694ee79
- (BOOL)processPropertyList:(id)list returningError:(id *)error;	// 0x3694f12d
// declared property setter: - (void)setShouldPostFooterSectionChanged:(BOOL)postFooterSectionChanged;	// 0x3694fd31
// declared property setter: - (void)setShouldProcessAccount:(BOOL)processAccount;	// 0x3694fd51
// declared property setter: - (void)setShouldProcessAuthenticationDialogs:(BOOL)processAuthenticationDialogs;	// 0x3694fd71
// declared property setter: - (void)setShouldProcessDialogs:(BOOL)processDialogs;	// 0x3694fd91
// declared property setter: - (void)setShouldProcessProtocol:(BOOL)processProtocol;	// 0x3694fdb1
// declared property setter: - (void)setShouldTriggerDownloads:(BOOL)triggerDownloads;	// 0x3694fdd1
// declared property getter: - (BOOL)shouldPostFooterSectionChanged;	// 0x3694fd21
// declared property getter: - (BOOL)shouldProcessAccount;	// 0x3694fd41
// declared property getter: - (BOOL)shouldProcessAuthenticationDialogs;	// 0x3694fd61
// declared property getter: - (BOOL)shouldProcessDialogs;	// 0x3694fd81
// declared property getter: - (BOOL)shouldProcessProtocol;	// 0x3694fda1
// declared property getter: - (BOOL)shouldTriggerDownloads;	// 0x3694fdc1
@end

