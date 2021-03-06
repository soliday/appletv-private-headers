/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSDictionary, NSMutableDictionary;

@interface MPGenericAction : MPAction {
	NSMutableDictionary *_attributes;	// 20 = 0x14
}
@property(copy, nonatomic) NSDictionary *attributes;	// G=0x32e3e609; S=0x32e3e31d; @synthesize=_attributes
+ (id)genericAction;	// 0x32e3e109
- (id)init;	// 0x32e3e14d
- (id)initWithCoder:(id)coder;	// 0x32e3e18d
- (id)attributeForKey:(id)key;	// 0x32e3e2fd
// declared property getter: - (id)attributes;	// 0x32e3e609
- (id)copyWithZone:(NSZone *)zone;	// 0x32e3e2a9
- (void)dealloc;	// 0x32e3e1fd
- (void)encodeWithCoder:(id)coder;	// 0x32e3e249
- (void)removeAttributeForKey:(id)key;	// 0x32e3e4f9
- (void)setAction:(id)action;	// 0x32e3e5ad
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x32e3e3e9
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x32e3e31d
@end

