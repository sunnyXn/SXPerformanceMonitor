//
//  SXPerformanceMonitor.h
//  SXPerfromMonitor
//
//  Created by Sunny on 2019/4/17.
//  Copyright © 2019 Sunny. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface SXPerformanceMonitor : NSObject

+ (instancetype)sharedInstance;

- (void)startMonitor;
- (void)stopMonitor;


@end


