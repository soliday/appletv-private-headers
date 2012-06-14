/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUSymbolExtractor.h"


@interface VMUDebugMapExtractor : VMUSymbolExtractor {
}
+ (id)debugMapExtractorWithMachOHeader:(id)machOHeader;	// 0x31bbc5e1
- (id)initWithMachOHeader:(id)machOHeader;	// 0x31bbc42d
- (void)readDebugMapsFromMachOHeader:(id)machOHeader nsyms:(unsigned)nsyms nlist:(id)nlist stringTable:(id)table;	// 0x31bbc629
@end

