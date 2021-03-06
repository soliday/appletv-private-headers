/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSSet, CoreDAVMultiStatusItem;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask {
	CoreDAVMultiStatusItem *_multiStatus;	// 104 = 0x68
	NSSet *_propertiesToFind;	// 108 = 0x6c
}
@property(retain) CoreDAVMultiStatusItem *multiStatus;	// G=0x3319ed39; S=0x3319ed7d; @synthesize=_multiStatus
@property(retain) NSSet *propertiesToFind;	// G=0x3319ed21; S=0x3319ed51; @synthesize=_propertiesToFind
- (id)initWithPropertiesToFind:(id)find atURL:(id)url;	// 0x3319e8e9
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x3319e705
- (void)dealloc;	// 0x3319e88d
- (id)description;	// 0x3319e7cd
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x3319eac9
- (id)getTotalFailureError;	// 0x3319eb95
// declared property getter: - (id)multiStatus;	// 0x3319ed39
- (id)parseHints;	// 0x3319e7b9
// declared property getter: - (id)propertiesToFind;	// 0x3319ed21
// declared property setter: - (void)setMultiStatus:(id)status;	// 0x3319ed7d
// declared property setter: - (void)setPropertiesToFind:(id)find;	// 0x3319ed51
- (id)successfulValueForNameSpace:(id)nameSpace elementName:(id)name;	// 0x3319e9e5
- (void)updateMultiStatusFromResponse;	// 0x3319e671
@end

