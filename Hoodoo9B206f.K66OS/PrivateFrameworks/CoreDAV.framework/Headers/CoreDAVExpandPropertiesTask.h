/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropertyFindBaseTask.h"

@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask {
	NSMutableSet *_propertiesToExpand;	// 140 = 0x8c
}
@property(retain) NSMutableSet *propertiesToExpand;	// G=0x33a0e4c5; S=0x33a0e4d9; @synthesize=_propertiesToExpand
- (id)initWithPropertiesToFind:(id)find atURL:(id)url expandedName:(id)name expandedNameSpace:(id)space;	// 0x33a0dcad
- (void)addPropertyToExpandWithPropertiesToFind:(id)find expandedName:(id)name expandedNameSpace:(id)space;	// 0x33a0dd39
- (void)dealloc;	// 0x33a0dc61
- (id)description;	// 0x33a0ddb9
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x33a0e481
- (id)httpMethod;	// 0x33a0de7d
- (id)parseHints;	// 0x33a0e169
// declared property getter: - (id)propertiesToExpand;	// 0x33a0e4c5
- (id)requestBody;	// 0x33a0de89
// declared property setter: - (void)setPropertiesToExpand:(id)expand;	// 0x33a0e4d9
@end

