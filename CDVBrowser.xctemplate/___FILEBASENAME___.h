//  Created by Jesse MacFadyen on 10-05-29.
//  Copyright 2010 Nitobi. All rights reserved.
//  Copyright 2012, Randy McMillan
//
//  ___FILEBASENAME___ Template Created Jan 7 2013
//  Copyright 2013 @RandyMcMillan

//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright ___ORGANIZATIONNAME___ ___YEAR___. All rights reserved.

#import <Cordova/CDVPlugin.h>
#import "___FILEBASENAME___ViewController.h"

@interface ___FILEBASENAME___ : CDVPlugin <___FILEBASENAME___Delegate>{}

@property (nonatomic, strong) ___FILEBASENAME___ViewController *___FILEBASENAME___;



/*
 *
 *   - (void)myPluginMethod:(CDVInvokedUrlCommand*)command
 *   {
 *   // Check command.arguments here.
 *   [self.commandDelegate runInBackground:^{
 *   NSString* payload = nil;
 *   // Some blocking logic...
 *   CDVPluginResult* pluginResult = [CDVPluginResult resultWithStatus:CDVCommandStatus_OK messageAsString:payload];
 *   // The sendPluginResult method is thread-safe.
 *   [self.commandDelegate sendPluginResult:pluginResult callbackId:command.callbackId];
 *   }];
 *   }
 *
 */



- (void)showWebPage:(CDVInvokedUrlCommand*)command;
- (void)onChildLocationChange:(NSString *)newLoc;

@end
