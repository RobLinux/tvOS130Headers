/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:22 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, TVSiCloudAccountManager;

@interface TVSettingsICloudAccountFacade : NSObject {

	ACAccount* _lazyActiveAccount;
	TVSiCloudAccountManager* _accountManager;

}

@property (nonatomic,retain) TVSiCloudAccountManager * accountManager;              //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,retain) ACAccount * lazyActiveAccount; 
+(BOOL)automaticallyNotifiesObserversOfLazyActiveAccount;
-(id)initWithAccountManager:(id)arg1 ;
-(TVSiCloudAccountManager *)accountManager;
-(void)setAccountManager:(TVSiCloudAccountManager *)arg1 ;
-(void)setLazyActiveAccount:(ACAccount *)arg1 ;
-(ACAccount *)lazyActiveAccount;
-(void)reloadLazyAccount;
@end

