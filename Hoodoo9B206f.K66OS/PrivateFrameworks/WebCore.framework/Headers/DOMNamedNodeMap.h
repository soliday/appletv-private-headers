/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"


__attribute__((visibility("hidden")))
@interface DOMNamedNodeMap : DOMObject {
}
@property(readonly, assign) unsigned length;	// G=0x334b811d; 
- (void)dealloc;	// 0x334b8149
- (void)finalize;	// 0x334b9251
- (id)getNamedItem:(id)item;	// 0x334b9091
- (id)getNamedItemNS:(id)ns :(id)arg2;	// 0x334b87b5
- (id)getNamedItemNS:(id)ns localName:(id)name;	// 0x334b89f1
- (id)item:(unsigned)item;	// 0x334b8c2d
// declared property getter: - (unsigned)length;	// 0x334b811d
- (id)removeNamedItem:(id)item;	// 0x334b8d6d
- (id)removeNamedItemNS:(id)ns :(id)arg2;	// 0x334b81c5
- (id)removeNamedItemNS:(id)ns localName:(id)name;	// 0x334b8415
- (id)setNamedItem:(id)item;	// 0x334b8f41
- (id)setNamedItemNS:(id)ns;	// 0x334b8665
@end

