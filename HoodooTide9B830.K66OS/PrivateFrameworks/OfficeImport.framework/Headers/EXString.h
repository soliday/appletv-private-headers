/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EXString : NSObject {
}
+ (void)buildEDString:(id)string fromChildrenOfNode:(xmlNode *)node edFont:(id)font keepWhitespace:(bool)whitespace state:(id)state;	// 0x31338f81
+ (void)buildEDString:(id)string fromNode:(xmlNode *)node edFont:(id)font keepWhitespace:(bool)whitespace state:(id)state;	// 0x31339081
+ (void)buildEDString:(id)string fromText:(id)text edFont:(id)font keepWhitespace:(bool)whitespace state:(id)state;	// 0x31338d41
+ (id)cleanupWhitespace:(id)whitespace;	// 0x31338ed9
+ (id)edStringWithRunsFromXmlDivElement:(xmlNode *)xmlDivElement state:(id)state;	// 0x31338ce5
+ (id)edStringWithRunsFromXmlStringElement:(xmlNode *)xmlStringElement state:(id)state;	// 0x312894a1
+ (id)edTextFromXmlStringElement:(xmlNode *)xmlStringElement;	// 0x31288e45
+ (void)parseStringWithAsciiCode:(id)asciiCode;	// 0x31288f41
+ (id)readStringWithAsciiCodeFromXmlStringElement:(xmlNode *)xmlStringElement;	// 0x31288ead
@end

