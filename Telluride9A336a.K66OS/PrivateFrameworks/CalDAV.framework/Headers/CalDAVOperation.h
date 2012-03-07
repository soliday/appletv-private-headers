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
@property(readonly, assign) NSMutableSet *outstandingTaskGroups;	// G=0x338d6811; @synthesize=_outstandingTaskGroups
@property(readonly, assign) id<CalDAVPrincipal> principal;	// G=0x338d6821; @synthesize=_principal
- (id)init;	// 0x338d6831
- (id)initWithPrincipal:(id)principal;	// 0x338d68e5
- (void)_tearDownAllTaskGroupsWithBlock:(id)block;	// 0x338d6a51
- (void)bailWithError:(id)error;	// 0x338d698d
- (void)cancelTaskGroup;	// 0x338d6a09
- (void)dealloc;	// 0x338d6b45
// declared property getter: - (id)outstandingTaskGroups;	// 0x338d6811
// declared property getter: - (id)principal;	// 0x338d6821
@end
