/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "SSCoding.h"
#import "NSCopying.h"

@class NSString, NSURL, NSMutableDictionary;

@interface SSItemArtworkImage : NSObject <SSCoding, NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
	NSString *_imageKind;	// 8 = 0x8
}
@property(retain, nonatomic) NSURL *URL;	// G=0x327e370d; S=0x327e3ae1; 
@property(readonly, assign, nonatomic) int height;	// G=0x327e3421; 
@property(copy, nonatomic) NSString *imageKind;	// G=0x327e3d4d; S=0x327e3d5d; @synthesize=_imageKind
@property(readonly, assign, nonatomic) int imageOrientation;	// G=0x327e34cd; 
@property(readonly, assign, nonatomic) float imageScale;	// G=0x327e358d; 
@property(readonly, assign, nonatomic) CGSize imageSize;	// G=0x327e39cd; 
@property(readonly, assign, nonatomic, getter=isPrerendered) BOOL prerendered;	// G=0x327e35f9; 
@property(readonly, assign, nonatomic) int width;	// G=0x327e3661; 
- (id)initWithArtworkDictionary:(id)artworkDictionary;	// 0x327e3979
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x327e3bb9
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x327e3c59
// declared property getter: - (id)URL;	// 0x327e370d
- (void)_setValue:(id)value forKey:(id)key;	// 0x327e3b2d
- (id)copyPropertyListEncoding;	// 0x327e3c95
- (id)copyWithZone:(NSZone *)zone;	// 0x327e3395
- (void *)copyXPCEncoding;	// 0x327e3d19
- (void)dealloc;	// 0x327e3335
- (id)description;	// 0x327e37e1
- (unsigned)hash;	// 0x327e38d1
// declared property getter: - (int)height;	// 0x327e3421
// declared property getter: - (id)imageKind;	// 0x327e3d4d
// declared property getter: - (int)imageOrientation;	// 0x327e34cd
// declared property getter: - (float)imageScale;	// 0x327e358d
// declared property getter: - (CGSize)imageSize;	// 0x327e39cd
- (BOOL)isEqual:(id)equal;	// 0x327e38f9
// declared property getter: - (BOOL)isPrerendered;	// 0x327e35f9
// declared property setter: - (void)setImageKind:(id)kind;	// 0x327e3d5d
- (void)setImageKindWithTypeName:(id)typeName variantName:(id)name;	// 0x327e3a19
// declared property setter: - (void)setURL:(id)url;	// 0x327e3ae1
- (void)setValue:(id)value forProperty:(id)property;	// 0x327e3b1d
- (id)valueForProperty:(id)property;	// 0x327e3799
// declared property getter: - (int)width;	// 0x327e3661
@end

