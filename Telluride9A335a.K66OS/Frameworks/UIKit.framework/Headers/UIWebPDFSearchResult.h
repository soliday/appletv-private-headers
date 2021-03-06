/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface UIWebPDFSearchResult : NSObject {
@private
	NSArray *rotationAngles;	// 4 = 0x4
	unsigned pageIndex;	// 8 = 0x8
	NSArray *strings;	// 12 = 0xc
	NSString *string;	// 16 = 0x10
	CGRect boundingBox;	// 20 = 0x14
	NSArray *rects;	// 36 = 0x24
}
@property(assign, nonatomic) CGRect boundingBox;	// G=0x33d42dfd; S=0x33d42e21; @synthesize
@property(assign, nonatomic) unsigned pageIndex;	// G=0x33d42d75; S=0x33d42d85; @synthesize
@property(retain, nonatomic) NSArray *rects;	// G=0x33d42e3d; S=0x33d42e4d; @synthesize
@property(retain, nonatomic) NSArray *rotationAngles;	// G=0x33d42d41; S=0x33d42d51; @synthesize
@property(retain, nonatomic) NSString *string;	// G=0x33d42dc9; S=0x33d42dd9; @synthesize
@property(retain, nonatomic) NSArray *strings;	// G=0x33d42d95; S=0x33d42da5; @synthesize
// declared property getter: - (CGRect)boundingBox;	// 0x33d42dfd
// declared property getter: - (unsigned)pageIndex;	// 0x33d42d75
// declared property getter: - (id)rects;	// 0x33d42e3d
// declared property getter: - (id)rotationAngles;	// 0x33d42d41
// declared property setter: - (void)setBoundingBox:(CGRect)box;	// 0x33d42e21
// declared property setter: - (void)setPageIndex:(unsigned)index;	// 0x33d42d85
// declared property setter: - (void)setRects:(id)rects;	// 0x33d42e4d
// declared property setter: - (void)setRotationAngles:(id)angles;	// 0x33d42d51
// declared property setter: - (void)setString:(id)string;	// 0x33d42dd9
// declared property setter: - (void)setStrings:(id)strings;	// 0x33d42da5
// declared property getter: - (id)string;	// 0x33d42dc9
// declared property getter: - (id)strings;	// 0x33d42d95
@end

