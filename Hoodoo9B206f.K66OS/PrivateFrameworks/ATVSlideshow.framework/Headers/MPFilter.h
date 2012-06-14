/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "MPAnimationSupport.h"

@class NSMutableDictionary, MCFilter, MPFilterInternal, NSString;
@protocol MPFilterSupport;

@interface MPFilter : NSObject <NSCoding, NSCopying, MPAnimationSupport> {
@private
	NSMutableDictionary *_attributes;	// 4 = 0x4
	NSMutableDictionary *_animationPaths;	// 8 = 0x8
	MCFilter *_filter;	// 12 = 0xc
	NSObject<MPFilterSupport> *_parent;	// 16 = 0x10
	MPFilterInternal *_internal;	// 20 = 0x14
}
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x309d5209; converted property
@property(retain) MCFilter *filter;	// G=0x309d5571; S=0x309d58cd; converted property
@property(copy, nonatomic) NSString *filterID;	// G=0x309d4ec5; S=0x309d4ee5; @dynamic
@property(retain) id parent;	// G=0x309d5561; S=0x309d5ca5; converted property
@property(copy, nonatomic) NSString *presetID;	// G=0x309d4f89; S=0x309d4fa9; @dynamic
+ (id)filterWithFilterID:(id)filterID;	// 0x309d4865
- (id)init;	// 0x309d4911
- (id)initWithCoder:(id)coder;	// 0x309d4c15
- (id)initWithFilterID:(id)filterID;	// 0x309d48a1
- (id)animationPathForKey:(id)key;	// 0x309d5219
// converted property getter: - (id)animationPaths;	// 0x309d5209
- (id)convertMCAttributeToMPAttribute:(id)mpattribute withKey:(id)key;	// 0x309d5705
- (id)convertMPAttributeToMCAttribute:(id)mcattribute withKey:(id)key;	// 0x309d56b9
- (void)copyAnimationPaths:(id)paths;	// 0x309d57f5
- (void)copyStruct:(id)aStruct;	// 0x309d5751
- (id)copyWithZone:(NSZone *)zone;	// 0x309d49cd
- (void)dealloc;	// 0x309d4e25
- (id)description;	// 0x309d4a51
- (void)dump;	// 0x309d5581
- (void)encodeWithCoder:(id)coder;	// 0x309d4b11
// converted property getter: - (id)filter;	// 0x309d5571
- (id)filterAttributeForKey:(id)key;	// 0x309d5075
- (id)filterAttributes;	// 0x309d5065
// declared property getter: - (id)filterID;	// 0x309d4ec5
- (void)finalize;	// 0x309d4df9
- (id)fullDebugLog;	// 0x309d55a9
- (int)index;	// 0x309d551d
// converted property getter: - (id)parent;	// 0x309d5561
- (id)parentDocument;	// 0x309d5d01
// declared property getter: - (id)presetID;	// 0x309d4f89
- (void)removeAnimationPathForKey:(id)key;	// 0x309d5435
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x309d5239
- (void)setDefaults;	// 0x309d55e9
// converted property setter: - (void)setFilter:(id)filter;	// 0x309d58cd
- (void)setFilterAttribute:(id)attribute forKey:(id)key;	// 0x309d5095
// declared property setter: - (void)setFilterID:(id)anId;	// 0x309d4ee5
// converted property setter: - (void)setParent:(id)parent;	// 0x309d5ca5
// declared property setter: - (void)setPresetID:(id)anId;	// 0x309d4fa9
@end

