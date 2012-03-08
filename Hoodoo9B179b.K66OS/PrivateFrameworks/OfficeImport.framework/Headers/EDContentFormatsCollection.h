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
- (id)init;	// 0x3280bfa1
- (void)addDefaultWithNSString:(id)nsstring formatId:(unsigned)anId;	// 0x3280c49d
- (unsigned)addObject:(id)object;	// 0x3280c755
- (unsigned)addOrEquivalentObject:(id)object;	// 0x32811395
- (bool)isOverwritingKeyOK;	// 0x32981a19
- (void)setupDefaults;	// 0x3280c05d
@end
