/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface CalDAVMove : NSObject {
@private
	int _sourceCalendarID;	// 4 = 0x4
	int _itemID;	// 8 = 0x8
	NSString *_oldExternalID;	// 12 = 0xc
}
@property(assign) int itemID;	// G=0x33161b31; S=0x33161b41; @synthesize=_itemID
@property(retain) NSString *oldExternalID;	// G=0x33161b51; S=0x33161b65; @synthesize=_oldExternalID
@property(assign) int sourceCalendarID;	// G=0x33161b11; S=0x33161b21; @synthesize=_sourceCalendarID
- (id)initWithSourceCalendarID:(int)sourceCalendarID itemID:(int)anId oldExternalID:(id)anId3;	// 0x33161a45
- (void)dealloc;	// 0x33161ac5
// declared property getter: - (int)itemID;	// 0x33161b31
// declared property getter: - (id)oldExternalID;	// 0x33161b51
// declared property setter: - (void)setItemID:(int)anId;	// 0x33161b41
// declared property setter: - (void)setOldExternalID:(id)anId;	// 0x33161b65
// declared property setter: - (void)setSourceCalendarID:(int)anId;	// 0x33161b21
// declared property getter: - (int)sourceCalendarID;	// 0x33161b11
@end

