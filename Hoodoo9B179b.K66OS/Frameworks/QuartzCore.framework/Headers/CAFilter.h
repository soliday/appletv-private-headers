/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CAFilter : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	unsigned _type;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	unsigned _flags;	// 12 = 0xc
	void *_attr;	// 16 = 0x10
	void *_cache;	// 20 = 0x14
}
@property(assign) BOOL cachesInputImage;	// G=0x34f5bbe1; S=0x34f5bf29; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x34f5bbcd; S=0x34f5bf15; 
@property(copy) NSString *name;	// G=0x34ea3ebd; S=0x34f5bdd9; 
@property(readonly, assign) NSString *type;	// G=0x34f5bbf9; 
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x34f5bbf5
+ (id)filterTypes;	// 0x34f5bcdd
+ (id)filterWithName:(id)name;	// 0x34f5bdc9
+ (id)filterWithType:(id)type;	// 0x34f5bd8d
- (id)initWithCoder:(id)coder;	// 0x34f5c075
- (id)initWithName:(id)name;	// 0x34f5bc85
- (id)initWithType:(id)type;	// 0x34f5bc0d
- (Object *)CA_copyRenderValue;	// 0x34eab0ed
// declared property getter: - (BOOL)cachesInputImage;	// 0x34f5bbe1
- (id)copyWithZone:(NSZone *)zone;	// 0x34ea50c9
- (void)dealloc;	// 0x34f5bfe5
- (BOOL)enabled;	// 0x34f5bc95
- (void)encodeWithCoder:(id)coder;	// 0x34f5c1bd
// declared property getter: - (BOOL)isEnabled;	// 0x34f5bbcd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x34ea50b9
// declared property getter: - (id)name;	// 0x34ea3ebd
// declared property setter: - (void)setCachesInputImage:(BOOL)image;	// 0x34f5bf29
- (void)setDefaults;	// 0x34f5bf91
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x34f5bf15
// declared property setter: - (void)setName:(id)name;	// 0x34f5bdd9
- (void)setValue:(id)value forKey:(id)key;	// 0x34ea5189
// declared property getter: - (id)type;	// 0x34f5bbf9
- (id)valueForKey:(id)key;	// 0x34ea3ecd
@end

