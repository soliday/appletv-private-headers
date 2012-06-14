/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "NSCoding.h"
#import "CoreImage-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class CIImage;

@interface CIFilter : NSObject <NSCoding, NSCopying> {
	void *_priv[8];	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CIImage *outputImage;	// G=0x36dec755; @dynamic
+ (id)_filterArrayFromProperties:(id)properties;	// 0x36dedaa9
+ (id)_filterArrayFromProperties:(id)properties inputImageExtent:(CGRect)extent;	// 0x36ded40d
+ (id)_propertyArrayFromFilters:(id)filters inputImageExtent:(CGRect)extent;	// 0x36decd15
+ (id)customAttributes;	// 0x36deccd1
+ (id)filterNamesInCategories:(id)categories;	// 0x36dec185
+ (id)filterNamesInCategory:(id)category;	// 0x36dec145
+ (id)filterWithName:(id)name;	// 0x36dec011
+ (id)filterWithName:(id)name keysAndValues:(id)values;	// 0x36dec0e5
- (id)initWithCoder:(id)coder;	// 0x36dec8e9
- (void)_copyAttributesTo:(id)to;	// 0x36deca59
- (id)_copyFilterWithZone:(NSZone *)zone;	// 0x36deca5d
- (id)_filterClassDescription;	// 0x36deccd5
- (id)_initFromProperties:(id)properties;	// 0x36dedc55
- (BOOL)_isIdentity;	// 0x36debf45
- (BOOL)_isIdentity;	// 0x36decd0d
- (id)_outputProperties;	// 0x36decd11
- (id)attributes;	// 0x36dec759
- (id)copyWithZone:(NSZone *)zone;	// 0x36deca99
- (void)dealloc;	// 0x36dec635
- (id)description;	// 0x36decb99
- (void)encodeWithCoder:(id)coder;	// 0x36dec785
- (unsigned)hash;	// 0x36debf49
- (id)inputKeys;	// 0x36dec705
- (BOOL)isEqual:(id)equal;	// 0x36debe1d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x36decb89
- (id)name;	// 0x36dec619
// declared property getter: - (id)outputImage;	// 0x36dec755
- (id)outputKeys;	// 0x36dec72d
- (void)setDefaults;	// 0x36dec781
@end
