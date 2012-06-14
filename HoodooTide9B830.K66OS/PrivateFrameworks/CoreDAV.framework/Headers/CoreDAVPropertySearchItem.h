/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSString, CoreDAVLeafItem;

@interface CoreDAVPropertySearchItem : CoreDAVItem {
	CoreDAVLeafItem *_prop;	// 24 = 0x18
	NSString *_match;	// 28 = 0x1c
	NSString *_matchTypeAttribute;	// 32 = 0x20
}
@property(retain) NSString *match;	// G=0x35de1cb9; S=0x35de1ccd; @synthesize=_match
@property(retain) NSString *matchTypeAttribute;	// G=0x35de1cf1; S=0x35de1d05; @synthesize=_matchTypeAttribute
@property(retain) CoreDAVLeafItem *prop;	// G=0x35de1c81; S=0x35de1c95; @synthesize=_prop
- (id)init;	// 0x35de18b1
- (id)initWithSearchPropertyNameSpace:(id)searchPropertyNameSpace andName:(id)name;	// 0x35de18dd
- (void)dealloc;	// 0x35de193d
- (id)description;	// 0x35de19b1
// declared property getter: - (id)match;	// 0x35de1cb9
// declared property getter: - (id)matchTypeAttribute;	// 0x35de1cf1
// declared property getter: - (id)prop;	// 0x35de1c81
// declared property setter: - (void)setMatch:(id)match;	// 0x35de1ccd
// declared property setter: - (void)setMatchTypeAttribute:(id)attribute;	// 0x35de1d05
// declared property setter: - (void)setProp:(id)prop;	// 0x35de1c95
- (void)write:(id)write;	// 0x35de1ab1
@end

