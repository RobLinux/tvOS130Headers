/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>
#import <ActionKit/WFWebViewControllerDelegate.h>

@class NSString;

@interface WFShowWebPageAction : WFAction <WFWebViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2 ;
-(void)webViewControllerDidFinish:(id)arg1 ;
@end
