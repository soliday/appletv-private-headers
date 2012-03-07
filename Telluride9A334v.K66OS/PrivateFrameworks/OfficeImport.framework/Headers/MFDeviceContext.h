/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class MFFont, MFBrush, MFPalette, MFPath, MFPen, MFTransform, NSColorStub;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFDeviceContext : NSObject <NSCopying> {
@private
	NSObject<MFDeviceDriver> *m_driver;	// 4 = 0x4
	bool m_textUpdateCP;	// 8 = 0x8
	double m_miterLimit;	// 12 = 0xc
	int m_textHorizontalAlign;	// 20 = 0x14
	int m_textVerticalAlign;	// 24 = 0x18
	int m_textDirection;	// 28 = 0x1c
	MFFont *m_font;	// 32 = 0x20
	NSColorStub *m_textColour;	// 36 = 0x24
	int m_textBreakExtra;	// 40 = 0x28
	int m_textBreakCount;	// 44 = 0x2c
	int m_textCharExtra;	// 48 = 0x30
	NSColorStub *m_bkColour;	// 52 = 0x34
	int m_bkMode;	// 56 = 0x38
	CGPoint m_brushOrg;	// 60 = 0x3c
	CGPoint m_penPos;	// 68 = 0x44
	int m_arcDirection;	// 76 = 0x4c
	int m_polyFillMode;	// 80 = 0x50
	MFTransform *m_transform;	// 84 = 0x54
	MFPen *m_pen;	// 88 = 0x58
	MFBrush *m_brush;	// 92 = 0x5c
	MFPalette *m_selectedPalette;	// 96 = 0x60
	int m_rop2;	// 100 = 0x64
	int m_stretchMode;	// 104 = 0x68
	MFPath *m_path;	// 108 = 0x6c
}
+ (id)deviceContextWithDriver:(id)driver;	// 0x357a86ad
- (id)initWithDriver:(id)driver;	// 0x355770bd
- (id)copyWithZone:(NSZone *)zone;	// 0x3557ce75
- (void)dealloc;	// 0x355731f1
- (int)getArcDirection;	// 0x3557d439
- (id)getBkColour;	// 0x3557d3ad
- (int)getBkMode;	// 0x3557d3fd
- (id)getBrush;	// 0x3557be4d
- (CGPoint)getBrushOrg;	// 0x3557d40d
- (id)getCurrentTransform;	// 0x35578759
- (id)getFont;	// 0x3557a755
- (double)getMiterLimit;	// 0x3557d2d1
- (id)getPath;	// 0x3557be25
- (id)getPen;	// 0x3557c1e5
- (CGPoint)getPenPosition;	// 0x3557d295
- (int)getPolyFillMode;	// 0x3557bf11
- (int)getRop2;	// 0x3557c049
- (id)getSelectedPalette;	// 0x3557d82d
- (int)getStretchBltMode;	// 0x3557d469
- (int)getTextBreakCount;	// 0x3557d34d
- (int)getTextBreakExtra;	// 0x3557d35d
- (int)getTextCharExtra;	// 0x3557d38d
- (id)getTextColour;	// 0x3557aa79
- (int)getTextDirection;	// 0x3557d32d
- (int)getTextHorizontalAlign;	// 0x3557d2fd
- (bool)getTextUpdateCP;	// 0x3557ac6d
- (int)getTextVerticalAlign;	// 0x3557aa69
- (void)setArcDirection:(int)direction;	// 0x3557d449
- (void)setBkColour:(id)colour;	// 0x3557d3bd
- (void)setBkMode:(int)mode;	// 0x3557a345
- (void)setBrush:(id)brush;	// 0x3557ae8d
- (void)setBrushOrg:(CGPoint)org;	// 0x3557d425
- (void)setCurrentTransform:(id)transform;	// 0x3557d7ed
- (void)setFont:(id)font;	// 0x3557a291
- (void)setMiterLimit:(double)limit;	// 0x3557d2e9
- (void)setPath:(id)path;	// 0x3557db4d
- (void)setPen:(id)pen;	// 0x3557affd
- (void)setPenPosition:(CGPoint)position;	// 0x3557d2ad
- (void)setPolyFillMode:(int)mode;	// 0x3557d459
- (void)setRop2:(int)a2;	// 0x3557cabd
- (void)setSelectedPalette:(id)palette;	// 0x3557d83d
- (void)setStretchBltMode:(int)mode;	// 0x3557d479
- (void)setTextCharExtra:(int)extra;	// 0x3557d39d
- (void)setTextColour:(id)colour;	// 0x3557a459
- (void)setTextDirection:(int)direction;	// 0x3557d33d
- (void)setTextHorizontalAlign:(int)align;	// 0x3557d30d
- (void)setTextJustification:(int)justification :(int)arg2;	// 0x3557d36d
- (void)setTextUpdateCP:(bool)cp;	// 0x3557d2c1
- (void)setTextVerticalAlign:(int)align;	// 0x3557d31d
@end
