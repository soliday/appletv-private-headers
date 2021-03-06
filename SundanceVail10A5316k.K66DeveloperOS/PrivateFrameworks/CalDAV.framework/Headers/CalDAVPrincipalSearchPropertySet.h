/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <NSObject.h> // Unknown library

@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : NSObject {
	NSSet *_properties;	// 4 = 0x4
}
@property(readonly, assign) NSSet *stringProperties;	// G=0x36e5eeb1; @synthesize=_properties
@property(readonly, assign) BOOL supportsPropertySearch;	// G=0x36e5ee4d; 
+ (id)searchSetWithProperties:(id)properties;	// 0x36e5ed6d
- (id)initWithSearchProperties:(id)searchProperties;	// 0x36e5eb1d
- (id)initWithStringProperties:(id)stringProperties;	// 0x36e5ed19
- (void)dealloc;	// 0x36e5ead1
- (BOOL)isEqualToPropertySet:(id)propertySet;	// 0x36e5ee79
// declared property getter: - (id)stringProperties;	// 0x36e5eeb1
// declared property getter: - (BOOL)supportsPropertySearch;	// 0x36e5ee4d
- (BOOL)supportsPropertyTypeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x36e5edb5
- (BOOL)supportsWellKnownType:(int)type;	// 0x36e5ee01
@end

