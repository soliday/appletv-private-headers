/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVJSObject.h"
#import <NSObject.h> // Unknown library

@class BRXMLNode;

__attribute__((visibility("hidden")))
@interface ATVJSNode : NSObject <ATVJSObject> {
@private
	OpaqueJSValue *jsObjectRef;	// 4 = 0x4
	BRXMLNode *xmlNode;	// 8 = 0x8
}
@property(assign, nonatomic) OpaqueJSValue *jsObjectRef;	// G=0x367a17e1; S=0x367a17f1; @synthesize
@property(retain, nonatomic) BRXMLNode *xmlNode;	// G=0x367a1801; S=0x367a1811; @synthesize
+ (void)addConstructorToObject:(OpaqueJSValue *)object inContext:(OpaqueJSContext *)context;	// 0x367a1445
+ (OpaqueJSValue *)constructObjectWithClassName:(id)className withATVJSNodeClass:(Class)atvjsnodeClass inContext:(OpaqueJSContext *)context;	// 0x367a161d
+ (id)nodeFromValue:(OpaqueJSValue *)value inContext:(OpaqueJSContext *)context exception:(const OpaqueJSValue **)exception;	// 0x367a16a5
+ (id)nodeInContext:(OpaqueJSContext *)context withNode:(id)node;	// 0x367a1715
- (void)dealloc;	// 0x367a179d
// declared property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x367a17e1
// declared property setter: - (void)setJsObjectRef:(OpaqueJSValue *)ref;	// 0x367a17f1
// declared property setter: - (void)setXmlNode:(id)node;	// 0x367a1811
// declared property getter: - (id)xmlNode;	// 0x367a1801
@end

