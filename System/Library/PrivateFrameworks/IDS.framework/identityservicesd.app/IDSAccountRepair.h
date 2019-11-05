/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMUserDefaults;
@class IDSDAccountController, IDSSystemAccountAdapter, NSTimer;

@interface IDSAccountRepair : NSObject {

	BOOL _shouldSupressRepairLogic;
	BOOL _waitingForMigration;
	IDSDAccountController* _accountController;
	IDSSystemAccountAdapter* _systemAccountAdapter;
	id<IMUserDefaults> _userDefaults;
	NSTimer* _repairTimer;
	NSTimer* _phoneRepairTimer;
	double _lastBagRepairInterval;

}

@property (nonatomic,retain) IDSDAccountController * accountController;                   //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,retain) IDSSystemAccountAdapter * systemAccountAdapter;              //@synthesize systemAccountAdapter=_systemAccountAdapter - In the implementation block
@property (nonatomic,retain) id<IMUserDefaults> userDefaults;                             //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSTimer * repairTimer;                                       //@synthesize repairTimer=_repairTimer - In the implementation block
@property (nonatomic,retain) NSTimer * phoneRepairTimer;                                  //@synthesize phoneRepairTimer=_phoneRepairTimer - In the implementation block
@property (assign,nonatomic) double lastBagRepairInterval;                                //@synthesize lastBagRepairInterval=_lastBagRepairInterval - In the implementation block
@property (assign,nonatomic) BOOL waitingForMigration;                                    //@synthesize waitingForMigration=_waitingForMigration - In the implementation block
@property (assign,nonatomic) BOOL shouldSupressRepairLogic;                               //@synthesize shouldSupressRepairLogic=_shouldSupressRepairLogic - In the implementation block
+(double)_phoneNumberRepairIntervalForCount:(long long)arg1 ;
+(double)_phoneNumberRepairInterval;
+(double)_phoneNumberRepairMaxInterval;
-(id<IMUserDefaults>)userDefaults;
-(void)setUserDefaults:(id<IMUserDefaults>)arg1 ;
-(void)repairAccounts;
-(void)setAccountController:(IDSDAccountController *)arg1 ;
-(IDSDAccountController *)accountController;
-(void)setShouldSupressRepairLogic:(BOOL)arg1 ;
-(void)_repairTimerHit:(id)arg1 ;
-(void)setupPhoneNumberRepairTimer;
-(BOOL)shouldSupressRepairLogic;
-(void)_repairAccountsWithSuccessfulPhoneNumberRegistration;
-(void)repairiCloudBasedAccounts;
-(void)_repairAccountsWithSuccessfullAppleIDRegistrationForDSID:(id)arg1 service:(id)arg2 ;
-(BOOL)_shouldBypassRepairLogic;
-(void)_resetPhoneNumberRepairCounter;
-(void)_createAndEnableExistingSystemAccounts;
-(void)_repairiTunesBasedAccounts;
-(BOOL)_hasActiveAppleIDBasedAccountOnService:(id)arg1 ;
-(id)_activeAppleIDAccount;
-(id)_createiTunesAccountFromSystemIfNeeded;
-(void)repairService:(id)arg1 withPrimaryUserName:(id)arg2 ;
-(BOOL)_shouldNotSetupPhoneNumberRepairTimer;
-(id)_lastRepairIntervalFromPrefs;
-(id)_totalRepairCountFromPrefs;
-(void)_phoneNumberRepairTimerHit:(id)arg1 ;
-(BOOL)_repairPhoneNumberAccounts;
-(id)initWithAccountController:(id)arg1 systemAccountAdapter:(id)arg2 userDefaults:(id)arg3 ;
-(void)forceRepairAccounts:(id)arg1 ;
-(void)kickRepairForAllRegistrationsSucceeded:(id)arg1 ;
-(void)recalculatePhoneRepairTimer;
-(IDSSystemAccountAdapter *)systemAccountAdapter;
-(void)setSystemAccountAdapter:(IDSSystemAccountAdapter *)arg1 ;
-(NSTimer *)repairTimer;
-(void)setRepairTimer:(NSTimer *)arg1 ;
-(NSTimer *)phoneRepairTimer;
-(void)setPhoneRepairTimer:(NSTimer *)arg1 ;
-(double)lastBagRepairInterval;
-(void)setLastBagRepairInterval:(double)arg1 ;
-(BOOL)waitingForMigration;
-(void)setWaitingForMigration:(BOOL)arg1 ;
@end

