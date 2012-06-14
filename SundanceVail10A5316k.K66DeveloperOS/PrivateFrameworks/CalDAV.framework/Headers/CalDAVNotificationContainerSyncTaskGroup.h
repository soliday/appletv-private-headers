/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVContainerSyncTaskGroup.h> // Unknown library

@class NSSet;

@interface CalDAVNotificationContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
	NSSet *_notificationTypeNamesToFetch;	// 140 = 0x8c
}
@property(retain) NSSet *notificationTypeNamesToFetch;	// G=0x36e51c59; S=0x36e51c6d; @synthesize=_notificationTypeNamesToFetch
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x36e51a51
- (id)copyAdditionalResourcePropertiesToFetch;	// 0x36e51be1
- (id)copyGetTaskWithURL:(id)url;	// 0x36e51b49
- (void)dealloc;	// 0x36e51afd
// declared property getter: - (id)notificationTypeNamesToFetch;	// 0x36e51c59
// declared property setter: - (void)setNotificationTypeNamesToFetch:(id)fetch;	// 0x36e51c6d
- (BOOL)shouldFetchResourceWithEtag:(id)etag propertiesToValues:(id)values;	// 0x36e51b81
@end
