/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVCalendarServerShareItem : CoreDAVItem {
	NSMutableSet *_shareesToRemove;	// 24 = 0x18
	NSMutableSet *_shareesToSet;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableSet *shareesToRemove;	// G=0x35166881; @synthesize=_shareesToRemove
@property(readonly, retain) NSMutableSet *shareesToSet;	// G=0x35166869; @synthesize=_shareesToSet
// declared property getter: - (id)shareesToRemove;	// 0x35166881
// declared property getter: - (id)shareesToSet;	// 0x35166869
@end

