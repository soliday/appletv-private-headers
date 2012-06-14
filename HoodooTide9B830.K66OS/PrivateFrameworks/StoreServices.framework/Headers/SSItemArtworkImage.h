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
@property(retain, nonatomic) NSURL *URL;	// G=0x3051570d; S=0x30515ae1; 
@property(readonly, assign, nonatomic) int height;	// G=0x30515421; 
@property(copy, nonatomic) NSString *imageKind;	// G=0x30515d4d; S=0x30515d5d; @synthesize=_imageKind
@property(readonly, assign, nonatomic) int imageOrientation;	// G=0x305154cd; 
@property(readonly, assign, nonatomic) float imageScale;	// G=0x3051558d; 
@property(readonly, assign, nonatomic) CGSize imageSize;	// G=0x305159cd; 
@property(readonly, assign, nonatomic, getter=isPrerendered) BOOL prerendered;	// G=0x305155f9; 
@property(readonly, assign, nonatomic) int width;	// G=0x30515661; 
- (id)initWithArtworkDictionary:(id)artworkDictionary;	// 0x30515979
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x30515bb9
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x30515c59
// declared property getter: - (id)URL;	// 0x3051570d
- (void)_setValue:(id)value forKey:(id)key;	// 0x30515b2d
- (id)copyPropertyListEncoding;	// 0x30515c95
- (id)copyWithZone:(NSZone *)zone;	// 0x30515395
- (void *)copyXPCEncoding;	// 0x30515d19
- (void)dealloc;	// 0x30515335
- (id)description;	// 0x305157e1
- (unsigned)hash;	// 0x305158d1
// declared property getter: - (int)height;	// 0x30515421
// declared property getter: - (id)imageKind;	// 0x30515d4d
// declared property getter: - (int)imageOrientation;	// 0x305154cd
// declared property getter: - (float)imageScale;	// 0x3051558d
// declared property getter: - (CGSize)imageSize;	// 0x305159cd
- (BOOL)isEqual:(id)equal;	// 0x305158f9
// declared property getter: - (BOOL)isPrerendered;	// 0x305155f9
// declared property setter: - (void)setImageKind:(id)kind;	// 0x30515d5d
- (void)setImageKindWithTypeName:(id)typeName variantName:(id)name;	// 0x30515a19
// declared property setter: - (void)setURL:(id)url;	// 0x30515ae1
- (void)setValue:(id)value forProperty:(id)property;	// 0x30515b1d
- (id)valueForProperty:(id)property;	// 0x30515799
// declared property getter: - (int)width;	// 0x30515661
@end

