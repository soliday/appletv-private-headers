/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData;

@interface CoreDAVXMLData : NSObject {
@private
	BOOL _shouldAddFormattingSpaces;	// 4 = 0x4
	xmlTextWriter *_writer;	// 8 = 0x8
	xmlDoc *_doc;	// 12 = 0xc
	BOOL _docHasEnded;	// 16 = 0x10
	CFDictionaryRef _seenURIsToPrefixes;	// 20 = 0x14
	CFDictionaryRef _seenURIsToDepth;	// 24 = 0x18
	CFArrayRef _elementStack;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x339faa19; 
@property(assign) BOOL shouldAddFormattingSpaces;	// G=0x339faab9; S=0x339faac9; @synthesize=_shouldAddFormattingSpaces
- (id)init;	// 0x339f9a95
- (const char *)_prefixForNameSpace:(const char *)nameSpace;	// 0x339f9c19
- (void)_startElement:(id)element inNamespace:(id)aNamespace;	// 0x339f9f0d
- (void)_startElement:(id)element inNamespace:(id)aNamespace withAttributeNamesAndValues:(id)attributeNamesAndValues attributes:(void *)attributes;	// 0x339fa079
- (void)appendElement:(id)element inNamespace:(id)aNamespace withStringContent:(id)stringContent withAttributeNamesAndValues:(id)attributeNamesAndValues;	// 0x339fa639
- (void)appendElement:(id)element inNamespace:(id)aNamespace withStringContentAsCDATA:(id)stringContentAsCDATA withAttributeNamesAndValues:(id)attributeNamesAndValues;	// 0x339fa75d
// declared property getter: - (id)data;	// 0x339faa19
- (void)dealloc;	// 0x339f9b91
- (void)endElement:(id)element inNamespace:(id)aNamespace;	// 0x339fa3ad
// declared property setter: - (void)setShouldAddFormattingSpaces:(BOOL)addFormattingSpaces;	// 0x339faac9
// declared property getter: - (BOOL)shouldAddFormattingSpaces;	// 0x339faab9
- (void)startElement:(id)element inNamespace:(id)aNamespace withAttributeNamesAndValues:(id)attributeNamesAndValues;	// 0x339fa14d
- (void)startElement:(id)element inNamespace:(id)aNamespace withAttributes:(id)attributes;	// 0x339fa21d
@end

