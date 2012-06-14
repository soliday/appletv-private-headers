/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSArray, NSMutableSet;

@interface WebPluginDatabase : NSObject {
@private
	NSMutableDictionary *plugins;	// 4 = 0x4
	NSMutableSet *registeredMIMETypes;	// 8 = 0x8
	NSArray *plugInPaths;	// 12 = 0xc
	NSMutableSet *pluginInstanceViews;	// 16 = 0x10
}
@property(readonly, retain) NSMutableDictionary *plugins;	// G=0x30d20d2d; converted property
+ (id)_defaultPlugInPaths;	// 0x30d1dbb9
+ (void)closeSharedDatabase;	// 0x30d6cbf9
+ (void)setAdditionalWebPlugInPaths:(id)paths;	// 0x30d6cbb9
+ (id)sharedDatabase;	// 0x30d1da95
- (id)init;	// 0x30d1db25
- (void)_addPlugin:(id)plugin;	// 0x30d1fafd
- (id)_plugInPaths;	// 0x30d1e25d
- (void)_removePlugin:(id)plugin;	// 0x30d6cee5
- (id)_scanForNewPlugins;	// 0x30d1e095
- (void)addPluginInstanceView:(id)view;	// 0x30d6c999
- (void)close;	// 0x30d6c8e5
- (void)dealloc;	// 0x30d6cc15
- (void)destroyAllPluginInstanceViews;	// 0x30d6caf5
- (BOOL)isMIMETypeRegistered:(id)registered;	// 0x30d6c971
- (id)pluginForExtension:(id)extension;	// 0x30d6cc9d
- (id)pluginForMIMEType:(id)mimetype;	// 0x30d1fc51
// converted property getter: - (id)plugins;	// 0x30d20d2d
- (void)refresh;	// 0x30d1dc81
- (void)removePluginInstanceView:(id)view;	// 0x30d6c9bd
- (void)removePluginInstanceViewsFor:(id)aFor;	// 0x30d6c9e1
- (void)setPlugInPaths:(id)paths;	// 0x30d1dc39
@end

