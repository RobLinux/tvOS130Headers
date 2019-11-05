/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WFWebSheetViewControllerDelegate.h>
#import <WiFiKit/WFProviderContext.h>

@protocol WFNetworkListRecord;
@class WFWebSheetViewController, NSTimer, NSString;

@interface WFCaptiveContext : NSObject <WFWebSheetViewControllerDelegate, WFProviderContext> {

	BOOL _readyForPresentation;
	id<WFNetworkListRecord> network;
	long long requestedFields;
	/*^block*/id _readyForPresentationHandler;
	/*^block*/id _completionHandler;
	WFWebSheetViewController* _webSheetViewController;
	NSTimer* _timer;

}

@property (nonatomic,retain) WFWebSheetViewController * webSheetViewController;              //@synthesize webSheetViewController=_webSheetViewController - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) BOOL readyForPresentation;                                      //@synthesize readyForPresentation=_readyForPresentation - In the implementation block
@property (nonatomic,copy) id readyForPresentationHandler;                                   //@synthesize readyForPresentationHandler=_readyForPresentationHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<WFNetworkListRecord> network; 
@property (nonatomic,readonly) long long requestedFields; 
-(id)init;
-(void)cancel;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id<WFNetworkListRecord>)network;
-(NSTimer *)timer;
-(long long)requestedFields;
-(void)webSheetViewController:(id)arg1 didTerminateWithError:(id)arg2 ;
-(void)webSheetViewControllerContentReadyForPresentation:(id)arg1 ;
-(void)_presentationTimerFired:(id)arg1 ;
-(BOOL)readyForPresentation;
-(WFWebSheetViewController *)webSheetViewController;
-(void)_readyForPresentation:(id)arg1 ;
-(id)readyForPresentationHandler;
-(void)setReadyForPresentationHandler:(id)arg1 ;
-(void)setWebSheetViewController:(WFWebSheetViewController *)arg1 ;
-(void)setReadyForPresentation:(BOOL)arg1 ;
@end

