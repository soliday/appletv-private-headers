/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVTaskDelegate.h"
#import "CoreDAVTaskGroupDelegate.h"

@class NSURL, NSSet, NSDictionary, NSMutableDictionary;

@interface CalDAVAddAttachmentsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate> {
	int _state;	// 44 = 0x2c
	NSURL *_dropboxURL;	// 48 = 0x30
	NSDictionary *_attachments;	// 52 = 0x34
	NSDictionary *_contentTypes;	// 56 = 0x38
	NSMutableDictionary *_sentAttachmentURLsToETags;	// 60 = 0x3c
	NSSet *_attendeePrincipalURLs;	// 64 = 0x40
	NSSet *_aceItems;	// 68 = 0x44
	NSDictionary *_putFailureSizes;	// 72 = 0x48
	BOOL _attendeesCanManageDropBox;	// 76 = 0x4c
}
@property(retain) NSSet *aceItems;	// G=0x35a96bcd; S=0x35a96ba9; @synthesize=_aceItems
@property(retain) NSDictionary *attachments;	// G=0x35a96b19; S=0x35a96af5; @synthesize=_attachments
@property(retain) NSSet *attendeePrincipalURLs;	// G=0x35a96b91; S=0x35a96b6d; @synthesize=_attendeePrincipalURLs
@property(assign) BOOL attendeesCanManageDropBox;	// G=0x35a96575; S=0x35a96585; @synthesize=_attendeesCanManageDropBox
@property(retain) NSDictionary *contentTypes;	// G=0x35a96b55; S=0x35a96b31; @synthesize=_contentTypes
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// @dynamic
@property(retain) NSURL *dropboxURL;	// G=0x35a96add; S=0x35a96ab9; @synthesize=_dropboxURL
@property(readonly, retain) NSDictionary *etags;	// G=0x35a9740d; 
@property(retain) NSDictionary *putFailureSizes;	// G=0x35a96c09; S=0x35a96be5; @synthesize=_putFailureSizes
@property(retain) NSMutableDictionary *sentAttachmentURLsToETags;	// G=0x35a96aa1; S=0x35a96a7d; @synthesize=_sentAttachmentURLsToETags
@property(assign) int state;	// G=0x35a96595; S=0x35a965a5; @synthesize=_state
+ (id)dropboxACEItemsForPrincipalURLs:(id)principalURLs baseURL:(id)url writable:(BOOL)writable;	// 0x35a9670d
- (id)initWithAccountInfoProvider:(id)accountInfoProvider dropboxURL:(id)url attachments:(id)attachments contentTypes:(id)types attendeePrincipalURLs:(id)urls attendeesCanManageDropBox:(BOOL)box taskManager:(id)manager;	// 0x35a9752d
- (void)_finishWithError:(id)error state:(int)state;	// 0x35a973ad
- (void)_makeDropBox;	// 0x35a972d5
- (void)_sendAttachments;	// 0x35a97075
- (void)_updateACLWithState:(int)state;	// 0x35a965b5
// declared property getter: - (id)aceItems;	// 0x35a96bcd
// declared property getter: - (id)attachments;	// 0x35a96b19
// declared property getter: - (id)attendeePrincipalURLs;	// 0x35a96b91
// declared property getter: - (BOOL)attendeesCanManageDropBox;	// 0x35a96575
// declared property getter: - (id)contentTypes;	// 0x35a96b55
- (void)dealloc;	// 0x35a97639
// declared property getter: - (id)dropboxURL;	// 0x35a96add
// declared property getter: - (id)etags;	// 0x35a9740d
// declared property getter: - (id)putFailureSizes;	// 0x35a96c09
// declared property getter: - (id)sentAttachmentURLsToETags;	// 0x35a96aa1
// declared property setter: - (void)setAceItems:(id)items;	// 0x35a96ba9
// declared property setter: - (void)setAttachments:(id)attachments;	// 0x35a96af5
// declared property setter: - (void)setAttendeePrincipalURLs:(id)urls;	// 0x35a96b6d
// declared property setter: - (void)setAttendeesCanManageDropBox:(BOOL)box;	// 0x35a96585
// declared property setter: - (void)setContentTypes:(id)types;	// 0x35a96b31
// declared property setter: - (void)setDropboxURL:(id)url;	// 0x35a96ab9
// declared property setter: - (void)setPutFailureSizes:(id)sizes;	// 0x35a96be5
// declared property setter: - (void)setSentAttachmentURLsToETags:(id)etags;	// 0x35a96a7d
// declared property setter: - (void)setState:(int)state;	// 0x35a965a5
- (void)startTaskGroup;	// 0x35a96f69
// declared property getter: - (int)state;	// 0x35a96595
- (void)task:(id)task didFinishWithError:(id)error;	// 0x35a96d1d
- (void)taskGroup:(id)group didFinishWithError:(id)error;	// 0x35a96c21
@end

