/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library

@class NSMutableSet;
@protocol CalDAVPrincipal;

@interface CalDAVOperation : CoreDAVTaskGroup {
	id<CalDAVPrincipal> _principal;	// 44 = 0x2c
	BOOL _isCancellingTaskGroups;	// 48 = 0x30
	NSMutableSet *_outstandingTaskGroups;	// 52 = 0x34
}
@property(readonly, assign) NSMutableSet *outstandingTaskGroups;	// G=0x314846f1; @synthesize=_outstandingTaskGroups
@property(readonly, assign) id<CalDAVPrincipal> principal;	// G=0x31484701; @synthesize=_principal
- (id)init;	// 0x31484711
- (id)initWithPrincipal:(id)principal;	// 0x314847c5
- (void)_tearDownAllTaskGroupsWithBlock:(id)block;	// 0x31484931
- (void)bailWithError:(id)error;	// 0x3148486d
- (void)cancelTaskGroup;	// 0x314848e9
- (void)dealloc;	// 0x31484a25
// declared property getter: - (id)outstandingTaskGroups;	// 0x314846f1
// declared property getter: - (id)principal;	// 0x31484701
@end

