// Copyright 2018-present 650 Industries. All rights reserved.

#import <React/RCTBridge.h>

// Swift classes need forward-declaration in the headers.
@class EXAppContext;
@class EXRuntime;
@class EXJavaScriptObject;
@class EXJavaScriptRuntime;

@interface EXJavaScriptRuntimeManager : NSObject

/**
 Gets the JS runtime from the given bridge. May return `nil` when
 the runtime is not available yet or the remote debugging is enabled.
 */
+ (nullable EXRuntime *)runtimeFromBridge:(nonnull RCTBridge *)bridge NS_SWIFT_NAME(runtime(fromBridge:));

/**
 Installs ExpoModules host object in the runtime of the given app context.
 Returns a bool value whether the installation succeeded.
 */
+ (BOOL)installExpoModulesHostObject:(nonnull EXAppContext *)appContext;

+ (void)decorateEventEmitter:(nonnull EXJavaScriptObject *)object
                   inRuntime:(nonnull EXJavaScriptRuntime *)runtime;

+ (nonnull EXJavaScriptObject *)getEventEmitterClass:(nonnull EXJavaScriptRuntime *)runtime;

@end
