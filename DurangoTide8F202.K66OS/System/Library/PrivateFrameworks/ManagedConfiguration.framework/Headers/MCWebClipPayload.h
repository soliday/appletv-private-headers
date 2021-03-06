/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString, NSData, NSURL;

@interface MCWebClipPayload : MCPayload {
@private
	NSURL *_URL;	// 40 = 0x28
	NSString *_label;	// 44 = 0x2c
	NSData *_iconData;	// 48 = 0x30
	BOOL _isRemovable;	// 52 = 0x34
	BOOL _precomposed;	// 53 = 0x35
	BOOL _fullScreen;	// 54 = 0x36
}
@property(readonly, assign) NSURL *URL;	// G=0x30065935; @synthesize=_URL
@property(readonly, assign) BOOL fullScreen;	// G=0x300658e5; @synthesize=_fullScreen
@property(readonly, assign) NSData *iconData;	// G=0x30065915; @synthesize=_iconData
@property(readonly, assign) BOOL isRemovable;	// G=0x30065905; @synthesize=_isRemovable
@property(readonly, assign) NSString *label;	// G=0x30065925; @synthesize=_label
@property(readonly, assign) BOOL precomposed;	// G=0x300658f5; @synthesize=_precomposed
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3006642d
+ (id)typeStrings;	// 0x30065aad
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x30065ad5
// declared property getter: - (id)URL;	// 0x30065935
- (void)dealloc;	// 0x3006597d
- (id)description;	// 0x3006628d
// declared property getter: - (BOOL)fullScreen;	// 0x300658e5
// declared property getter: - (id)iconData;	// 0x30065915
// declared property getter: - (BOOL)isRemovable;	// 0x30065905
// declared property getter: - (id)label;	// 0x30065925
// declared property getter: - (BOOL)precomposed;	// 0x300658f5
- (id)stubDictionary;	// 0x300659e9
- (id)subtitle1Description;	// 0x30065959
- (id)subtitle1Label;	// 0x30066405
- (id)subtitle2Description;	// 0x30065945
- (id)subtitle2Label;	// 0x300663f1
- (id)title;	// 0x30066419
@end

