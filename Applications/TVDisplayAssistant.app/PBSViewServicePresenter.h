/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:56:07 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVDisplayAssistant.app/TVDisplayAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBSViewServicePresenter <NSObject>
@optional
-(void)viewServiceBeginPresentationWithOptions:(id)arg1 completion:(/*^block*/id)arg2;
-(void)viewServiceUpdatePresentationWithOptions:(id)arg1;
-(void)viewServiceHandleMessage:(id)arg1 reply:(/*^block*/id)arg2;

@required
+(id)_exportedInterface;
-(void)viewServiceBeginPresentationWithOptions:(id)arg1;
-(void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(/*^block*/id)arg2;

@end

