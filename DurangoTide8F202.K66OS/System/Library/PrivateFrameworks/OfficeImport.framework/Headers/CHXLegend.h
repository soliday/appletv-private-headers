/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CHXLegend : NSObject {
}
+ (id)chdLegendEntryFromXmlLegendEntryElement:(xmlNode *)xmlLegendEntryElement defaultFont:(id)font state:(id)state;	// 0x31a8cd55
+ (id)chdLegendFromXmlLegendElement:(xmlNode *)xmlLegendElement state:(id)state;	// 0x31a84079
+ (int)chdLegendPositionFromXmlLegendPositionElement:(xmlNode *)xmlLegendPositionElement;	// 0x31a84339
+ (void)setDefaultLegendBounds:(id)bounds legendPosition:(int)position;	// 0x31a8440d
@end

