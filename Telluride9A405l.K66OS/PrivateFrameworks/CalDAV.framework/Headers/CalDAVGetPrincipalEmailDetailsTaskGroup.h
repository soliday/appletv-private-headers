/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVTaskDelegate.h"

@class NSURL, NSSet, NSString, CalDAVPrincipalEmailDetailsResult;

@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
	CalDAVPrincipalEmailDetailsResult *_principalResult;	// 44 = 0x2c
	NSURL *_principalURL;	// 48 = 0x30
}
@property(readonly, retain) NSSet *addresses;	// G=0x3516e025; 
@property(readonly, retain) NSString *displayName;	// G=0x3516e04d; 
@property(retain) CalDAVPrincipalEmailDetailsResult *principalResult;	// G=0x3516e139; S=0x3516e115; @synthesize=_principalResult
@property(retain) NSURL *principalURL;	// G=0x3516e175; S=0x3516e151; @synthesize=_principalURL
- (id)initWithAccountInfoProvider:(id)accountInfoProvider principalURL:(id)url taskManager:(id)manager;	// 0x3516e18d
- (void)_finishWithError:(id)error;	// 0x3516d991
- (void)_processPropFind:(id)find;	// 0x3516d9a1
// declared property getter: - (id)addresses;	// 0x3516e025
- (void)dealloc;	// 0x3516e0b5
// declared property getter: - (id)displayName;	// 0x3516e04d
// declared property getter: - (id)principalResult;	// 0x3516e139
// declared property getter: - (id)principalURL;	// 0x3516e175
// declared property setter: - (void)setPrincipalResult:(id)result;	// 0x3516e115
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x3516e151
- (void)startTaskGroup;	// 0x3516d725
- (void)task:(id)task didFinishWithError:(id)error;	// 0x3516df8d
@end

