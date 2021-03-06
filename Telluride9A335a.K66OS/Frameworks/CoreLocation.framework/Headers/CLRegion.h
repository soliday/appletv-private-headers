/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "CoreLocation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CLRegion : NSObject <NSCopying, NSCoding> {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) XXStruct_zYrK5D center;	// G=0x302bce29; 
@property(readonly, assign, nonatomic) XXStruct_PcbLhD clientRegion;	// G=0x302bcec1; 
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x302bce81; 
@property(readonly, assign, nonatomic) double radius;	// G=0x302bce59; 
- (id)initCircularRegionWithCenter:(XXStruct_zYrK5D)center radius:(double)radius identifier:(id)identifier;	// 0x302bc011
- (id)initWithClientRegion:(XXStruct_PcbLhD)clientRegion;	// 0x302bbc11
- (id)initWithCoder:(id)coder;	// 0x302bc60d
// declared property getter: - (XXStruct_zYrK5D)center;	// 0x302bce29
// declared property getter: - (XXStruct_PcbLhD)clientRegion;	// 0x302bcec1
- (BOOL)containsCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x302bcf65
- (id)copyWithZone:(NSZone *)zone;	// 0x302bcdd5
- (void)dealloc;	// 0x302bc5c1
- (id)description;	// 0x302bceed
- (void)encodeWithCoder:(id)coder;	// 0x302bcc81
// declared property getter: - (id)identifier;	// 0x302bce81
// declared property getter: - (double)radius;	// 0x302bce59
@end

