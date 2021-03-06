/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVGetDelegatesBaseTaskGroup.h"

@class NSMutableArray;

@interface CalDAVGetDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup {
	int _state;	// 68 = 0x44
	NSMutableArray *_nestedGroupPrincipalURLs;	// 72 = 0x48
}
@property(retain) NSMutableArray *nestedGroupPrincipalURLs;	// G=0x35fc38a1; S=0x35fc387d; @synthesize=_nestedGroupPrincipalURLs
@property(assign) int state;	// G=0x35fc33dd; S=0x35fc33ed; @synthesize=_state
- (id)initWithAccountInfoProvider:(id)accountInfoProvider principalURL:(id)url taskManager:(id)manager;	// 0x35fc3f05
- (void)_expandProperties;	// 0x35fc33fd
- (void)_finishWithError:(id)error state:(int)state;	// 0x35fc3ea5
- (void)_getChildProperties;	// 0x35fc36ed
- (void)_getGroupMembershipForURL:(id)url state:(int)state;	// 0x35fc3561
- (void)dealloc;	// 0x35fc3831
// declared property getter: - (id)nestedGroupPrincipalURLs;	// 0x35fc38a1
// declared property setter: - (void)setNestedGroupPrincipalURLs:(id)urls;	// 0x35fc387d
// declared property setter: - (void)setState:(int)state;	// 0x35fc33ed
- (void)startTaskGroup;	// 0x35fc37d5
// declared property getter: - (int)state;	// 0x35fc33dd
- (void)task:(id)task didFinishWithError:(id)error;	// 0x35fc39a5
- (void)taskGroup:(id)group didFinishWithError:(id)error;	// 0x35fc38b9
@end

