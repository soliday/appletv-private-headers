/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
 */

#import "DALDAP-Structs.h"
#import "LDAPTask.h"

@class NSString, NSDate;

@interface LDAPGetDefaultSearchBaseTask : LDAPTask {
	ldap *_ld;	// 16 = 0x10
	NSString *_defaultNamingContext;	// 20 = 0x14
	NSDate *_dateConnectionWentOut;	// 24 = 0x18
}
- (id)_copyDefaultNamingContextFromLDAPElement:(ldapmsg *)ldapelement;	// 0x324f174d
- (id)_initializeServer;	// 0x324f1091
- (void)_invokeBlockOnMainThread:(id)thread;	// 0x324f1d25
- (id)_performQuery;	// 0x324f18d5
- (void)dealloc;	// 0x324f1031
- (void)finishWithError:(id)error;	// 0x324f1d2d
- (int)numDownloadedElements;	// 0x324f1e89
- (void)performTaskInBackground;	// 0x324f1c29
@end
