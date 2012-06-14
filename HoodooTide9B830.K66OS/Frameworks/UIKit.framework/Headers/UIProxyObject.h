/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"
#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIProxyObject : NSObject <NSCoding> {
@private
	NSString *proxiedObjectIdentifier;	// 4 = 0x4
}
@property(retain) NSString *proxiedObjectIdentifier;	// G=0x30291791; S=0x3029174d; converted property
+ (void)addMappingFromIdentifier:(id)identifier toObject:(id)object forCoder:(id)coder;	// 0x30291425
+ (void)addMappings:(id)mappings forCoder:(id)coder;	// 0x3029149d
+ (id)mappedObjectForCoder:(id)coder withIdentifier:(id)identifier;	// 0x30291575
+ (CFDictionaryRef)proxyDecodingMap;	// 0x302913c9
+ (void)removeMappingsForCoder:(id)coder;	// 0x302915b9
- (id)initWithCoder:(id)coder;	// 0x302915d9
- (void)dealloc;	// 0x30291701
- (void)encodeWithCoder:(id)coder;	// 0x302916d1
// converted property getter: - (id)proxiedObjectIdentifier;	// 0x30291791
// converted property setter: - (void)setProxiedObjectIdentifier:(id)identifier;	// 0x3029174d
@end

