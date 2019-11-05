/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <Setup/SATVStep.h>

@class NSDate, SATVNavigationController, NSString;

@interface SATVStepViewController : UIViewController <SATVStep> {

	/*^block*/id menuHandler;
	long long _buddyVersion;
	NSDate* _datePresented;

}

@property (assign,nonatomic) long long buddyVersion;                                       //@synthesize buddyVersion=_buddyVersion - In the implementation block
@property (nonatomic,retain) NSDate * datePresented;                                       //@synthesize datePresented=_datePresented - In the implementation block
@property (nonatomic,retain) SATVNavigationController * navigationController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id menuHandler; 
@property (nonatomic,readonly) BOOL isConfigured; 
+(BOOL)isSupported;
+(id)previousPresentationRecord;
+(BOOL)isSupportedForUpgrade;
+(id)stableKey;
+(id)stepPresentationRecord;
-(void)reset;
-(BOOL)isConfigured;
-(void)loadView;
-(void)autoAdvance;
-(void)setMenuHandler:(id)arg1 ;
-(long long)buddyVersion;
-(id)menuHandler;
-(void)deviceDidActivate:(/*^block*/id)arg1 ;
-(void)_handleMenuAction;
-(void)setBuddyVersion:(long long)arg1 ;
-(NSDate *)datePresented;
-(void)setDatePresented:(NSDate *)arg1 ;
@end

