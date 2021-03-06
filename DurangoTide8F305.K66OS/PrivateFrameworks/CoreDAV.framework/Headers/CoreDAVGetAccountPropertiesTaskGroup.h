/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"
#import "CoreDAVOptionsTaskDelegate.h"
#import "CoreDAVPrincipalSearchPropertySetTaskDelegate.h"
#import "CoreDAVPropFindTaskDelegate.h"

@class NSURL, NSSet, NSString;
@protocol CoreDAVGetAccountPropertiesTaskGroupDelegate;

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate> {
@private
	NSURL *_principalURL;	// 44 = 0x2c
	NSString *_displayName;	// 48 = 0x30
	NSURL *_resourceID;	// 52 = 0x34
	NSSet *_emailAddresses;	// 56 = 0x38
	NSSet *_collections;	// 60 = 0x3c
	NSSet *_principalSearchProperties;	// 64 = 0x40
	BOOL _isExpandPropertyReportSupported;	// 68 = 0x44
	BOOL _fetchPrincipalSearchProperties;	// 69 = 0x45
	NSURL *_newServerURL;	// 72 = 0x48
}
@property(readonly, assign) NSSet *collections;	// G=0x3386eb65; @synthesize=_collections
@property(assign, nonatomic) id<CoreDAVGetAccountPropertiesTaskGroupDelegate> delegate;	// @dynamic
@property(readonly, assign) NSString *displayName;	// G=0x3386eb95; @synthesize=_displayName
@property(readonly, assign) NSSet *emailAddresses;	// G=0x3386eb75; @synthesize=_emailAddresses
@property(assign) BOOL fetchPrincipalSearchProperties;	// G=0x3386eb35; S=0x3386eb45; @synthesize=_fetchPrincipalSearchProperties
@property(readonly, assign) BOOL isExpandPropertyReportSupported;	// G=0x3386eb55; @synthesize=_isExpandPropertyReportSupported
@property(retain) NSURL *newServerURL;	// G=0x3386fb91; S=0x3386fba9; @synthesize=_newServerURL
@property(readonly, assign) NSSet *principalSearchProperties;	// G=0x3386eb25; @synthesize=_principalSearchProperties
@property(readonly, assign) NSURL *principalURL;	// G=0x3386eba5; @synthesize=_principalURL
@property(readonly, assign) NSURL *resourceID;	// G=0x3386eb85; @synthesize=_resourceID
- (id)_copyAccountPropertiesPropFindElements;	// 0x3386ef6d
- (void)_parseDAVHeader:(id)header;	// 0x3386ec9d
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x3386f2d5
- (void)_taskCompleted:(id)completed withError:(id)error;	// 0x3386ec51
// declared property getter: - (id)collections;	// 0x3386eb65
- (void)dealloc;	// 0x3386f221
- (id)description;	// 0x3386f129
// declared property getter: - (id)displayName;	// 0x3386eb95
// declared property getter: - (id)emailAddresses;	// 0x3386eb75
// declared property getter: - (BOOL)fetchPrincipalSearchProperties;	// 0x3386eb35
- (id)homeSet;	// 0x3386eed1
// declared property getter: - (BOOL)isExpandPropertyReportSupported;	// 0x3386eb55
// declared property getter: - (id)newServerURL;	// 0x3386fb91
- (void)optionsTask:(id)task error:(id)error;	// 0x3386ebb5
// declared property getter: - (id)principalSearchProperties;	// 0x3386eb25
// declared property getter: - (id)principalURL;	// 0x3386eba5
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x3386f895
// declared property getter: - (id)resourceID;	// 0x3386eb85
- (void)searchPropertySetTask:(id)task completetWithPropertySearchSet:(id)propertySearchSet error:(id)error;	// 0x3386f7f9
// declared property setter: - (void)setFetchPrincipalSearchProperties:(BOOL)properties;	// 0x3386eb45
// declared property setter: - (void)setNewServerURL:(id)url;	// 0x3386fba9
- (void)startTaskGroup;	// 0x3386edb5
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x3386f0c9
@end

