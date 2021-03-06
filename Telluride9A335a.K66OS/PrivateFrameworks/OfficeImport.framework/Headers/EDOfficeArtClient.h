/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OADClient.h"
#import "OfficeImport-Structs.h"
#import "OADTextClient.h"

@class NSMutableDictionary, EDSheet, EDComment, EDTextBox, EDAnchor;

__attribute__((visibility("hidden")))
@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient> {
@private
	EDSheet *mSheet;	// 4 = 0x4
	id mClientState;	// 8 = 0x8
	EDAnchor *mAnchor;	// 12 = 0xc
	EDTextBox *mTextBox;	// 16 = 0x10
	EDComment *mComment;	// 20 = 0x14
	NSMutableDictionary *mTableModels;	// 24 = 0x18
	CGRect mBounds;	// 28 = 0x1c
	bool mIsBoundsSet;	// 44 = 0x2c
}
@property(retain) id anchor;	// G=0x3522c585; S=0x35227b1d; converted property
@property(assign) CGRect bounds;	// G=0x352a4e4d; S=0x352a420d; converted property
@property(retain) id clientState;	// G=0x35376861; S=0x353769ad; converted property
@property(retain) id comment;	// G=0x3522dd39; S=0x352a3119; converted property
@property(retain) id sheet;	// G=0x35376881; S=0x35297181; converted property
@property(retain) id tableModels;	// G=0x35376891; S=0x3537696d; converted property
@property(retain) id textBox;	// G=0x35284f55; S=0x35284dfd; converted property
- (id)init;	// 0x35227951
// converted property getter: - (id)anchor;	// 0x3522c585
- (bool)areBoundsSet;	// 0x35376871
// converted property getter: - (CGRect)bounds;	// 0x352a4e4d
// converted property getter: - (id)clientState;	// 0x35376861
// converted property getter: - (id)comment;	// 0x3522dd39
- (void)dealloc;	// 0x352377c5
- (BOOL)hasBounds;	// 0x3522c575
- (BOOL)hasText;	// 0x3522f4a5
// converted property setter: - (void)setAnchor:(id)anchor;	// 0x35227b1d
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x352a420d
// converted property setter: - (void)setClientState:(id)state;	// 0x353769ad
// converted property setter: - (void)setComment:(id)comment;	// 0x352a3119
// converted property setter: - (void)setSheet:(id)sheet;	// 0x35297181
// converted property setter: - (void)setTableModels:(id)models;	// 0x3537696d
// converted property setter: - (void)setTextBox:(id)box;	// 0x35284dfd
// converted property getter: - (id)sheet;	// 0x35376881
// converted property getter: - (id)tableModels;	// 0x35376891
// converted property getter: - (id)textBox;	// 0x35284f55
@end

