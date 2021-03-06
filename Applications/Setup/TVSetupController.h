/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:58 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/BuddyLanguageChangeObserverDelegate.h>

@class SATVWindow, UIView, SATVNavigationController, NSString, BuddyLanguageChangeObserver, SATVAbstractFlow, SATVFlowManager;

@interface TVSetupController : NSObject <BuddyLanguageChangeObserverDelegate> {

	SATVWindow* _window;
	UIView* _windowView;
	unsigned long long _earliestCompletionTime;
	SATVNavigationController* _nav;
	BOOL _buddyDone;
	NSString* _languageAtStartup;
	NSString* _localeIdentifierAtStartup;
	BuddyLanguageChangeObserver* _languageObserver;
	SATVAbstractFlow* _flow;
	SATVFlowManager* _flowManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSetupController;
-(void)dealloc;
-(void)run;
-(void)resume;
-(void)_localeChanged;
-(id)navigationController;
-(void)didEnterBackground;
-(void)resign;
-(BOOL)isInOutOfBoxFlow;
-(void)observer:(id)arg1 didObserveLanguageChange:(BOOL)arg2 localeChange:(BOOL)arg3 ;
-(void)_finishBuddy;
-(void)setBuddyComplete;
-(void)suspendApp;
-(void)_refreshLanguage;
-(void)_kickOffOldBuddyFlow;
-(void)_finishBuddyWhenReady;
-(void)_createNav;
-(void)respring;
-(void)exitBuddy;
-(BOOL)deviceHasWiFi;
@end

