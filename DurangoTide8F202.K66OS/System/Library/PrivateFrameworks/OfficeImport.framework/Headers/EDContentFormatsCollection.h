/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedCollection.h"


__attribute__((visibility("hidden")))
@interface EDContentFormatsCollection : EDKeyedCollection {
@private
	unsigned mNextContentFormatId;	// 12 = 0xc
}
- (id)init;	// 0x319db8f5
- (void)addDefaultWithNSString:(id)nsstring formatId:(unsigned)anId;	// 0x319dbd05
- (unsigned)addObject:(id)object;	// 0x319dbe89
- (unsigned)addOrEquivalentObject:(id)object;	// 0x319de459
- (bool)isOverwritingKeyOK;	// 0x31acf17d
- (void)setupDefaults;	// 0x319db941
@end

