//
//  SXBackTraceAnalyzes.h
//  SXPerfromMonitor
//
//  Created by Sunny on 2019/4/17.
//  Copyright © 2019 Sunny. All rights reserved.
//

#import <Foundation/Foundation.h>

#define SXLOG_CURRENT    NSLog(@"%@",[SXBackTraceAnalyzes sx_backtraceOfCurrentThread]);
#define SXLOG_MAIN       NSLog(@"%@",[SXBackTraceAnalyzes sx_backtraceOfMainThread]);
#define SXLOG_ALL        NSLog(@"%@",[SXBackTraceAnalyzes sx_backtraceOfAllThread]);

@interface SXBackTraceAnalyzes : NSObject

+ (NSString *)sx_backtraceOfCurrentThread;
+ (NSString *)sx_backtraceOfMainThread;
+ (NSString *)sx_backtraceOfAllThread;
+ (NSString *)sx_backtraceOfNSThread:(NSThread *)thread;

@end

