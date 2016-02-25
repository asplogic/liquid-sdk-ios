//
//  LQUIElementSetupService.h
//  Liquid
//
//  Created by Miguel M. Almeida on 11/01/16.
//  Copyright © 2016 Liquid. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LQUIElementChanger.h"
#import "LQSRWebSocket.h"

@interface LQUIElementSetupService : NSObject <SRWebSocketDelegate>

- (void)enterDevelopmentModeWithToken:(NSString *)developmentToken;
- (void)exitDevelopmentMode;
- (instancetype)initWithUIElementChanger:(LQUIElementChanger *)elementChanger;
- (BOOL)applySetupMenuTargetsTo:(UIView *)view;

@end