/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <SiriUICore/SUICProgressIndicatorViewControllerDataSource.h>

@class SUICProgressIndicatorViewController, UIButton, SUICProgressStateMachine, NSString, NSProgress;

@interface SUICProgressDebugViewController : UIViewController <SUICProgressIndicatorViewControllerDataSource> {

	SUICProgressIndicatorViewController* _indicatorViewController;
	UIButton* _eventGeneratorButton;
	SUICProgressStateMachine* _stateMachine;
	unsigned long long _testEventLoopCounter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
-(NSProgress *)progress;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)stateMachineForProgressIndicatorViewController:(id)arg1 ;
-(void)_eventGeneratorButtonTouchedUpInside:(id)arg1 ;
@end

