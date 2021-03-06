/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBCacheKey.h"
#import "NSCoding.h"
#import "UIKBShape.h"

@class NSString, NSMutableDictionary, NSArray, NSMutableArray, NSDictionary;

@interface UIKBKeyboard : UIKBShape <NSCoding, UIKBCacheKey> {
	NSString *m_name;	// 60 = 0x3c
	NSString *m_visualStyle;	// 64 = 0x40
	NSString *m_layout;	// 68 = 0x44
	NSMutableArray *m_keyplanes;	// 72 = 0x48
	NSMutableDictionary *m_keyCache;	// 76 = 0x4c
	NSMutableDictionary *m_keysetCache;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x35612e31; 
@property(retain, nonatomic) NSDictionary *keyCache;	// G=0x356130b1; S=0x356130c1; @synthesize=m_keyCache
@property(retain, nonatomic) NSArray *keyplanes;	// G=0x3561307d; S=0x3561308d; @synthesize=m_keyplanes
@property(retain, nonatomic) NSMutableDictionary *keysetCache;	// G=0x356130e5; S=0x356130f5; @synthesize=m_keysetCache
@property(readonly, assign, nonatomic) NSString *layoutName;	// G=0x35612131; 
@property(retain, nonatomic) NSString *name;	// G=0x35613015; S=0x35613025; @synthesize=m_name
@property(retain, nonatomic) NSString *visualStyle;	// G=0x35613049; S=0x35613059; @synthesize=m_visualStyle
+ (id)keyboard;	// 0x35611f8d
- (id)init;	// 0x35611fd5
- (id)initWithCoder:(id)coder;	// 0x35612435
- (void)addKeyplane:(id)keyplane;	// 0x35612bc1
// declared property getter: - (id)cacheKey;	// 0x35612e31
- (void)cacheKey:(id)key onKeyplane:(id)keyplane;	// 0x35612179
- (id)cachedKeysByKeyName:(id)name onKeyplane:(id)keyplane;	// 0x35612321
- (id)currentKeyplanes;	// 0x35612e91
- (void)dealloc;	// 0x3561207d
- (id)description;	// 0x35612be1
- (void)encodeWithCoder:(id)coder;	// 0x356128b5
- (BOOL)isEqual:(id)equal;	// 0x35612951
// declared property getter: - (id)keyCache;	// 0x356130b1
- (id)keyplaneForKey:(id)key;	// 0x35612ea1
- (id)keyplaneWithName:(id)name;	// 0x35612af9
// declared property getter: - (id)keyplanes;	// 0x3561307d
// declared property getter: - (id)keysetCache;	// 0x356130e5
- (void)layout;	// 0x35612c8d
// declared property getter: - (id)layoutName;	// 0x35612131
- (void)makeLikeOther:(id)other;	// 0x356129fd
// declared property getter: - (id)name;	// 0x35613015
// declared property setter: - (void)setKeyCache:(id)cache;	// 0x356130c1
// declared property setter: - (void)setKeyplanes:(id)keyplanes;	// 0x3561308d
// declared property setter: - (void)setKeysetCache:(id)cache;	// 0x356130f5
// declared property setter: - (void)setName:(id)name;	// 0x35613025
// declared property setter: - (void)setVisualStyle:(id)style;	// 0x35613059
// declared property getter: - (id)visualStyle;	// 0x35613049
@end

