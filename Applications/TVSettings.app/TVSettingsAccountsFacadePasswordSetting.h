/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettings/NSURLSessionDelegate.h>
#import <TVSettings/AMSURLProtocolDelegate.h>

@class ACAccount, NSNumber, AMSBag, UIViewController, NSTimer, AMSSyncPasswordSettingsTask, NSString;

@interface TVSettingsAccountsFacadePasswordSetting : NSObject <NSURLSessionDelegate, AMSURLProtocolDelegate> {

	ACAccount* _account;
	NSNumber* _asnPaidSetting;
	unsigned long long _asnPaidSettingValue;
	NSNumber* _asnFreeSetting;
	unsigned long long _asnFreeSettingValue;
	AMSBag* _amsBag;
	UIViewController* _presentingViewController;
	NSTimer* _syncCoalesceTimer;
	AMSSyncPasswordSettingsTask* _syncTask;

}

@property (nonatomic,retain) AMSBag * amsBag;                                                 //@synthesize amsBag=_amsBag - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) NSTimer * syncCoalesceTimer;                                     //@synthesize syncCoalesceTimer=_syncCoalesceTimer - In the implementation block
@property (nonatomic,retain) AMSSyncPasswordSettingsTask * syncTask;                          //@synthesize syncTask=_syncTask - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                                           //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSNumber * asnPaidSetting;                                     //@synthesize asnPaidSetting=_asnPaidSetting - In the implementation block
@property (nonatomic,readonly) unsigned long long asnPaidSettingValue;                        //@synthesize asnPaidSettingValue=_asnPaidSettingValue - In the implementation block
@property (nonatomic,readonly) NSNumber * asnFreeSetting;                                     //@synthesize asnFreeSetting=_asnFreeSetting - In the implementation block
@property (nonatomic,readonly) unsigned long long asnFreeSettingValue;                        //@synthesize asnFreeSettingValue=_asnFreeSettingValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_accountStoreDidChange:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(ACAccount *)account;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(AMSSyncPasswordSettingsTask *)syncTask;
-(void)setSyncTask:(AMSSyncPasswordSettingsTask *)arg1 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setAmsBag:(AMSBag *)arg1 ;
-(AMSBag *)amsBag;
-(NSNumber *)asnPaidSetting;
-(void)setAsnPaidSetting:(NSNumber *)arg1 ;
-(NSNumber *)asnFreeSetting;
-(void)setAsnFreeSetting:(NSNumber *)arg1 ;
-(void)setAsnPaidSetting:(id)arg1 presentingViewController:(id)arg2 ;
-(unsigned long long)asnPaidSettingValue;
-(void)setAsnFreeSetting:(id)arg1 presentingViewController:(id)arg2 ;
-(void)_setPaidSettingValue:(unsigned long long)arg1 freeSettingValue:(unsigned long long)arg2 ;
-(void)_updatePaidSetting:(unsigned long long)arg1 freeSetting:(unsigned long long)arg2 ;
-(void)_refreshAccount;
-(void)_syncPasswordPaidSetting:(unsigned long long)arg1 freeSetting:(unsigned long long)arg2 originalPaidSetting:(unsigned long long)arg3 originalFreeSetting:(unsigned long long)arg4 ;
-(void)setSyncCoalesceTimer:(NSTimer *)arg1 ;
-(id)initWithAccount:(id)arg1 amsBag:(id)arg2 ;
-(unsigned long long)asnFreeSettingValue;
-(NSTimer *)syncCoalesceTimer;
@end

