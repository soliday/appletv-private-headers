/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem {
	NSMutableSet *_principalSearchProperties;	// 24 = 0x18
}
@property(retain) NSMutableSet *principalSearchProperties;	// G=0x33881d61; S=0x33881d79; @synthesize=_principalSearchProperties
- (id)init;	// 0x33881bd5
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x33881cfd
- (void)addPrincipalSearchProperty:(id)property;	// 0x33881abd
- (id)copyParseRules;	// 0x33881ae5
- (void)dealloc;	// 0x33881cc1
- (id)description;	// 0x33881c01
// declared property getter: - (id)principalSearchProperties;	// 0x33881d61
// declared property setter: - (void)setPrincipalSearchProperties:(id)properties;	// 0x33881d79
@end

