/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedShelfElement : ATVFeedElement {
@private
	int _columnCount;	// 28 = 0x1c
	BOOL _center;	// 32 = 0x20
	NSArray *_sections;	// 36 = 0x24
}
@property(assign, nonatomic) BOOL center;	// G=0x33324c39; S=0x33324c49; @synthesize=_center
@property(assign, nonatomic) int columnCount;	// G=0x33324c19; S=0x33324c29; @synthesize=_columnCount
@property(retain, nonatomic) NSArray *sections;	// G=0x33324c59; S=0x33324c69; @synthesize=_sections
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x333249e9
// declared property getter: - (BOOL)center;	// 0x33324c39
// declared property getter: - (int)columnCount;	// 0x33324c19
- (void)dealloc;	// 0x33324bcd
// declared property getter: - (id)sections;	// 0x33324c59
// declared property setter: - (void)setCenter:(BOOL)center;	// 0x33324c49
// declared property setter: - (void)setColumnCount:(int)count;	// 0x33324c29
// declared property setter: - (void)setSections:(id)sections;	// 0x33324c69
@end
