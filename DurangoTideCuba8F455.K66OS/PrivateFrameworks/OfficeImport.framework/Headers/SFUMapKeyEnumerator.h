/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSEnumerator.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SFUMapKeyEnumerator : NSEnumerator {
@private
	struct {
		unsigned _pi;
		unsigned _si;
		void *_bs;
	} m_enumerator;	// 4 = 0x4
}
+ (id)mapKeyEnumeratorWithMap:(id)map;	// 0x32d89bd9
- (id)initWithMap:(id)map;	// 0x32d89c8d
- (void)dealloc;	// 0x32d89ce9
- (id)nextObject;	// 0x32d89d25
@end

