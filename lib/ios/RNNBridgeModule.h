#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "RNNCommandsHandler.h"

#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#endif



@interface RNNBridgeModule : NSObject <RCTBridgeModule>

-(instancetype)initWithCommandsHandler:(RNNCommandsHandler*)commandsHandler;

@end
